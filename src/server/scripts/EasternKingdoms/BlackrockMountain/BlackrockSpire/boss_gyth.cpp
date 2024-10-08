/*
 * This file is part of the TrinityCore Project. See AUTHORS file for Copyright information
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#include "ScriptMgr.h"
#include "blackrock_spire.h"
#include "GameObject.h"
#include "InstanceScript.h"
#include "MotionMaster.h"
#include "ScriptedCreature.h"

enum Spells
{
    SPELL_REND_MOUNTS               = 16167, // Change model
    SPELL_CORROSIVE_ACID            = 16359, // Combat (self cast)
    SPELL_FLAMEBREATH               = 16390, // Combat (Self cast)
    SPELL_FREEZE                    = 16350, // Combat (Self cast)
    SPELL_KNOCK_AWAY                = 10101, // Combat
    SPELL_SUMMON_REND               = 16328  // Summons Rend near death
};

enum Misc
{
    NEFARIUS_PATH_2                 = 1379671,
    NEFARIUS_PATH_3                 = 1379672,
    GYTH_PATH_1                     = 11037448,
};

enum Events
{
    EVENT_CORROSIVE_ACID            = 1,
    EVENT_FREEZE                    = 2,
    EVENT_FLAME_BREATH              = 3,
    EVENT_KNOCK_AWAY                = 4,
    EVENT_SUMMONED_1                = 5,
    EVENT_SUMMONED_2                = 6
};

struct boss_gyth : public BossAI
{
    boss_gyth(Creature* creature) : BossAI(creature, DATA_GYTH)
    {
        Initialize();
    }

    void Initialize()
    {
        SummonedRend = false;
    }

    bool SummonedRend;

    void Reset() override
    {
        Initialize();
        if (instance->GetBossState(DATA_GYTH) == IN_PROGRESS)
        {
            instance->SetBossState(DATA_GYTH, DONE);
            me->DespawnOrUnsummon();
        }
    }

    void JustEngagedWith(Unit* who) override
    {
        BossAI::JustEngagedWith(who);

        events.ScheduleEvent(EVENT_CORROSIVE_ACID, 8s, 16s);
        events.ScheduleEvent(EVENT_FREEZE, 8s, 16s);
        events.ScheduleEvent(EVENT_FLAME_BREATH, 8s, 16s);
        events.ScheduleEvent(EVENT_KNOCK_AWAY, 12s, 18s);
    }

    void JustDied(Unit* /*killer*/) override
    {
        instance->SetBossState(DATA_GYTH, DONE);
    }

    void SetData(uint32 /*type*/, uint32 data) override
    {
        switch (data)
        {
            case 1:
                events.ScheduleEvent(EVENT_SUMMONED_1, 1s);
                break;
            default:
                break;
        }
    }

    void UpdateAI(uint32 diff) override
    {

        if (!SummonedRend && HealthBelowPct(5))
        {
            DoCast(me, SPELL_SUMMON_REND);
            me->RemoveAura(SPELL_REND_MOUNTS);
            SummonedRend = true;
        }

        if (!UpdateVictim())
        {
            events.Update(diff);

            while (uint32 eventId = events.ExecuteEvent())
            {
                switch (eventId)
                {
                    case EVENT_SUMMONED_1:
                        me->AddAura(SPELL_REND_MOUNTS, me);
                        if (GameObject* portcullis = me->FindNearestGameObject(GO_DR_PORTCULLIS, 40.0f))
                            portcullis->UseDoorOrButton();
                        if (Creature* victor = me->FindNearestCreature(NPC_LORD_VICTOR_NEFARIUS, 75.0f, true))
                            victor->AI()->SetData(1, 1);
                        events.ScheduleEvent(EVENT_SUMMONED_2, 2s);
                        break;
                    case EVENT_SUMMONED_2:
                        me->GetMotionMaster()->MovePath(GYTH_PATH_1, false);
                        break;
                    default:
                        break;
                }
            }
            return;
        }

        events.Update(diff);

        if (me->HasUnitState(UNIT_STATE_CASTING))
            return;

        while (uint32 eventId = events.ExecuteEvent())
        {
            switch (eventId)
            {
                case EVENT_CORROSIVE_ACID:
                    DoCast(me, SPELL_CORROSIVE_ACID);
                    events.ScheduleEvent(EVENT_CORROSIVE_ACID, 10s, 16s);
                    break;
                case EVENT_FREEZE:
                    DoCast(me, SPELL_FREEZE);
                    events.ScheduleEvent(EVENT_FREEZE, 10s, 16s);
                    break;
                case EVENT_FLAME_BREATH:
                    DoCast(me, SPELL_FLAMEBREATH);
                    events.ScheduleEvent(EVENT_FLAME_BREATH, 10s, 16s);
                    break;
                case EVENT_KNOCK_AWAY:
                    DoCastVictim(SPELL_KNOCK_AWAY);
                    events.ScheduleEvent(EVENT_KNOCK_AWAY, 14s, 20s);
                    break;
                default:
                    break;
            }

            if (me->HasUnitState(UNIT_STATE_CASTING))
                return;
        }
    }
};

void AddSC_boss_gyth()
{
    RegisterBlackrockSpireCreatureAI(boss_gyth);
}
