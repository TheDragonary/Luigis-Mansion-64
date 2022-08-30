//Include this file at the bottom of behavior_data.c
const BehaviorScript bhvGhostHuntBoo[] = {
	BEGIN(OBJ_LIST_GENACTOR),
	OR_INT(oFlags, 8265),
	SET_INT(oIntangibleTimer, 0),
	SET_HOME(),
	SET_INT(oDamageOrCoinValue, 2),
	SET_HITBOX(140, 80),
	SET_HURTBOX(40, 60),
	SET_FLOAT(oGraphYOffset, 30),
	CALL_NATIVE( bhv_init_room),
	SPAWN_CHILD(116, 318769288),
	SET_OBJ_PHYSICS(30, 0, 65486, 1000, 1000, 200, 0, 0),
	CALL_NATIVE( bhv_boo_init),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_boo_loop),
	END_LOOP(),
};

const BehaviorScript bhvToadMessage[] = {
	BEGIN(OBJ_LIST_GENACTOR),
	OR_INT(oFlags, 16457),
	LOAD_ANIMATIONS(10022, 100727880),
	ANIMATE(6),
	SET_INTERACT_TYPE(8388608),
	SET_HITBOX(80, 100),
	SET_INT(oIntangibleTimer, 0),
	CALL_NATIVE( bhv_init_room),
	CALL_NATIVE( bhv_toad_message_init),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_toad_message_loop),
	END_LOOP(),
};

const BehaviorScript bhvStarDoor[] = {
	BEGIN(OBJ_LIST_SURFACE),
	SET_INT(oInteractType, 4),
	LOAD_COLLISION_DATA(col_castle_geo_000F00_0xe8491b),
	SET_INT(oInteractionSubtype, 32),
	OR_INT(oFlags, 193),
	SET_HITBOX(80, 100),
	SET_HOME(),
	SET_FLOAT(oDrawingDistance, 20000),
	CALL_NATIVE( bhv_door_init),
	SET_INT(oIntangibleTimer, 0),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_star_door_loop),
		CALL_NATIVE( bhv_star_door_loop_2),
		CALL_NATIVE( load_object_collision_model),
	END_LOOP(),
};

const BehaviorScript bhvBooInCastle[] = {
	BEGIN(OBJ_LIST_DEFAULT),
	OR_INT(oFlags, 8265),
	SET_HOME(),
	SET_FLOAT(oGraphYOffset, 60),
	SET_OBJ_PHYSICS(30, 0, 65486, 1000, 1000, 200, 0, 0),
	CALL_NATIVE( bhv_init_room),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_boo_in_castle_loop),
	END_LOOP(),
};

const BehaviorScript bhvDoorWarp[] = {
	BEGIN(OBJ_LIST_SURFACE),
	SET_INT(oInteractType, 2048),
	GOTO( Bhv_Custom_0x13000b14),
};

const BehaviorScript Bhv_Custom_0x13000b14[] = {
	OR_INT(oFlags, 201),
	LOAD_ANIMATIONS(10022, 50419392),
	ANIMATE(0),
	LOAD_COLLISION_DATA(col_key_door_geo_0xacf284),
	SET_HITBOX(80, 100),
	SET_INT(oIntangibleTimer, 0),
	SET_FLOAT(oCollisionDistance, 1000),
	SET_HOME(),
	CALL_NATIVE( bhv_door_init),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_door_loop),
	END_LOOP(),
};

const BehaviorScript bhvWarp[] = {
	BEGIN(OBJ_LIST_LEVEL),
	OR_INT(oFlags, 9),
	SET_INT(oInteractType, 8192),
	SET_INT(oIntangibleTimer, 0),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_warp_loop),
	END_LOOP(),
};

const BehaviorScript bhvInstantActiveWarp[] = {
	BREAK(),
};

const BehaviorScript bhvAirborneWarp[] = {
	BREAK(),
};

const BehaviorScript bhvAirborneDeathWarp[] = {
	BREAK(),
};

const BehaviorScript bhvHardAirKnockBackWarp[] = {
	BREAK(),
};

const BehaviorScript bhvDeathWarp[] = {
	BREAK(),
};

const BehaviorScript bhvLaunchStarCollectWarp[] = {
	BREAK(),
};

const BehaviorScript bhvLaunchDeathWarp[] = {
	BREAK(),
};

const BehaviorScript bhvAirborneStarCollectWarp[] = {
	BREAK(),
};

const BehaviorScript bhvPaintingStarCollectWarp[] = {
	BREAK(),
};

const BehaviorScript bhvPaintingDeathWarp[] = {
	BREAK(),
};

const BehaviorScript bhvDoor[] = {
	BEGIN(OBJ_LIST_SURFACE),
	SET_INT(oInteractType, 4),
	OR_INT(oFlags, 201),
	LOAD_ANIMATIONS(10022, 50419392),
	ANIMATE(0),
	LOAD_COLLISION_DATA(col_small_water_splash_geo_0xacf284),
	SET_HITBOX(80, 100),
	SET_INT(oIntangibleTimer, 0),
	SET_FLOAT(oCollisionDistance, 1000),
	SET_HOME(),
	CALL_NATIVE( bhv_door_init),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_door_loop),
	END_LOOP(),
};

const BehaviorScript bhvWaterLevelPillar[] = {
	BEGIN(OBJ_LIST_SURFACE),
	OR_INT(oFlags, 1),
	LOAD_COLLISION_DATA(col_castle_geo_001940_0xe84987),
	CALL_NATIVE( bhv_water_level_pillar_init),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_water_level_pillar_loop),
		CALL_NATIVE( load_object_collision_model),
	END_LOOP(),
};

const BehaviorScript bhvDddWarp[] = {
	BEGIN(OBJ_LIST_SURFACE),
	OR_INT(oFlags, 1),
	SET_FLOAT(oCollisionDistance, 30000),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_ddd_warp_loop),
		CALL_NATIVE( load_object_collision_model),
	END_LOOP(),
};

const BehaviorScript bhvMips[] = {
	BEGIN(OBJ_LIST_GENACTOR),
	OR_INT(oFlags, 1033),
	LOAD_ANIMATIONS(10022, 100751140),
	SET_INT(oInteractType, 2),
	DROP_TO_FLOOR(),
	SET_HITBOX(50, 75),
	SET_INT(oIntangibleTimer, 0),
	CALL_NATIVE( bhv_mips_init),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_mips_loop),
	END_LOOP(),
};

const BehaviorScript bhvFlame[] = {
	BEGIN(OBJ_LIST_LEVEL),
	OR_INT(oFlags, 1),
	BILLBOARD(),
	SET_HOME(),
	SCALE(0, 700),
	SET_INTERACT_TYPE(262144),
	SET_HITBOX_WITH_OFFSET(50, 25, 25),
	SET_INT(oIntangibleTimer, 0),
	CALL_NATIVE( bhv_init_room),
	BEGIN_LOOP(),
		SET_INT(oInteractStatus, 0),
		ANIMATE_TEXTURE(oAnimState, 2),
	END_LOOP(),
};

const BehaviorScript bhvHauntedBookshelf[] = {
	BEGIN(OBJ_LIST_SURFACE),
	OR_INT(oFlags, 1),
	LOAD_COLLISION_DATA(col_geo_bbh_000610_0xdd8069),
	SET_HOME(),
	SET_INT(oRoom, 6),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_haunted_bookshelf_loop),
		CALL_NATIVE( load_object_collision_model),
	END_LOOP(),
};

const BehaviorScript bhvMeshElevator[] = {
	BEGIN(OBJ_LIST_SURFACE),
	OR_INT(oFlags, 1),
	LOAD_COLLISION_DATA(col_geo_bbh_000628_0xdd80b1),
	SET_HOME(),
	SET_INT(oRoom, 12),
	SET_INT(oBehParams2ndByte, 4),
	CALL_NATIVE( bhv_elevator_init),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_elevator_loop),
		CALL_NATIVE( load_object_collision_model),
	END_LOOP(),
};

const BehaviorScript bhvCoffinSpawner[] = {
	BEGIN(OBJ_LIST_SURFACE),
	OR_INT(oFlags, 65),
	CALL_NATIVE( bhv_init_room),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_coffin_spawner_loop),
	END_LOOP(),
};

const BehaviorScript bhvExclamationBox[] = {
	BEGIN(OBJ_LIST_SURFACE),
	OR_INT(oFlags, 9),
	LOAD_COLLISION_DATA(col_exclamation_box_geo_0xaa7794),
	OR_INT(oFlags, 1),
	SET_FLOAT(oCollisionDistance, 300),
	SET_HOME(),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_exclamation_box_loop),
	END_LOOP(),
};

const BehaviorScript bhvBoo[] = {
	BEGIN(OBJ_LIST_GENACTOR),
	SET_INT(oBehParams2ndByte, 1),
	GOTO( Bhv_Custom_0x13002808),
};

const BehaviorScript Bhv_Custom_0x13002808[] = {
	OR_INT(oFlags, 8265),
	SET_INT(oIntangibleTimer, 0),
	SET_HOME(),
	SET_INT(oDamageOrCoinValue, 2),
	SET_HITBOX(140, 80),
	SET_HURTBOX(40, 60),
	SET_FLOAT(oGraphYOffset, 30),
	CALL_NATIVE( bhv_init_room),
	SPAWN_CHILD(116, 318769288),
	SET_OBJ_PHYSICS(30, 0, 65486, 1000, 1000, 200, 0, 0),
	CALL_NATIVE( bhv_boo_init),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_boo_loop),
	END_LOOP(),
};

const BehaviorScript bhvOneCoin[] = {
	BEGIN(OBJ_LIST_LEVEL),
	SET_INT(oBehParams2ndByte, 1),
	GOTO( Bhv_Custom_0x13000920),
};

const BehaviorScript Bhv_Custom_0x13000920[] = {
	BILLBOARD(),
	OR_INT(oFlags, 65),
	CALL_NATIVE( bhv_yellow_coin_init),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_yellow_coin_loop),
	END_LOOP(),
};

const BehaviorScript bhvPushableMetalBox[] = {
	BEGIN(OBJ_LIST_SURFACE),
	OR_INT(oFlags, 1),
	LOAD_COLLISION_DATA(col_metal_box_geo_0xaa6444),
	SET_FLOAT(oCollisionDistance, 500),
	SET_HOME(),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_pushable_loop),
		CALL_NATIVE( load_object_collision_model),
	END_LOOP(),
};

const BehaviorScript bhvStar[] = {
	BEGIN(OBJ_LIST_LEVEL),
	OR_INT(oFlags, 1),
	CALL_NATIVE( bhv_init_room),
	CALL_NATIVE( bhv_collect_star_init),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_collect_star_loop),
	END_LOOP(),
};

const BehaviorScript bhvBalconyBigBoo[] = {
	BEGIN(OBJ_LIST_GENACTOR),
	SET_INT(oBehParams2ndByte, 2),
	SET_INT(oWigglerTextStatus, 10),
	GOTO( Bhv_Custom_0x13002794),
};

const BehaviorScript Bhv_Custom_0x13002794[] = {
	OR_INT(oFlags, 8265),
	SET_HOME(),
	SET_OBJ_PHYSICS(30, 0, 65486, 1000, 1000, 200, 0, 0),
	CALL_NATIVE( bhv_init_room),
	CALL_NATIVE( bhv_boo_init),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_big_boo_loop),
	END_LOOP(),
};

const BehaviorScript bhvHiddenStaircaseStep[] = {
	BEGIN(OBJ_LIST_SURFACE),
	OR_INT(oFlags, 1),
	LOAD_COLLISION_DATA(col_geo_bbh_0005B0_0xdd7f39),
	SET_INT(oRoom, 1),
	SET_FLOAT(oCollisionDistance, 1000),
	SET_HOME(),
	BEGIN_LOOP(),
		CALL_NATIVE( load_object_collision_model),
	END_LOOP(),
};

const BehaviorScript bhvEmitter_MOP[] = {
	BEGIN(OBJ_LIST_GENACTOR),
	OR_INT(oFlags, 8257),
	CALL_NATIVE( bhv_init_room),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_bookend_spawn_loop),
	END_LOOP(),
};

const BehaviorScript bhvFlyingBookend[] = {
	BEGIN(OBJ_LIST_GENACTOR),
	OR_INT(oFlags, 8265),
	LOAD_ANIMATIONS(10022, 83895616),
	ANIMATE(0),
	SET_OBJ_PHYSICS(60, 0, 65486, 1000, 1000, 200, 0, 0),
	SET_INT(oMoveFlags, 0),
	SCALE(0, 70),
	CALL_NATIVE( bhv_init_room),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_flying_bookend_loop),
	END_LOOP(),
};

const BehaviorScript bhvHiddenRedCoinStar[] = {
	BEGIN(OBJ_LIST_LEVEL),
	OR_INT(oFlags, 16385),
	CALL_NATIVE( bhv_hidden_red_coin_star_init),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_hidden_red_coin_star_loop),
	END_LOOP(),
};

const BehaviorScript bhvSpinAirborneWarp[] = {
	BREAK(),
};

const BehaviorScript bhvSmallPenguin[] = {
	BEGIN(OBJ_LIST_GENACTOR),
	OR_INT(oFlags, 9289),
	DROP_TO_FLOOR(),
	LOAD_ANIMATIONS(10022, 83921780),
	ANIMATE(0),
	SET_OBJ_PHYSICS(30, 65136, 65486, 0, 0, 200, 0, 0),
	SET_INT(oInteractType, 2),
	SET_INT(oInteractionSubtype, 16),
	SET_INT(oIntangibleTimer, 0),
	SET_HITBOX(40, 40),
	SET_HOME(),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_small_penguin_loop),
	END_LOOP(),
};

const BehaviorScript bhvMrBlizzard[] = {
	BEGIN(OBJ_LIST_GENACTOR),
	OR_INT(oFlags, 8265),
	DROP_TO_FLOOR(),
	LOAD_ANIMATIONS(10022, 83939608),
	ANIMATE(0),
	SET_HOME(),
	SET_OBJ_PHYSICS(30, 65136, 0, 1000, 1000, 200, 0, 0),
	CALL_NATIVE( bhv_mr_blizzard_init),
	SET_FLOAT(oUkikiTauntsToBeDone, 1),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_mr_blizzard_update),
	END_LOOP(),
};

const BehaviorScript bhvCcmTouchedStarSpawn[] = {
	BEGIN(OBJ_LIST_LEVEL),
	OR_INT(oFlags, 16385),
	SET_HITBOX(500, 500),
	SET_INT(oIntangibleTimer, 0),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_ccm_touched_star_spawn_loop),
	END_LOOP(),
};

const BehaviorScript bhvTuxiesMother[] = {
	BEGIN(OBJ_LIST_GENACTOR),
	OR_INT(oFlags, 8265),
	LOAD_ANIMATIONS(10022, 83921780),
	ANIMATE(3),
	SET_OBJ_PHYSICS(30, 65136, 65486, 0, 0, 0, 0, 0),
	SET_HOME(),
	SET_INTERACT_TYPE(8388608),
	SET_HITBOX(200, 300),
	SET_INT(oIntangibleTimer, 0),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_tuxies_mother_loop),
	END_LOOP(),
};

const BehaviorScript bhvPenguinRaceFinishLine[] = {
	BEGIN(OBJ_LIST_DEFAULT),
	OR_INT(oFlags, 193),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_penguin_race_finish_line_update),
	END_LOOP(),
};

const BehaviorScript bhvPenguinRaceShortcutCheck[] = {
	BEGIN(OBJ_LIST_DEFAULT),
	OR_INT(oFlags, 65),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_penguin_race_shortcut_check_update),
	END_LOOP(),
};

const BehaviorScript bhvPlaysMusicTrackWhenTouched[] = {
	BEGIN(OBJ_LIST_DEFAULT),
	OR_INT(oFlags, 65),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_play_music_track_when_touched_loop),
	END_LOOP(),
};

const BehaviorScript bhvOpenableGrill[] = {
	BEGIN(OBJ_LIST_DEFAULT),
	OR_INT(oFlags, 9),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_openable_grill_loop),
	END_LOOP(),
};

const BehaviorScript bhvFloorSwitchHiddenObjects[] = {
	BEGIN(OBJ_LIST_SURFACE),
	SET_INT(oBehParams2ndByte, 2),
	GOTO( Bhv_Custom_0x13001488),
};

const BehaviorScript Bhv_Custom_0x13001488[] = {
	OR_INT(oFlags, 1),
	LOAD_COLLISION_DATA(col_purple_switch_geo_0xa8dfc4),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_purple_switch_loop),
		CALL_NATIVE( load_object_collision_model),
	END_LOOP(),
};

const BehaviorScript bhvMontyMoleHole[] = {
	BEGIN(OBJ_LIST_DEFAULT),
	OR_INT(oFlags, 8257),
	DROP_TO_FLOOR(),
	SCALE(0, 150),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_monty_mole_hole_update),
	END_LOOP(),
};

const BehaviorScript bhvHiddenObject[] = {
	BEGIN(OBJ_LIST_SURFACE),
	OR_INT(oFlags, 1),
	LOAD_COLLISION_DATA(col_breakable_box_geo_0xa9458c),
	SET_FLOAT(oCollisionDistance, 300),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_hidden_object_loop),
	END_LOOP(),
};

const BehaviorScript bhvSwoop[] = {
	BEGIN(OBJ_LIST_GENACTOR),
	OR_INT(oFlags, 8265),
	LOAD_ANIMATIONS(10022, 100692176),
	SET_HOME(),
	SET_OBJ_PHYSICS(50, 0, 65486, 0, 0, 0, 0, 0),
	CALL_NATIVE( bhv_init_room),
	SCALE(0, 0),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_swoop_update),
	END_LOOP(),
};

const BehaviorScript bhvScuttlebug[] = {
	BEGIN(OBJ_LIST_GENACTOR),
	OR_INT(oFlags, 73),
	LOAD_ANIMATIONS(10022, 100749412),
	ANIMATE(0),
	SET_OBJ_PHYSICS(80, 65136, 65486, 0, 0, 200, 0, 0),
	SET_HOME(),
	CALL_NATIVE( bhv_init_room),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_scuttlebug_loop),
	END_LOOP(),
};

const BehaviorScript bhvFlamethrower[] = {
	BEGIN(OBJ_LIST_DEFAULT),
	OR_INT(oFlags, 73),
	SET_HOME(),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_flamethrower_loop),
	END_LOOP(),
};

const BehaviorScript bhvPoleGrabbing[] = {
	BEGIN(OBJ_LIST_POLELIKE),
	OR_INT(oFlags, 1),
	SET_INT(oInteractType, 64),
	SET_HITBOX(80, 1500),
	CALL_NATIVE( bhv_pole_init),
	SET_INT(oIntangibleTimer, 0),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_pole_base_loop),
	END_LOOP(),
};

const BehaviorScript bhvHmcElevatorPlatform[] = {
	BEGIN(OBJ_LIST_SURFACE),
	OR_INT(oFlags, 65),
	LOAD_COLLISION_DATA(col_hmc_geo_0005D0_0xeb8203),
	SET_HOME(),
	CALL_NATIVE( bhv_elevator_init),
	CALL_NATIVE( bhv_init_room),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_elevator_loop),
		CALL_NATIVE( load_object_collision_model),
	END_LOOP(),
};

const BehaviorScript bhvFloorSwitchGrills[] = {
	BEGIN(OBJ_LIST_SURFACE),
	GOTO( Bhv_Custom_0x13001488),
};

const BehaviorScript Bhv_Custom_0x13001488[] = {
	OR_INT(oFlags, 1),
	LOAD_COLLISION_DATA(col_purple_switch_geo_0xa8dfc4),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_purple_switch_loop),
		CALL_NATIVE( load_object_collision_model),
	END_LOOP(),
};

const BehaviorScript bhvDorrie[] = {
	BEGIN(OBJ_LIST_SURFACE),
	LOAD_COLLISION_DATA(col_dorrie_geo_0xa73df0),
	OR_INT(oFlags, 8265),
	LOAD_ANIMATIONS(10022, 100726328),
	SET_HOME(),
	SET_FLOAT(oCollisionDistance, 30000),
	ADD_FLOAT(oPosX, 2000),
	CALL_NATIVE( bhv_init_room),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_dorrie_update),
		CALL_NATIVE( load_object_collision_model),
	END_LOOP(),
};

const BehaviorScript bhvBigBoulderGenerator[] = {
	BEGIN(OBJ_LIST_DEFAULT),
	OR_INT(oFlags, 1),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_big_boulder_generator_loop),
	END_LOOP(),
};

const BehaviorScript bhvHiddenStar[] = {
	BEGIN(OBJ_LIST_LEVEL),
	OR_INT(oFlags, 16385),
	CALL_NATIVE( bhv_hidden_star_init),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_hidden_star_loop),
	END_LOOP(),
};

const BehaviorScript bhvHorizontalGrindel[] = {
	BEGIN(OBJ_LIST_SURFACE),
	LOAD_COLLISION_DATA(col_ssl_geo_000734_0xee8457),
	OR_INT(oFlags, 1),
	DROP_TO_FLOOR(),
	SET_HOME(),
	SET_OBJ_PHYSICS(40, 65136, 0, 1000, 1000, 200, 0, 0),
	SCALE(0, 90),
	CALL_NATIVE( bhv_horizontal_grindel_init),
	BEGIN_LOOP(),
		CALL_NATIVE( cur_obj_update_floor_and_walls),
		CALL_NATIVE( bhv_horizontal_grindel_update),
		CALL_NATIVE( load_object_collision_model),
	END_LOOP(),
};

const BehaviorScript bhvPyramidTop[] = {
	BEGIN(OBJ_LIST_SURFACE),
	OR_INT(oFlags, 1),
	LOAD_COLLISION_DATA(col_ssl_geo_000618_0xed2b7b),
	SET_HOME(),
	SET_FLOAT(oCollisionDistance, 20000),
	CALL_NATIVE( bhv_pyramid_top_init),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_pyramid_top_loop),
		CALL_NATIVE( load_object_collision_model),
	END_LOOP(),
};

const BehaviorScript bhvTree[] = {
	BEGIN(OBJ_LIST_POLELIKE),
	BILLBOARD(),
	OR_INT(oFlags, 1),
	SET_INT(oInteractType, 64),
	SET_HITBOX(80, 500),
	SET_INT(oIntangibleTimer, 0),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_pole_base_loop),
	END_LOOP(),
};

const BehaviorScript bhvSpindel[] = {
	BEGIN(OBJ_LIST_SURFACE),
	OR_INT(oFlags, 17),
	LOAD_COLLISION_DATA(col_ssl_geo_000764_0xee84db),
	CALL_NATIVE( bhv_spindel_init),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_spindel_loop),
		CALL_NATIVE( load_object_collision_model),
	END_LOOP(),
};

const BehaviorScript bhvKlepto[] = {
	BEGIN(OBJ_LIST_GENACTOR),
	OR_INT(oFlags, 8393),
	LOAD_ANIMATIONS(10022, 83922172),
	ANIMATE(0),
	SET_OBJ_PHYSICS(100, 0, 65516, 1000, 1000, 200, 0, 0),
	SET_HOME(),
	CALL_NATIVE( bhv_klepto_init),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_klepto_update),
	END_LOOP(),
};

const BehaviorScript bhvGrindel[] = {
	BEGIN(OBJ_LIST_SURFACE),
	OR_INT(oFlags, 73),
	LOAD_COLLISION_DATA(col_ssl_geo_000734_0xee8457),
	DROP_TO_FLOOR(),
	ADD_FLOAT(oPosY, 1),
	SET_HOME(),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_grindel_thwomp_loop),
		CALL_NATIVE( load_object_collision_model),
	END_LOOP(),
};

const BehaviorScript bhvSslMovingPyramidWall[] = {
	BEGIN(OBJ_LIST_SURFACE),
	OR_INT(oFlags, 17),
	LOAD_COLLISION_DATA(col_ssl_geo_000794_0xee8613),
	CALL_NATIVE( bhv_ssl_moving_pyramid_wall_init),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_ssl_moving_pyramid_wall_loop),
		CALL_NATIVE( load_object_collision_model),
	END_LOOP(),
};

const BehaviorScript bhvPyramidElevator[] = {
	BEGIN(OBJ_LIST_SURFACE),
	OR_INT(oFlags, 1),
	LOAD_COLLISION_DATA(col_ssl_geo_0007AC_0xee8697),
	SET_HOME(),
	SET_FLOAT(oCollisionDistance, 20000),
	CALL_NATIVE( bhv_pyramid_elevator_init),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_pyramid_elevator_loop),
		CALL_NATIVE( load_object_collision_model),
	END_LOOP(),
};

const BehaviorScript bhvSandSoundLoop[] = {
	BEGIN(OBJ_LIST_DEFAULT),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_sand_sound_loop),
	END_LOOP(),
};

const BehaviorScript bhvEyerokBoss[] = {
	BEGIN(OBJ_LIST_GENACTOR),
	OR_INT(oFlags, 8257),
	SET_HOME(),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_eyerok_boss_loop),
	END_LOOP(),
};

const BehaviorScript bhvChainChompGate[] = {
	BEGIN(OBJ_LIST_SURFACE),
	LOAD_COLLISION_DATA(col_bob_geo_000440_0xf021f7),
	OR_INT(oFlags, 65),
	CALL_NATIVE( bhv_chain_chomp_gate_init),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_chain_chomp_gate_update),
		CALL_NATIVE( load_object_collision_model),
	END_LOOP(),
};

const BehaviorScript bhvPitBowlingBall[] = {
	BEGIN(OBJ_LIST_GENACTOR),
	OR_INT(oFlags, 1),
	BILLBOARD(),
	SET_FLOAT(oGraphYOffset, 130),
	CALL_NATIVE( bhv_bob_pit_bowling_ball_init),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_bob_pit_bowling_ball_loop),
	END_LOOP(),
};

const BehaviorScript bhvGoombaTripletSpawner[] = {
	BEGIN(OBJ_LIST_PUSHABLE),
	OR_INT(oFlags, 65),
	DROP_TO_FLOOR(),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_goomba_triplet_spawner_update),
	END_LOOP(),
};

const BehaviorScript bhvBobombBuddyOpensCannon[] = {
	BEGIN(OBJ_LIST_GENACTOR),
	OR_INT(oFlags, 25673),
	LOAD_ANIMATIONS(10022, 134363500),
	SET_INTERACT_TYPE(8388608),
	DROP_TO_FLOOR(),
	SET_HITBOX(100, 60),
	ANIMATE(0),
	SET_INT(oYoshiChosenHome, 1),
	SET_HOME(),
	CALL_NATIVE( bhv_bobomb_buddy_init),
	BEGIN_LOOP(),
		SET_INT(oIntangibleTimer, 0),
		CALL_NATIVE( bhv_bobomb_buddy_loop),
	END_LOOP(),
};

const BehaviorScript bhvBobombBuddy[] = {
	BEGIN(OBJ_LIST_GENACTOR),
	OR_INT(oFlags, 9289),
	LOAD_ANIMATIONS(10022, 134363500),
	SET_INTERACT_TYPE(8388608),
	DROP_TO_FLOOR(),
	SET_HITBOX(100, 60),
	ANIMATE(0),
	SET_INT(oYoshiChosenHome, 0),
	SET_HOME(),
	CALL_NATIVE( bhv_bobomb_buddy_init),
	BEGIN_LOOP(),
		SET_INT(oIntangibleTimer, 0),
		CALL_NATIVE( bhv_bobomb_buddy_loop),
	END_LOOP(),
};

const BehaviorScript bhvKoopaRaceEndpoint[] = {
	BEGIN(OBJ_LIST_DEFAULT),
	OR_INT(oFlags, 65),
	DROP_TO_FLOOR(),
	SPAWN_CHILD_WITH_PARAM(0, 106, 318785016),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_koopa_race_endpoint_update),
	END_LOOP(),
};

const BehaviorScript bhvKingBobomb[] = {
	BEGIN(OBJ_LIST_GENACTOR),
	OR_INT(oFlags, 8393),
	LOAD_ANIMATIONS(10022, 83951152),
	SET_INT(oInteractType, 2),
	SET_HITBOX(100, 100),
	SET_OBJ_PHYSICS(30, 65136, 65486, 1000, 1000, 200, 0, 0),
	SET_INT(oIntangibleTimer, 0),
	DROP_TO_FLOOR(),
	SET_HOME(),
	SPAWN_OBJ(0, 318767700),
	SET_INT(oHealth, 3),
	SET_INT(oDamageOrCoinValue, 1),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_king_bobomb_loop),
	END_LOOP(),
};

const BehaviorScript bhvKoopa[] = {
	BEGIN(OBJ_LIST_PUSHABLE),
	OR_INT(oFlags, 8257),
	DROP_TO_FLOOR(),
	LOAD_ANIMATIONS(10022, 100733796),
	ANIMATE(9),
	SET_HOME(),
	SET_OBJ_PHYSICS(50, 65136, 0, 0, 1000, 200, 0, 0),
	SCALE(0, 150),
	SET_FLOAT(oUkikiTauntsToBeDone, 1),
	CALL_NATIVE( bhv_koopa_init),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_koopa_update),
	END_LOOP(),
};

const BehaviorScript bhvFadingWarp[] = {
	BEGIN(OBJ_LIST_LEVEL),
	SET_INT(oInteractionSubtype, 1),
	OR_INT(oFlags, 9),
	SET_INT(oInteractType, 8192),
	SET_INT(oIntangibleTimer, 0),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_fading_warp_loop),
	END_LOOP(),
};

const BehaviorScript bhvSnowMoundSpawn[] = {
	BEGIN(OBJ_LIST_DEFAULT),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_snow_mound_spawn_loop),
	END_LOOP(),
};

const BehaviorScript bhvSLWalkingPenguin[] = {
	BEGIN(OBJ_LIST_SURFACE),
	OR_INT(oFlags, 8265),
	LOAD_COLLISION_DATA(col_penguin_geo_0x90441c),
	LOAD_ANIMATIONS(10022, 83921780),
	ANIMATE(0),
	SET_OBJ_PHYSICS(0, 65136, 65486, 0, 0, 200, 0, 0),
	SCALE(0, 600),
	SET_HOME(),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_sl_walking_penguin_loop),
		CALL_NATIVE( load_object_collision_model),
	END_LOOP(),
};

const BehaviorScript bhvSLSnowmanWind[] = {
	BEGIN(OBJ_LIST_DEFAULT),
	OR_INT(oFlags, 8257),
	SET_HOME(),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_sl_snowman_wind_loop),
	END_LOOP(),
};

const BehaviorScript bhvIgloo[] = {
	BEGIN(OBJ_LIST_LEVEL),
	OR_INT(oFlags, 1),
	SET_INTERACT_TYPE(1073741824),
	SET_HITBOX(100, 200),
	SET_INT(oIntangibleTimer, 0),
	SET_HOME(),
	BEGIN_LOOP(),
		SET_INT(oInteractStatus, 0),
	END_LOOP(),
};

const BehaviorScript bhvBigChillBully[] = {
	BEGIN(OBJ_LIST_GENACTOR),
	OR_INT(oFlags, 9),
	LOAD_ANIMATIONS(10022, 100678036),
	DROP_TO_FLOOR(),
	SET_HOME(),
	SET_INT(oUkikiTauntsToBeDone, 16),
	CALL_NATIVE( bhv_big_bully_init),
	BEGIN_LOOP(),
		SET_INT(oIntangibleTimer, 0),
		CALL_NATIVE( bhv_bully_loop),
	END_LOOP(),
};

const BehaviorScript bhvWdwSquareFloatingPlatform[] = {
	BEGIN(OBJ_LIST_SURFACE),
	OR_INT(oFlags, 9),
	LOAD_COLLISION_DATA(col_wdw_geo_000580_0xf3a441),
	SET_FLOAT(oYoshiChosenHome, 64),
	SET_HOME(),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_floating_platform_loop),
		CALL_NATIVE( load_object_collision_model),
	END_LOOP(),
};

const BehaviorScript bhvWdwExpressElevatorPlatform[] = {
	BEGIN(OBJ_LIST_SURFACE),
	OR_INT(oFlags, 65),
	LOAD_COLLISION_DATA(col_wdw_geo_000610_0xf3a62d),
	SET_HOME(),
	BEGIN_LOOP(),
		CALL_NATIVE( load_object_collision_model),
	END_LOOP(),
};

const BehaviorScript bhvArrowLift[] = {
	BEGIN(OBJ_LIST_SURFACE),
	OR_INT(oFlags, 1),
	LOAD_COLLISION_DATA(col_wdw_geo_000598_0xf3a4c5),
	SET_INT_RAND_RSHIFT(oYoshiTargetYaw, 1, 32),
	SET_HOME(),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_arrow_lift_loop),
		CALL_NATIVE( load_object_collision_model),
	END_LOOP(),
};

const BehaviorScript bhvInitializeChangingWaterLevel[] = {
	BEGIN(OBJ_LIST_DEFAULT),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_init_changing_water_level_loop),
	END_LOOP(),
};

const BehaviorScript bhvWaterLevelDiamond[] = {
	BEGIN(OBJ_LIST_SURFACE),
	OR_INT(oFlags, 1),
	SET_HITBOX(70, 30),
	SET_FLOAT(oCollisionDistance, 200),
	SET_INT(oIntangibleTimer, 0),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_water_level_diamond_loop),
	END_LOOP(),
};

const BehaviorScript bhvWdwRectangularFloatingPlatform[] = {
	BEGIN(OBJ_LIST_SURFACE),
	OR_INT(oFlags, 9),
	LOAD_COLLISION_DATA(col_wdw_geo_000628_0xf3a6b1),
	SET_FLOAT(oYoshiChosenHome, 64),
	SET_HOME(),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_floating_platform_loop),
		CALL_NATIVE( load_object_collision_model),
	END_LOOP(),
};

const BehaviorScript bhvRotatingPlatform[] = {
	BEGIN(OBJ_LIST_SURFACE),
	OR_INT(oFlags, 1),
	SET_HOME(),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_rotating_platform_loop),
		CALL_NATIVE( load_object_collision_model),
	END_LOOP(),
};

const BehaviorScript bhvWdwExpressElevator[] = {
	BEGIN(OBJ_LIST_SURFACE),
	OR_INT(oFlags, 65),
	LOAD_COLLISION_DATA(col_wdw_geo_000610_0xf3a62d),
	SET_HOME(),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_wdw_express_elevator_loop),
		CALL_NATIVE( load_object_collision_model),
	END_LOOP(),
};

const BehaviorScript bhvSunkenShipPart2[] = {
	BEGIN(OBJ_LIST_DEFAULT),
	OR_INT(oFlags, 65),
	SCALE(0, 100),
	SET_FLOAT(oDrawingDistance, 6000),
	SET_HOME(),
	CALL( bhvSunkenShipSetRotation),
	BREAK(),
};

const BehaviorScript bhvInSunkenShip[] = {
	BEGIN(OBJ_LIST_SURFACE),
	LOAD_COLLISION_DATA(col_None_0xf4f665),
	GOTO( Bhv_Custom_0x1300248c),
};

const BehaviorScript Bhv_Custom_0x1300248c[] = {
	OR_INT(oFlags, 1),
	SET_FLOAT(oCollisionDistance, 4000),
	CALL( bhvSunkenShipSetRotation),
	BEGIN_LOOP(),
		CALL_NATIVE( load_object_collision_model),
	END_LOOP(),
};

const BehaviorScript bhvInSunkenShip2[] = {
	BEGIN(OBJ_LIST_SURFACE),
	LOAD_COLLISION_DATA(col_None_0xf4f789),
	OR_INT(oFlags, 1),
	SET_FLOAT(oCollisionDistance, 4000),
	CALL( bhvSunkenShipSetRotation),
	BEGIN_LOOP(),
		CALL_NATIVE( load_object_collision_model),
	END_LOOP(),
};

const BehaviorScript bhvInSunkenShip3[] = {
	BEGIN(OBJ_LIST_SURFACE),
	OR_INT(oFlags, 1),
	LOAD_COLLISION_DATA(col_None_0xf4f135),
	SET_HOME(),
	SET_FLOAT(oCollisionDistance, 4000),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_ship_part_3_loop),
		CALL_NATIVE( load_object_collision_model),
	END_LOOP(),
};

const BehaviorScript bhvUnagi[] = {
	BEGIN(OBJ_LIST_GENACTOR),
	OR_INT(oFlags, 8265),
	LOAD_ANIMATIONS(10022, 83961892),
	ANIMATE(6),
	SET_HOME(),
	SCALE(0, 300),
	SET_FLOAT(oDrawingDistance, 6000),
	CALL_NATIVE( bhv_unagi_init),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_unagi_loop),
	END_LOOP(),
};

const BehaviorScript bhvJetStream[] = {
	BEGIN(OBJ_LIST_DEFAULT),
	OR_INT(oFlags, 65),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_jet_stream_loop),
	END_LOOP(),
};

const BehaviorScript bhvCannonClosed[] = {
	BEGIN(OBJ_LIST_SURFACE),
	OR_INT(oFlags, 16385),
	LOAD_COLLISION_DATA(col_cannon_lid_seg8_dl_080048E0_0xa8616c),
	SET_HOME(),
	CALL_NATIVE( bhv_cannon_closed_init),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_cannon_closed_loop),
		CALL_NATIVE( load_object_collision_model),
	END_LOOP(),
};

const BehaviorScript bhvRockSolid[] = {
	BEGIN(OBJ_LIST_SURFACE),
	OR_INT(oFlags, 65),
	LOAD_COLLISION_DATA(col_jrb_geo_000930_0xf4ef61),
	BEGIN_LOOP(),
		CALL_NATIVE( load_object_collision_model),
	END_LOOP(),
};

const BehaviorScript bhvPillarBase[] = {
	BEGIN(OBJ_LIST_SURFACE),
	OR_INT(oFlags, 1),
	LOAD_COLLISION_DATA(col_jrb_geo_000918_0xf4f9a1),
	BEGIN_LOOP(),
		CALL_NATIVE( load_object_collision_model),
	END_LOOP(),
};

const BehaviorScript bhvJrbFloatingPlatform[] = {
	BEGIN(OBJ_LIST_SURFACE),
	OR_INT(oFlags, 9),
	LOAD_COLLISION_DATA(col_jrb_geo_000948_0xf4f02d),
	SET_FLOAT(oYoshiChosenHome, 64),
	SET_HOME(),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_floating_platform_loop),
		CALL_NATIVE( load_object_collision_model),
	END_LOOP(),
};

const BehaviorScript bhvInsideCannon[] = {
	BREAK(),
};

const BehaviorScript bhvSwimmingWarp[] = {
	BREAK(),
};

const BehaviorScript bhvBubba[] = {
	BEGIN(OBJ_LIST_GENACTOR),
	OR_INT(oFlags, 8265),
	SET_HOME(),
	SET_OBJ_PHYSICS(200, 65136, 65486, 1000, 1000, 0, 0, 0),
	SCALE(0, 50),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_bubba_loop),
	END_LOOP(),
};

const BehaviorScript bhvWarpPipe[] = {
	BEGIN(OBJ_LIST_SURFACE),
	OR_INT(oFlags, 9),
	SET_INT(oInteractType, 8192),
	LOAD_COLLISION_DATA(col_warp_pipe_geo_0xabbed4),
	SET_FLOAT(oDrawingDistance, 16000),
	SET_INT(oIntangibleTimer, 0),
	SET_HITBOX(70, 50),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_warp_loop),
		CALL_NATIVE( load_object_collision_model),
	END_LOOP(),
};

const BehaviorScript bhvStaticObject[] = {
	BEGIN(OBJ_LIST_DEFAULT),
	OR_INT(oFlags, 1),
	BREAK(),
};

const BehaviorScript bhvThiHugeIslandTop[] = {
	BEGIN(OBJ_LIST_SURFACE),
	OR_INT(oFlags, 1),
	LOAD_COLLISION_DATA(col_thi_geo_0005B0_0xf69ddd),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_thi_huge_island_top_loop),
	END_LOOP(),
};

const BehaviorScript bhvThiBowlingBallSpawner[] = {
	BEGIN(OBJ_LIST_GENACTOR),
	OR_INT(oFlags, 1),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_thi_bowling_ball_spawner_loop),
	END_LOOP(),
};

const BehaviorScript bhvThiTinyIslandTop[] = {
	BEGIN(OBJ_LIST_DEFAULT),
	OR_INT(oFlags, 65),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_thi_tiny_island_top_loop),
	END_LOOP(),
};

const BehaviorScript bhvWigglerHead[] = {
	BEGIN(OBJ_LIST_GENACTOR),
	OR_INT(oFlags, 8257),
	DROP_TO_FLOOR(),
	LOAD_ANIMATIONS(10022, 83946636),
	SET_HOME(),
	SET_OBJ_PHYSICS(60, 65136, 0, 1000, 1000, 200, 0, 0),
	HIDE(),
	SCALE(0, 400),
	SET_FLOAT(oUkikiTauntsToBeDone, 5000),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_wiggler_update),
	END_LOOP(),
};

const BehaviorScript bhvSwingPlatform[] = {
	BEGIN(OBJ_LIST_SURFACE),
	LOAD_COLLISION_DATA(col_rr_geo_000860_0xfb98fd),
	OR_INT(oFlags, 1),
	SET_FLOAT(oCollisionDistance, 2000),
	CALL_NATIVE( bhv_swing_platform_init),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_swing_platform_update),
		CALL_NATIVE( load_object_collision_model),
	END_LOOP(),
};

const BehaviorScript bhvAnimatesOnFloorSwitchPress[] = {
	BEGIN(OBJ_LIST_SURFACE),
	OR_INT(oFlags, 65),
	SET_FLOAT(oCollisionDistance, 8000),
	CALL_NATIVE( bhv_animates_on_floor_switch_press_init),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_animates_on_floor_switch_press_loop),
		CALL_NATIVE( load_object_collision_model),
	END_LOOP(),
};

const BehaviorScript bhvJumpingBox[] = {
	BEGIN(OBJ_LIST_GENACTOR),
	OR_INT(oFlags, 1089),
	SET_OBJ_PHYSICS(30, 65136, 65486, 1000, 1000, 600, 0, 0),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_jumping_box_loop),
	END_LOOP(),
};

const BehaviorScript bhvRrRotatingBridgePlatform[] = {
	BEGIN(OBJ_LIST_SURFACE),
	OR_INT(oFlags, 73),
	LOAD_COLLISION_DATA(col_rr_geo_000878_0xfb9ab1),
	SET_FLOAT(oCollisionDistance, 1500),
	SET_HOME(),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_rr_rotating_bridge_platform_loop),
		CALL_NATIVE( load_object_collision_model),
	END_LOOP(),
};

const BehaviorScript bhvDonutPlatformSpawner[] = {
	BEGIN(OBJ_LIST_SPAWNER),
	OR_INT(oFlags, 1),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_donut_platform_spawner_update),
	END_LOOP(),
};

const BehaviorScript bhvFloorSwitchAnimatesObject[] = {
	BEGIN(OBJ_LIST_SURFACE),
	SET_INT(oBehParams2ndByte, 1),
	GOTO( Bhv_Custom_0x13001488),
};

const BehaviorScript Bhv_Custom_0x13001488[] = {
	OR_INT(oFlags, 1),
	LOAD_COLLISION_DATA(col_purple_switch_geo_0xa8dfc4),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_purple_switch_loop),
		CALL_NATIVE( load_object_collision_model),
	END_LOOP(),
};

const BehaviorScript bhvSpinAirborneCircleWarp[] = {
	BREAK(),
};

const BehaviorScript bhvHiddenAt120Stars[] = {
	BEGIN(OBJ_LIST_SURFACE),
	OR_INT(oFlags, 1),
	LOAD_COLLISION_DATA(col_castle_grounds_geo_000724_0xfd8ecf),
	SET_FLOAT(oCollisionDistance, 4000),
	CALL_NATIVE( bhv_castle_cannon_grate_init),
	BEGIN_LOOP(),
		CALL_NATIVE( load_object_collision_model),
	END_LOOP(),
};

const BehaviorScript bhvWaterfallSoundLoop[] = {
	BEGIN(OBJ_LIST_DEFAULT),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_waterfall_sound_loop),
	END_LOOP(),
};

const BehaviorScript bhvAmbientSounds[] = {
	BEGIN(OBJ_LIST_DEFAULT),
	CALL_NATIVE( bhv_ambient_sounds_init),
	BEGIN_LOOP(),
	END_LOOP(),
};

const BehaviorScript bhvMoatGrills[] = {
	BEGIN(OBJ_LIST_SURFACE),
	OR_INT(oFlags, 1),
	LOAD_COLLISION_DATA(col_castle_grounds_geo_00070C_0xfd8e73),
	SET_FLOAT(oCollisionDistance, 30000),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_moat_grills_loop),
	END_LOOP(),
};

const BehaviorScript bhvInvisibleObjectsUnderBridge[] = {
	BEGIN(OBJ_LIST_DEFAULT),
	CALL_NATIVE( bhv_invisible_objects_under_bridge_init),
	BREAK(),
};

const BehaviorScript bhvIntroScene[] = {
	BEGIN(OBJ_LIST_DEFAULT),
	OR_INT(oFlags, 1),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_intro_scene_loop),
	END_LOOP(),
};

const BehaviorScript bhvHidden1upInPoleSpawner[] = {
	BEGIN(OBJ_LIST_LEVEL),
	OR_INT(oFlags, 1),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_1up_hidden_in_pole_spawner_loop),
	END_LOOP(),
};

const BehaviorScript bhvCameraLakitu[] = {
	BEGIN(OBJ_LIST_DEFAULT),
	OR_INT(oFlags, 8257),
	LOAD_ANIMATIONS(10022, 100686072),
	ANIMATE(0),
	CALL_NATIVE( bhv_init_room),
	CALL_NATIVE( bhv_camera_lakitu_init),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_camera_lakitu_update),
	END_LOOP(),
};

const BehaviorScript bhvYoshi[] = {
	BEGIN(OBJ_LIST_GENACTOR),
	OR_INT(oFlags, 8201),
	LOAD_ANIMATIONS(10022, 84034024),
	SET_INTERACT_TYPE(8388608),
	DROP_TO_FLOOR(),
	SET_HITBOX(160, 150),
	ANIMATE(0),
	SET_HOME(),
	CALL_NATIVE( bhv_yoshi_init),
	BEGIN_LOOP(),
		SET_INT(oIntangibleTimer, 0),
		CALL_NATIVE( bhv_yoshi_loop),
	END_LOOP(),
};

const BehaviorScript bhvSeesawPlatform[] = {
	BEGIN(OBJ_LIST_SURFACE),
	OR_INT(oFlags, 8265),
	CALL_NATIVE( bhv_seesaw_platform_init),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_seesaw_platform_update),
		CALL_NATIVE( load_object_collision_model),
	END_LOOP(),
};

const BehaviorScript bhvFerrisWheelAxle[] = {
	BEGIN(OBJ_LIST_SURFACE),
	OR_INT(oFlags, 1),
	ADD_INT(oMoveAngleYaw, 16384),
	CALL_NATIVE( bhv_ferris_wheel_axle_init),
	BEGIN_LOOP(),
		ADD_INT(oFaceAngleRoll, 400),
		CALL_NATIVE( load_object_collision_model),
	END_LOOP(),
};

const BehaviorScript bhvBowserCourseRedCoinStar[] = {
	BEGIN(OBJ_LIST_LEVEL),
	OR_INT(oFlags, 16385),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_bowser_course_red_coin_star_loop),
	END_LOOP(),
};

const BehaviorScript bhvMessagePanel[] = {
	BEGIN(OBJ_LIST_SURFACE),
	OR_INT(oFlags, 1),
	LOAD_COLLISION_DATA(col_wooden_signpost_geo_0xae018c),
	SET_INTERACT_TYPE(8388608),
	SET_INT(oInteractionSubtype, 4096),
	DROP_TO_FLOOR(),
	SET_HITBOX(150, 80),
	SET_INT(oUkikiTauntsToBeDone, 0),
	BEGIN_LOOP(),
		SET_INT(oIntangibleTimer, 0),
		CALL_NATIVE( load_object_collision_model),
		SET_INT(oInteractStatus, 0),
	END_LOOP(),
};

const BehaviorScript bhvBitfsSinkingCagePlatform[] = {
	BEGIN(OBJ_LIST_SURFACE),
	OR_INT(oFlags, 1),
	LOAD_COLLISION_DATA(col_bitfs_geo_000690_0x1020d2b),
	SET_HOME(),
	SPAWN_CHILD(57, 318771200),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_bitfs_sinking_cage_platform_loop),
		CALL_NATIVE( load_object_collision_model),
	END_LOOP(),
};

const BehaviorScript bhvSmallBully[] = {
	BEGIN(OBJ_LIST_GENACTOR),
	OR_INT(oFlags, 9),
	LOAD_ANIMATIONS(10022, 83904268),
	DROP_TO_FLOOR(),
	SET_HOME(),
	CALL_NATIVE( bhv_small_bully_init),
	BEGIN_LOOP(),
		SET_INT(oIntangibleTimer, 0),
		CALL_NATIVE( bhv_bully_loop),
	END_LOOP(),
};

const BehaviorScript bhvActivatedBackAndForthPlatform[] = {
	BEGIN(OBJ_LIST_SURFACE),
	OR_INT(oFlags, 65),
	SET_HOME(),
	CALL_NATIVE( bhv_activated_back_and_forth_platform_init),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_activated_back_and_forth_platform_update),
		CALL_NATIVE( load_object_collision_model),
	END_LOOP(),
};

const BehaviorScript bhvWhirlpool[] = {
	BEGIN(OBJ_LIST_POLELIKE),
	OR_INT(oFlags, 65),
	CALL_NATIVE( bhv_whirlpool_init),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_whirlpool_loop),
	END_LOOP(),
};

const BehaviorScript bhvLargeFishGroup[] = {
	BEGIN(OBJ_LIST_DEFAULT),
	DISABLE_RENDERING(),
};

const BehaviorScript bhvOctagonalPlatformRotating[] = {
	BEGIN(OBJ_LIST_SURFACE),
	OR_INT(oFlags, 1),
	CALL_NATIVE( bhv_rotating_octagonal_plat_init),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_rotating_octagonal_plat_loop),
		CALL_NATIVE( load_object_collision_model),
	END_LOOP(),
};

const BehaviorScript bhvSlidingPlatform2[] = {
	BEGIN(OBJ_LIST_SURFACE),
	OR_INT(oFlags, 65),
	SET_HOME(),
	CALL_NATIVE( bhv_sliding_plat_2_init),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_sliding_plat_2_loop),
		CALL_NATIVE( load_object_collision_model),
	END_LOOP(),
};

const BehaviorScript bhvLllHexagonalMesh[] = {
	BEGIN(OBJ_LIST_SURFACE),
	OR_INT(oFlags, 1),
	LOAD_COLLISION_DATA(col_lll_geo_000AF0_0xacf2d8),
	BEGIN_LOOP(),
		CALL_NATIVE( load_object_collision_model),
	END_LOOP(),
};

const BehaviorScript bhvLllRotatingBlockWithFireBars[] = {
	BEGIN(OBJ_LIST_SURFACE),
	OR_INT(oFlags, 73),
	LOAD_COLLISION_DATA(col_lll_geo_000B38_0x107534b),
	SET_FLOAT(oCollisionDistance, 4000),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_lll_rotating_block_fire_bars_loop),
	END_LOOP(),
};

const BehaviorScript bhvLllSinkingSquarePlatforms[] = {
	BEGIN(OBJ_LIST_SURFACE),
	OR_INT(oFlags, 73),
	LOAD_COLLISION_DATA(col_lll_geo_000BE0_0x1075663),
	ADD_FLOAT(oPosY, 5),
	SET_FLOAT(oCollisionDistance, 2000),
	SET_HOME(),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_lll_sinking_square_platforms_loop),
		CALL_NATIVE( load_object_collision_model),
	END_LOOP(),
};

const BehaviorScript bhvLllTiltingInvertedPyramid[] = {
	BEGIN(OBJ_LIST_SURFACE),
	OR_INT(oFlags, 73),
	LOAD_COLLISION_DATA(col_lll_geo_000BF8_0x1075723),
	ADD_FLOAT(oPosY, 5),
	SET_HOME(),
	CALL_NATIVE( bhv_platform_normals_init),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_tilting_inverted_pyramid_loop),
		CALL_NATIVE( load_object_collision_model),
	END_LOOP(),
};

const BehaviorScript bhvLllBowserPuzzle[] = {
	BEGIN(OBJ_LIST_SPAWNER),
	DISABLE_RENDERING(),
};

const BehaviorScript bhvLllSinkingRectangularPlatform[] = {
	BEGIN(OBJ_LIST_SURFACE),
	OR_INT(oFlags, 73),
	LOAD_COLLISION_DATA(col_lll_geo_000BC8_0x107561b),
	SET_FLOAT(oCollisionDistance, 2000),
	SET_HOME(),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_lll_sinking_rectangular_platform_loop),
		CALL_NATIVE( load_object_collision_model),
	END_LOOP(),
};

const BehaviorScript bhvLllSinkingRockBlock[] = {
	BEGIN(OBJ_LIST_SURFACE),
	OR_INT(oFlags, 9),
	LOAD_COLLISION_DATA(col_lll_geo_000DD0_0x10757a3),
	ADD_FLOAT(oPosY, 65486),
	SET_HOME(),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_lll_sinking_rock_block_loop),
		CALL_NATIVE( load_object_collision_model),
	END_LOOP(),
};

const BehaviorScript bhvBigBully[] = {
	BEGIN(OBJ_LIST_GENACTOR),
	OR_INT(oFlags, 9),
	LOAD_ANIMATIONS(10022, 83904268),
	DROP_TO_FLOOR(),
	SET_HOME(),
	CALL_NATIVE( bhv_big_bully_init),
	BEGIN_LOOP(),
		SET_INT(oIntangibleTimer, 0),
		CALL_NATIVE( bhv_bully_loop),
	END_LOOP(),
};

const BehaviorScript bhvLllVolcanoFallingTrap[] = {
	BEGIN(OBJ_LIST_SURFACE),
	OR_INT(oFlags, 1),
	LOAD_COLLISION_DATA(col_lll_geo_000EA8_0x10806ef),
	SET_HOME(),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_volcano_trap_loop),
		CALL_NATIVE( load_object_collision_model),
	END_LOOP(),
};

const BehaviorScript bhvVolcanoSoundLoop[] = {
	BEGIN(OBJ_LIST_DEFAULT),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_volcano_sound_loop),
	END_LOOP(),
};

const BehaviorScript bhvSkeeter[] = {
	BEGIN(OBJ_LIST_GENACTOR),
	OR_INT(oFlags, 8265),
	LOAD_ANIMATIONS(10022, 100695520),
	SET_HOME(),
	SET_OBJ_PHYSICS(180, 65136, 65486, 1000, 1000, 1200, 0, 0),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_skeeter_update),
	END_LOOP(),
};

const BehaviorScript bhvMantaRay[] = {
	BEGIN(OBJ_LIST_GENACTOR),
	OR_INT(oFlags, 17),
	LOAD_ANIMATIONS(10022, 83922612),
	ANIMATE(0),
	CALL_NATIVE( bhv_manta_ray_init),
	BEGIN_LOOP(),
		SET_INT(oIntangibleTimer, 0),
		CALL_NATIVE( bhv_manta_ray_loop),
	END_LOOP(),
};

const BehaviorScript bhvDDDPole[] = {
	BEGIN(OBJ_LIST_POLELIKE),
	SET_INTERACT_TYPE(64),
	SET_HITBOX(80, 800),
	SET_INT(oIntangibleTimer, 0),
	OR_INT(oFlags, 1),
	SET_HOME(),
	CALL_NATIVE( bhv_ddd_pole_init),
	SET_FLOAT(oUkikiTauntsToBeDone, 10),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_ddd_pole_update),
		CALL_NATIVE( bhv_pole_base_loop),
	END_LOOP(),
};

const BehaviorScript bhvCoinFormation[] = {
	BEGIN(OBJ_LIST_SPAWNER),
	OR_INT(oFlags, 65),
	CALL_NATIVE( bhv_coin_formation_init),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_coin_formation_loop),
	END_LOOP(),
};

const BehaviorScript bhvBowserSubDoor[] = {
	BEGIN(OBJ_LIST_SURFACE),
	OR_INT(oFlags, 129),
	LOAD_COLLISION_DATA(col_ddd_geo_000478_0x10987bb),
	SET_FLOAT(oDrawingDistance, 20000),
	SET_FLOAT(oCollisionDistance, 20000),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_bowsers_sub_loop),
		CALL_NATIVE( load_object_collision_model),
	END_LOOP(),
};

const BehaviorScript bhvGiantPole[] = {
	BEGIN(OBJ_LIST_POLELIKE),
	OR_INT(oFlags, 1),
	SET_INT(oInteractType, 64),
	SET_HITBOX(80, 2100),
	SET_HOME(),
	SET_INT(oIntangibleTimer, 0),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_giant_pole_loop),
	END_LOOP(),
};

const BehaviorScript bhvSmallBomp[] = {
	BEGIN(OBJ_LIST_SURFACE),
	OR_INT(oFlags, 3),
	LOAD_COLLISION_DATA(col_wf_geo_000A00_0x10b00eb),
	CALL_NATIVE( bhv_small_bomp_init),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_small_bomp_loop),
		CALL_NATIVE( load_object_collision_model),
	END_LOOP(),
};

const BehaviorScript bhvBulletBillCannon[] = {
	BEGIN(OBJ_LIST_SURFACE),
	OR_INT(oFlags, 1),
	LOAD_COLLISION_DATA(col_wf_geo_0008E8_0x10b0ae3),
	SET_FLOAT(oCollisionDistance, 300),
	BEGIN_LOOP(),
		CALL_NATIVE( load_object_collision_model),
	END_LOOP(),
};

const BehaviorScript bhvWfRotatingWoodenPlatform[] = {
	BEGIN(OBJ_LIST_SURFACE),
	OR_INT(oFlags, 1),
	LOAD_COLLISION_DATA(col_wf_geo_000A58_0x10b0283),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_wf_rotating_wooden_platform_loop),
		CALL_NATIVE( load_object_collision_model),
	END_LOOP(),
};

const BehaviorScript bhvTowerDoor[] = {
	BEGIN(OBJ_LIST_SURFACE),
	OR_INT(oFlags, 193),
	LOAD_COLLISION_DATA(col_wf_geo_000BE0_0x10b0583),
	SET_HITBOX(100, 100),
	SET_INT(oIntangibleTimer, 0),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_tower_door_loop),
		CALL_NATIVE( load_object_collision_model),
	END_LOOP(),
};

const BehaviorScript bhvHeaveHo[] = {
	BEGIN(OBJ_LIST_GENACTOR),
	OR_INT(oFlags, 9289),
	LOAD_ANIMATIONS(10022, 83972940),
	ANIMATE(0),
	SET_OBJ_PHYSICS(200, 65136, 65486, 1000, 1000, 600, 0, 0),
	SPAWN_OBJ(0, 318772644),
	SET_INT(oInteractType, 2),
	SET_INT(oInteractionSubtype, 516),
	SET_HITBOX(120, 100),
	SET_HOME(),
	SET_INT(oIntangibleTimer, 0),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_heave_ho_loop),
	END_LOOP(),
};

const BehaviorScript bhvWfBreakableWallRight[] = {
	BEGIN(OBJ_LIST_SURFACE),
	LOAD_COLLISION_DATA(col_wf_geo_000B78_0x10b048f),
	GOTO( Bhv_Custom_0x13000644),
};

const BehaviorScript Bhv_Custom_0x13000644[] = {
	OR_INT(oFlags, 201),
	SET_HITBOX(300, 400),
	SET_INT(oIntangibleTimer, 0),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_wf_breakable_wall_loop),
		CALL_NATIVE( load_object_collision_model),
	END_LOOP(),
};

const BehaviorScript bhvWfBreakableWallLeft[] = {
	BEGIN(OBJ_LIST_SURFACE),
	LOAD_COLLISION_DATA(col_wf_geo_000B90_0x10b04c7),
	OR_INT(oFlags, 201),
	SET_HITBOX(300, 400),
	SET_INT(oIntangibleTimer, 0),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_wf_breakable_wall_loop),
		CALL_NATIVE( load_object_collision_model),
	END_LOOP(),
};

const BehaviorScript bhvSmallWhomp[] = {
	BEGIN(OBJ_LIST_SURFACE),
	SET_INT(oNumLootCoins, 5),
	OR_INT(oFlags, 8265),
	LOAD_ANIMATIONS(10022, 100796932),
	LOAD_COLLISION_DATA(col_whomp_geo_0xa2a340),
	ANIMATE(0),
	SET_OBJ_PHYSICS(0, 65136, 65486, 0, 0, 200, 0, 0),
	SET_HOME(),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_whomp_loop),
	END_LOOP(),
};

const BehaviorScript bhvTower[] = {
	BEGIN(OBJ_LIST_SURFACE),
	OR_INT(oFlags, 1),
	LOAD_COLLISION_DATA(col_wf_geo_0008A8_0x10b0697),
	SET_FLOAT(oCollisionDistance, 3000),
	SET_FLOAT(oDrawingDistance, 20000),
	BEGIN_LOOP(),
		CALL_NATIVE( load_object_collision_model),
	END_LOOP(),
};

const BehaviorScript bhvWfSlidingPlatform[] = {
	BEGIN(OBJ_LIST_SURFACE),
	OR_INT(oFlags, 3),
	LOAD_COLLISION_DATA(col_wf_geo_000A98_0x10b0327),
	CALL_NATIVE( bhv_wf_sliding_platform_init),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_wf_sliding_platform_loop),
		CALL_NATIVE( load_object_collision_model),
	END_LOOP(),
};

const BehaviorScript bhvWfTumblingBridge[] = {
	BEGIN(OBJ_LIST_SPAWNER),
	OR_INT(oFlags, 193),
	SET_HOME(),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_tumbling_bridge_loop),
	END_LOOP(),
};

const BehaviorScript bhvWhompKingBoss[] = {
	BEGIN(OBJ_LIST_SURFACE),
	SET_INT(oBehParams2ndByte, 1),
	SET_INT(oHealth, 3),
	GOTO( Bhv_Custom_0x13002bd4),
};

const BehaviorScript Bhv_Custom_0x13002bd4[] = {
	OR_INT(oFlags, 8265),
	LOAD_ANIMATIONS(10022, 100796932),
	LOAD_COLLISION_DATA(col_whomp_geo_0xa2a340),
	ANIMATE(0),
	SET_OBJ_PHYSICS(0, 65136, 65486, 0, 0, 200, 0, 0),
	SET_HOME(),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_whomp_loop),
	END_LOOP(),
};

const BehaviorScript bhvSignOnWall[] = {
	BEGIN(OBJ_LIST_SURFACE),
	OR_INT(oFlags, 1),
	SET_INTERACT_TYPE(8388608),
	SET_INT(oInteractionSubtype, 4096),
	SET_HITBOX(150, 80),
	SET_INT(oUkikiTauntsToBeDone, 0),
	BEGIN_LOOP(),
		SET_INT(oIntangibleTimer, 0),
		SET_INT(oInteractStatus, 0),
	END_LOOP(),
};

const BehaviorScript bhvCapSwitch[] = {
	BEGIN(OBJ_LIST_SURFACE),
	OR_INT(oFlags, 9),
	LOAD_COLLISION_DATA(col_cap_switch_geo_0x913d94),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_cap_switch_loop),
		CALL_NATIVE( load_object_collision_model),
	END_LOOP(),
};

const BehaviorScript bhvFlyingWarp[] = {
	BREAK(),
};

const BehaviorScript bhvUnusedFakeStar[] = {
	BEGIN(OBJ_LIST_DEFAULT),
	OR_INT(oFlags, 1),
	BEGIN_LOOP(),
		ADD_INT(oFaceAnglePitch, 256),
		ADD_INT(oFaceAngleYaw, 256),
	END_LOOP(),
};

const BehaviorScript bhvTiltingBowserLavaPlatform[] = {
	BEGIN(OBJ_LIST_SURFACE),
	OR_INT(oFlags, 8193),
	LOAD_COLLISION_DATA(col_bowser_2_geo_000170_0x115df4f),
	SET_FLOAT(oDrawingDistance, 20000),
	SET_FLOAT(oCollisionDistance, 20000),
	SET_INT(oFaceAngleYaw, 0),
	SET_HOME(),
	BEGIN_LOOP(),
		CALL_NATIVE( cur_obj_rotate_face_angle_using_vel),
		CALL_NATIVE( load_object_collision_model),
	END_LOOP(),
};

const BehaviorScript bhvBowserBomb[] = {
	BEGIN(OBJ_LIST_GENACTOR),
	OR_INT(oFlags, 1),
	SET_INT(oIntangibleTimer, 0),
	SET_HITBOX_WITH_OFFSET(40, 40, 40),
	DELAY(1),
	BEGIN_LOOP(),
		SET_INT(oIntangibleTimer, 0),
		CALL_NATIVE( bhv_bowser_bomb_loop),
	END_LOOP(),
};

const BehaviorScript bhvFallingBowserPlatform[] = {
	BEGIN(OBJ_LIST_SURFACE),
	OR_INT(oFlags, 1),
	SET_FLOAT(oDrawingDistance, 20000),
	SET_FLOAT(oCollisionDistance, 20000),
	SET_HOME(),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_falling_bowser_platform_loop),
		CALL_NATIVE( load_object_collision_model),
	END_LOOP(),
};

const BehaviorScript bhvMontyMole[] = {
	BEGIN(OBJ_LIST_GENACTOR),
	OR_INT(oFlags, 8265),
	DROP_TO_FLOOR(),
	LOAD_ANIMATIONS(10022, 83915336),
	ANIMATE(3),
	SET_OBJ_PHYSICS(30, 0, 65486, 1000, 1000, 200, 0, 0),
	HIDE(),
	SET_INT(oIntangibleTimer, 65535),
	SET_FLOAT(oGraphYOffset, 65476),
	SCALE(0, 150),
	DELAY(1),
	CALL_NATIVE( bhv_monty_mole_init),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_monty_mole_update),
	END_LOOP(),
};

const BehaviorScript bhvUkiki[] = {
	BEGIN(OBJ_LIST_GENACTOR),
	GOTO( Bhv_Custom_0x13001cb4),
};

const BehaviorScript Bhv_Custom_0x13001cb4[] = {
	OR_INT(oFlags, 9289),
	SET_INT(oInteractType, 2),
	SET_INT(oInteractionSubtype, 16),
	SET_HITBOX(40, 40),
	SET_INT(oIntangibleTimer, 0),
	DROP_TO_FLOOR(),
	LOAD_ANIMATIONS(10022, 83974020),
	ANIMATE(0),
	SET_OBJ_PHYSICS(30, 65136, 65486, 0, 0, 200, 0, 0),
	SET_HOME(),
	CALL_NATIVE( bhv_ukiki_init),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_ukiki_loop),
	END_LOOP(),
};

const BehaviorScript bhvTtmRollingLog[] = {
	BEGIN(OBJ_LIST_SURFACE),
	OR_INT(oFlags, 1),
	LOAD_COLLISION_DATA(col_ttm_geo_000730_0x11867bb),
	SET_HOME(),
	SET_FLOAT(oCollisionDistance, 2000),
	CALL_NATIVE( bhv_ttm_rolling_log_init),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_rolling_log_loop),
		CALL_NATIVE( load_object_collision_model),
	END_LOOP(),
};

const BehaviorScript bhvExitPodiumWarp[] = {
	BEGIN(OBJ_LIST_SURFACE),
	OR_INT(oFlags, 9),
	SET_INT(oInteractType, 8192),
	DROP_TO_FLOOR(),
	SET_FLOAT(oCollisionDistance, 8000),
	LOAD_COLLISION_DATA(col_ttm_geo_000DF4_0x11a327f),
	SET_INT(oIntangibleTimer, 0),
	SET_HITBOX(50, 50),
	BEGIN_LOOP(),
		CALL_NATIVE( load_object_collision_model),
		SET_INT(oInteractStatus, 0),
	END_LOOP(),
};

