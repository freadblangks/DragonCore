-- Add missing spawns and pooling for Battered Chest ID: 2849 in Ghostlands
SET @POOLID := 0;
SELECT @POOLID := MAX(entry) FROM pool_template;
SET @OGUID := 0;
SELECT @OGUID := MAX(guid) FROM gameobject;

DELETE FROM `gameobject` WHERE `guid` BETWEEN @OGUID+0 AND @OGUID+15;
INSERT INTO `gameobject` (`guid`, `id`, `map`, `zoneId`, `areaId`, `spawnDifficulties`, `phaseUseFlags`, `PhaseId`, `PhaseGroup`, `terrainSwapMap`, `position_x`, `position_y`, `position_z`, `orientation`, `rotation0`, `rotation1`, `rotation2`, `rotation3`, `spawntimesecs`, `animprogress`, `state`, `VerifiedBuild`) VALUES
(@OGUID+0, 106319, 530, 3433, 3514, "", 0, 0, 0, -1, 7943.26904296875, -6716.94677734375, 35.34872817993164062, 3.543023586273193359, 0, 0, -0.97992420196533203, 0.199370384216308593, 360, 255, 1, 40892), -- Dead scar
(@OGUID+1, 106319, 530, 3433, 3509, "", 0, 0, 0, -1, 7651.68212890625, -7144.56396484375, 153.5474395751953125, 5.340708732604980468, 0, 0, -0.45398998260498046, 0.891006767749786376, 360, 255, 1, 42917), -- Amani Catacombs
(@OGUID+2, 106319, 530, 3433, 3433, "", 0, 0, 0, -1, 7181.9384765625, -5858.966796875, 14.44211483001708984, 3.106652259826660156, 0, 0, 0.999847412109375, 0.017469281330704689, 360, 255, 1, 42917), -- Windrunner Village
(@OGUID+3, 106319, 530, 3433, 3433, "", 0, 0, 0, -1, 7050.58251953125, -5736.326171875, 84.08641815185546875, 0.383971005678176879, 0, 0, 0.190808296203613281, 0.981627285480499267, 360, 255, 1, 42917), -- Windrunner Spire
(@OGUID+4, 106319, 530, 3433, 3491, "", 0, 0, 0, -1, 7194.93896484375, -5962.3603515625, 21.32486915588378906, 2.67034769058227539, 0, 0, 0.972369194030761718, 0.233448356389999389, 360, 255, 1, 41446), -- Windrunner Village
(@OGUID+5, 106319, 530, 3433, 3505, "", 0, 0, 0, -1, 7138.8984375, -6196.390625, 21.56857109069824218, 0.942476630210876464, 0, 0, 0.453989982604980468, 0.891006767749786376, 360, 255, 1, 41446), -- Underlight Mines
(@OGUID+6, 106319, 530, 3433, 3490, "", 0, 0, 0, -1, 7917.97314453125, -6254.814453125, 39.78503036499023437, 1.204277276992797851, 0, 0, 0.56640625, 0.824126183986663818, 360, 255, 1, 40892), -- Goldenmist Village
(@OGUID+7, 106319, 530, 3433, 3509, "", 0, 0, 0, -1, 7593.18603515625, -7280.60595703125, 155.0066375732421875, 3.473210096359252929, 0, 0, -0.98628520965576171, 0.165049895644187927, 360, 255, 1, 41446), -- Amani Catacombs
(@OGUID+8, 106319, 530, 3433, 3509, "", 0, 0, 0, -1, 7626.720703125, -7477.81494140625, 161.88909912109375, 6.14356088638305664, 0, 0, -0.06975555419921875, 0.997564136981964111, 360, 255, 1, 41446), -- Amani Catacombs
(@OGUID+9, 106319, 530, 3433, 3495, "", 0, 0, 0, -1, 7828.2880859375, -7910.99462890625, 294.16424560546875, 0.017452461645007133, 0, 0, 0.008726119995117187, 0.999961912631988525, 360, 255, 1, 40892), -- Dawnstar Spire
(@OGUID+10, 106319, 530, 3433, 3505, "", 0, 0, 0, -1, 7151.56103515625, -6244.48974609375, 21.80349540710449218, 0.785396754741668701, 0, 0, 0.38268280029296875, 0.923879802227020263, 360, 255, 1, 41446), -- Underlight Mines
(@OGUID+11, 106319, 530, 3433, 3490, "", 0, 0, 0, -1, 7988.2568359375, -6098.12744140625, 20.41779518127441406, 0.733038187026977539, 0, 0, 0.358367919921875, 0.933580458164215087, 360, 255, 1, 56713), -- Goldenmist Village
(@OGUID+12, 106319, 530, 3433, 3491, "", 0, 0, 0, -1, 7344.84814453125, -5957.92431640625, 15.93715286254882812, 6.03883981704711914, 0, 0, -0.12186908721923828, 0.9925462007522583, 360, 255, 1, 56713), -- Windrunner Village
(@OGUID+13, 106319, 530, 3433, 3492, "", 0, 0, 0, -1, 7009.5205078125, -5700.59375, 102.6014862060546875, 1.291541695594787597, 0, 0, 0.60181427001953125, 0.798636078834533691, 360, 255, 1, 56713), -- Windrunner Spire
(@OGUID+14, 106319, 530, 3433, 3433, "", 0, 0, 0, -1, 7019.9306640625, -5693.78759765625, 82.67047882080078125, 2.251473426818847656, 0, 0, 0.902585029602050781, 0.430511653423309326, 360, 255, 1, 56713), -- Windrunner Spire
(@OGUID+15, 106319, 530, 3433, 3497, "", 0, 0, 0, -1, 7966.60693359375, -6557.32861328125, 57.7398681640625, 2.164205789566040039, 0, 0, 0.882946968078613281, 0.469472706317901611, 360, 255, 1, 56713); -- An'daroth

UPDATE `gameobject` SET `spawntimesecs`=360, `animprogress`=225, `state`=1 WHERE `guid` IN (27337,27378,27422,27446,27493,27515,33980,34000,34002);

DELETE FROM `pool_template` WHERE `entry` BETWEEN @POOLID AND @POOLID+5;
INSERT INTO `pool_template` (`entry`,`max_limit`,`description`) VALUES
(@POOLID,1,'Battered Chest (2849), Ghostlands, Chest Pool Goldenmist Village'),
(@POOLID+1,1,'Battered Chest (2849), Ghostlands, Chest Pool Windrunner Village'),
(@POOLID+2,1,'Battered Chest (2849), Ghostlands, Chest Pool Underlight Mines'),
(@POOLID+3,1,'Battered Chest (2849), Ghostlands, Chest Pool Windrunner Spire'),
(@POOLID+4,1,'Battered Chest (2849), Ghostlands, Chest Pool Amani Catacombs'),
(@POOLID+5,1,'Battered Chest (2849), Ghostlands, Chest Pool Ghostlands');

DELETE FROM `pool_members` WHERE `poolSpawnId` BETWEEN @POOLID AND @POOLID+5;
INSERT INTO `pool_members` (`type`,`spawnId`,`poolSpawnId`,`chance`,`description`) Values
(1,27422,@POOLID,0,'Battered Chest (2849), Goldenmist Village'),
(1,34002,@POOLID,0,'Battered Chest (2849), Goldenmist Village'),
(1,@OGUID+6,@POOLID,0,'Battered Chest (2849), Goldenmist Village'),
(1,@OGUID+11,@POOLID,0,'Battered Chest (2849), Goldenmist Village'),
(1,27446,@POOLID+1,0,'Battered Chest (2849), Windrunner Village'),
(1,@OGUID+2,@POOLID+1,0,'Battered Chest (2849), Windrunner Village'),
(1,@OGUID+4,@POOLID+1,0,'Battered Chest (2849), Windrunner Village'),
(1,@OGUID+12,@POOLID+1,0,'Battered Chest (2849), Windrunner Village'),
(1,27515,@POOLID+2,0,'Battered Chest (2849), Underlight Mines'),
(1,33980,@POOLID+2,0,'Battered Chest (2849), Underlight Mines'),
(1,@OGUID+5,@POOLID+2,0,'Battered Chest (2849), Underlight Mines'),
(1,@OGUID+10,@POOLID+2,0,'Battered Chest (2849), Underlight Mines'),
(1,27493,@POOLID+3,0,'Battered Chest (2849), Windrunner Spire'),
(1,@OGUID+3,@POOLID+3,0,'Battered Chest (2849), Windrunner Spire'),
(1,@OGUID+13,@POOLID+3,0,'Battered Chest (2849), Windrunner Spire'),
(1,@OGUID+14,@POOLID+3,0,'Battered Chest (2849), Windrunner Spire'),
(1,27337,@POOLID+4,0,'Battered Chest (2849), Amani Catacombs'),
(1,@OGUID+1,@POOLID+4,0,'Battered Chest (2849), Amani Catacombs'),
(1,@OGUID+7,@POOLID+4,0,'Battered Chest (2849), Amani Catacombs'),
(1,@OGUID+8,@POOLID+4,0,'Battered Chest (2849), Amani Catacombs'),
(1,34000,@POOLID+5,0,'Battered Chest (2849), Ghostlands'),
(1,27378,@POOLID+5,0,'Battered Chest (2849), Ghostlands'),
(1,@OGUID,@POOLID+5,0,'Battered Chest (2849), Ghostlands'),
(1,@OGUID+15,@POOLID+5,0,'Battered Chest (2849), Ghostlands');