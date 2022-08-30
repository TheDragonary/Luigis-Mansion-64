#This file is provided only as a reference for manually recoding functions.

#This function is called from Behavior  bhvGhostHuntBoo
#It has virtual address 0x802A4120 and rom address 0x5F120
 bhv_init_room:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$a0, 0x8033
	lui	$a1, 0x8033
	addiu	$a1, $a1, 0x14
	jal	 is_item_in_array
	lh	$a0, -0x2208($a0)
	beqz	$v0, 0xc8
	nop	
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	addiu	$a3, $sp, 0x1c
	lwc1	$f12, 0xa0($t6)
	lwc1	$f14, 0xa4($t6)
	jal	 find_floor
	lw	$a2, 0xa8($t6)
	swc1	$f0, 0x18($sp)
	lw	$t7, 0x1c($sp)
	beqz	$t7, 0xc0
	nop	
	lw	$t8, 0x1c($sp)
	lb	$t9, 5($t8)
	beqz	$t9, 0x78
	nop	
	lw	$t0, 0x1c($sp)
	lui	$t2, 0x8036
	lw	$t2, 0x1160($t2)
	lb	$t1, 5($t0)
	b	0xc0
	sw	$t1, 0x1a0($t2)
	lui	$t3, 0x8036
	lw	$t3, 0x1160($t3)
	lui	$at, 0x42c8
	mtc1	$at, $f6
	lwc1	$f4, 0x18($sp)
	addiu	$a3, $sp, 0x1c
	lwc1	$f12, 0xa0($t3)
	lw	$a2, 0xa8($t3)
	jal	 find_floor
	sub.s	$f14, $f4, $f6
	lw	$t4, 0x1c($sp)
	beqz	$t4, 0xc0
	nop	
	lw	$t5, 0x1c($sp)
	lui	$t7, 0x8036
	lw	$t7, 0x1160($t7)
	lb	$t6, 5($t5)
	sw	$t6, 0x1a0($t7)
	b	0xd8
	nop	
	lui	$t9, 0x8036
	lw	$t9, 0x1160($t9)
	addiu	$t8, $zero, -1
	sw	$t8, 0x1a0($t9)
	b	0xe0
	nop	
	lw	$ra, 0x14($sp)
	addiu	$sp, $sp, 0x20
	jr	$ra
	nop	
#This function is called from Behavior  bhvGhostHuntBoo
#It has virtual address 0x802C3440 and rom address 0x7E440
 bhv_boo_init:
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0xc8($t6)
	sw	$t7, 0x110($t6)
	jr	$ra
	nop	
#This function is called from Behavior  bhvGhostHuntBoo
#It has virtual address 0x802C4824 and rom address 0x7F824
 bhv_boo_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	jal	 cur_obj_update_floor_and_walls
	nop	
	lui	$a0, 0x8033
	jal	 cur_obj_call_action_function
#This function is called from Behavior  bhvToadMessage
#It has virtual address 0x80276910 and rom address 0x31910
 bhv_toad_message_init:
	addiu	$sp, $sp, -0x38
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	jal	 save_file_get_flags
	nop	
	sw	$v0, 0x34($sp)
#This function is called from Behavior  bhvToadMessage
#It has virtual address 0x8027684C and rom address 0x3184C
 bhv_toad_message_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lh	$t7, 2($t6)
	andi	$t8, $t7, 1
#This function is called from Behavior  bhvStarDoor
#It has virtual address 0x802ACC3C and rom address 0x67C3C
 bhv_door_init:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lwc1	$f4, 0xa0($t6)
	swc1	$f4, 0x24($sp)
#This function is called from Behavior  bhvStarDoor
#It has virtual address 0x802A56BC and rom address 0x606BC
 bhv_star_door_loop:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$a0, 0x1300
	jal	 cur_obj_nearest_object_with_behavior
	addiu	$a0, $a0, 0
	sw	$v0, 0x18($sp)
#This function is called from Behavior  bhvStarDoor
#It has virtual address 0x802ACE80 and rom address 0x67E80
 bhv_star_door_loop_2:
	addiu	$sp, $sp, -8
	sw	$zero, 4($sp)
	lui	$t6, 0x8036
	lh	$t6, 0x1250($t6)
	beqz	$t6, 0x174
	nop	
#This function is called from Behavior  bhvStarDoor
#It has virtual address 0x803839CC and rom address 0x13E9CC
 load_object_collision_model:
	beq	$gp, $v1, 0x10e00
	bne	$a2, $a1, -0x1011c
	andi	$s5, $at, 0xf001
	beql	$zero, $s3, 0x7eb4
#This function is called from Behavior  bhvBooInCastle
#It has virtual address 0x802C5414 and rom address 0x80414
 bhv_boo_in_castle_loop:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$at, 0x4000
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	mtc1	$at, $f4
#This function is called from Behavior  Bhv_Custom_0x13000b14
#It has virtual address 0x802ACAC8 and rom address 0x67AC8
 bhv_door_loop:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	sw	$zero, 0x1c($sp)
	lw	$t6, 0x1c($sp)
	lui	$t8, 0x8033
	addiu	$at, $zero, -1
#This function is called from Behavior  bhvWarp
#It has virtual address 0x802AAA60 and rom address 0x65A60
 bhv_warp_loop:
	addiu	$sp, $sp, -8
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x154($t6)
	bnez	$t7, 0xd8
	nop	
#This function is called from Behavior  bhvWaterLevelPillar
#It has virtual address 0x802BA19C and rom address 0x7519C
 bhv_water_level_pillar_init:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	jal	 save_file_get_flags
	nop	
	andi	$t6, $v0, 0x200
	beqz	$t6, 0x2c
#This function is called from Behavior  bhvWaterLevelPillar
#It has virtual address 0x802BA1E0 and rom address 0x751E0
 bhv_water_level_pillar_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0xf8($t6)
	beqz	$t7, 0x2c
#This function is called from Behavior  bhvDddWarp
#It has virtual address 0x802B9E94 and rom address 0x74E94
 bhv_ddd_warp_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lb	$t6, 0x131c($t6)
	andi	$t7, $t6, 2
	beqz	$t7, 0x38
#This function is called from Behavior  bhvMips
#It has virtual address 0x802F8490 and rom address 0xB3490
 bhv_mips_init:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$a0, 0x8033
	lh	$a0, -0x220c($a0)
	addiu	$a1, $zero, -1
	jal	 save_file_get_star_flags
#This function is called from Behavior  bhvMips
#It has virtual address 0x802F8DAC and rom address 0xB3DAC
 bhv_mips_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$s0, 0x124($t6)
#This function is called from Behavior  bhvHauntedBookshelf
#It has virtual address 0x802C5A38 and rom address 0x80A38
 bhv_haunted_bookshelf_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$a0, 0x8036
	lui	$a1, 0x8036
	lw	$a1, 0x1158($a1)
#This function is called from Behavior  bhvMeshElevator
#It has virtual address 0x802ADDF8 and rom address 0x68DF8
 bhv_elevator_init:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lui	$t0, 0x8033
	lw	$t7, 0x144($t6)
#This function is called from Behavior  bhvMeshElevator
#It has virtual address 0x802ADF6C and rom address 0x68F6C
 bhv_elevator_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$a0, 0x8033
	jal	 cur_obj_call_action_function
	addiu	$a0, $a0, 0x318
	b	0x1c
#This function is called from Behavior  bhvCoffinSpawner
#It has virtual address 0x80312248 and rom address 0xCD248
 bhv_coffin_spawner_loop:
	addiu	$sp, $sp, -0x38
	sw	$ra, 0x24($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x14c($t6)
	bnez	$t7, 0xec
#This function is called from Behavior  bhvExclamationBox
#It has virtual address 0x802C19C0 and rom address 0x7C9C0
 bhv_exclamation_box_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$at, 0x4000
	mtc1	$at, $f12
	jal	 cur_obj_scale
	nop	
#This function is called from Behavior  Bhv_Custom_0x13000920
#It has virtual address 0x802AB650 and rom address 0x66650
 bhv_yellow_coin_init:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$a0, 0x1300
	jal	 cur_obj_set_behavior
	addiu	$a0, $a0, 0x91c
	lui	$a0, 0x8036
#This function is called from Behavior  Bhv_Custom_0x13000920
#It has virtual address 0x802AB70C and rom address 0x6670C
 bhv_yellow_coin_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	jal	 bhv_coin_sparkles_init
	nop	
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
#This function is called from Behavior  bhvPushableMetalBox
#It has virtual address 0x802B15E8 and rom address 0x6C5E8
 bhv_pushable_loop:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$a0, 0x8036
	lui	$a1, 0x8033
	addiu	$a1, $a1, 0x3a0
	jal	 obj_set_hitbox
#This function is called from Behavior  bhvStar
#It has virtual address 0x802F24F4 and rom address 0xAD4F4
 bhv_collect_star_init:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x188($t6)
	sra	$t8, $t7, 0x18
#This function is called from Behavior  bhvStar
#It has virtual address 0x802F25B0 and rom address 0xAD5B0
 bhv_collect_star_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0xd4($t6)
	addiu	$t8, $t7, 0x800
#This function is called from Behavior  Bhv_Custom_0x13002794
#It has virtual address 0x802C4F30 and rom address 0x7FF30
 bhv_big_boo_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$a0, 0x8036
	lui	$a1, 0x8033
	addiu	$a1, $a1, 0xc74
	jal	 obj_set_hitbox
#This function is called from Behavior  bhvEmitter_MOP
#It has virtual address 0x8030C4B0 and rom address 0xC74B0
 bhv_bookend_spawn_loop:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lh	$t7, 0x74($t6)
	andi	$t8, $t7, 8
#This function is called from Behavior  bhvFlyingBookend
#It has virtual address 0x8030C364 and rom address 0xC7364
 bhv_flying_bookend_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lh	$t7, 0x74($t6)
#This function is called from Behavior  bhvHiddenRedCoinStar
#It has virtual address 0x802F2C84 and rom address 0xADC84
 bhv_hidden_red_coin_star_init:
	addiu	$sp, $sp, -0x38
	sw	$ra, 0x2c($sp)
	lui	$t6, 0x8034
	lh	$t6, -0x453a($t6)
	addiu	$at, $zero, 3
	beq	$t6, $at, 0x34
#This function is called from Behavior  bhvHiddenRedCoinStar
#It has virtual address 0x802F2D8C and rom address 0xADD8C
 bhv_hidden_red_coin_star_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lui	$at, 0x8036
#This function is called from Behavior  bhvSmallPenguin
#It has virtual address 0x802BFA88 and rom address 0x7AA88
 bhv_small_penguin_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$s0, 0x124($t6)
#This function is called from Behavior  bhvMrBlizzard
#It has virtual address 0x8030803C and rom address 0xC303C
 bhv_mr_blizzard_init:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	addiu	$at, $zero, 1
	lw	$t7, 0x144($t6)
#This function is called from Behavior  bhvMrBlizzard
#It has virtual address 0x80308D6C and rom address 0xC3D6C
 bhv_mr_blizzard_update:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sdc1	$f20, 0x10($sp)
	jal	 cur_obj_update_floor_and_walls
	nop	
	lui	$t6, 0x8036
#This function is called from Behavior  bhvCcmTouchedStarSpawn
#It has virtual address 0x802B2340 and rom address 0x6D340
 bhv_ccm_touched_star_spawn_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lh	$t6, 0x125c($t6)
	andi	$t7, $t6, 1
	beqz	$t7, 0x88
#This function is called from Behavior  bhvTuxiesMother
#It has virtual address 0x802BF3C0 and rom address 0x7A3C0
 bhv_tuxies_mother_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lh	$t7, 0x74($t6)
	ori	$t8, $t7, 0x400
#This function is called from Behavior  bhvPenguinRaceFinishLine
#It has virtual address 0x80312168 and rom address 0xCD168
 bhv_penguin_race_finish_line_update:
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x68($t6)
	lh	$t8, 0x1b0($t7)
	bnez	$t8, 0x5c
	nop	
#This function is called from Behavior  bhvPenguinRaceShortcutCheck
#It has virtual address 0x80312200 and rom address 0xCD200
 bhv_penguin_race_shortcut_check_update:
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lui	$at, 0x43fa
	mtc1	$at, $f6
	lwc1	$f4, 0x15c($t6)
	c.lt.s	$f4, $f6
#This function is called from Behavior  bhvPlaysMusicTrackWhenTouched
#It has virtual address 0x802C5FDC and rom address 0x80FDC
 bhv_play_music_track_when_touched_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x14c($t6)
	bnez	$t7, 0x5c
#This function is called from Behavior  bhvOpenableGrill
#It has virtual address 0x802C26F8 and rom address 0x7D6F8
 bhv_openable_grill_loop:
	addiu	$sp, $sp, -0x40
	sw	$ra, 0x2c($sp)
	sw	$s0, 0x28($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$s0, 0x14c($t6)
#This function is called from Behavior  Bhv_Custom_0x13001488
#It has virtual address 0x802B1278 and rom address 0x6C278
 bhv_purple_switch_loop:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x14c($t6)
	sltiu	$at, $t7, 5
#This function is called from Behavior  bhvMontyMoleHole
#It has virtual address 0x803043F8 and rom address 0xBF3F8
 bhv_monty_mole_hole_update:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x68($t6)
	bne	$t7, $t6, 0x3c
#This function is called from Behavior  bhvHiddenObject
#It has virtual address 0x802B1AE0 and rom address 0x6CAE0
 bhv_hidden_object_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x144($t6)
	bnez	$t7, 0x2c
#This function is called from Behavior  bhvSwoop
#It has virtual address 0x802FE8B4 and rom address 0xB98B4
 bhv_swoop_update:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lh	$t7, 0x74($t6)
#This function is called from Behavior  bhvScuttlebug
#It has virtual address 0x802C65C0 and rom address 0x815C0
 bhv_scuttlebug_loop:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	jal	 cur_obj_update_floor_and_walls
	nop	
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
#This function is called from Behavior  bhvFlamethrower
#It has virtual address 0x802AF1E8 and rom address 0x6A1E8
 bhv_flamethrower_loop:
	addiu	$sp, $sp, -0x40
	sw	$ra, 0x24($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x14c($t6)
	bnez	$t7, 0x84
#This function is called from Behavior  bhvPoleGrabbing
#It has virtual address 0x802A6C20 and rom address 0x61C20
 bhv_pole_init:
	addiu	$sp, $sp, -8
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x188($t6)
	sra	$t8, $t7, 0x10
	andi	$t9, $t8, 0xff
#This function is called from Behavior  bhvPoleGrabbing
#It has virtual address 0x802C63E8 and rom address 0x813E8
 bhv_pole_base_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lui	$at, 0x4120
	mtc1	$at, $f6
#This function is called from Behavior  bhvDorrie
#It has virtual address 0x8030B2F4 and rom address 0xC62F4
 bhv_dorrie_update:
	addiu	$sp, $sp, -0x38
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lh	$t7, 0x74($t6)
#This function is called from Behavior  bhvBigBoulderGenerator
#It has virtual address 0x802F17F0 and rom address 0xAC7F0
 bhv_big_boulder_generator_loop:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x154($t6)
	slti	$at, $t7, 0x100
#This function is called from Behavior  bhvHiddenStar
#It has virtual address 0x802F3014 and rom address 0xAE014
 bhv_hidden_star_init:
	addiu	$sp, $sp, -0x38
	sw	$ra, 0x2c($sp)
	lui	$a0, 0x1300
	jal	 count_objects_with_behavior
	addiu	$a0, $a0, 0x3f1c
	sh	$v0, 0x36($sp)
#This function is called from Behavior  bhvHiddenStar
#It has virtual address 0x802F30F0 and rom address 0xAE0F0
 bhv_hidden_star_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$s0, 0x14c($t6)
#This function is called from Behavior  bhvHorizontalGrindel
#It has virtual address 0x8030E14C and rom address 0xC914C
 bhv_horizontal_grindel_init:
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0xc8($t6)
	sw	$t7, 0xf4($t6)
	jr	$ra
	nop	
#This function is called from Behavior  bhvHorizontalGrindel
#It has virtual address 0x802A2320 and rom address 0x5D320
 cur_obj_update_floor_and_walls:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	jal	0x802a21d4
	addiu	$a0, $zero, 0x3c
	b	0x18
	nop	
#This function is called from Behavior  bhvHorizontalGrindel
#It has virtual address 0x8030E16C and rom address 0xC916C
 bhv_horizontal_grindel_update:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0xec($t6)
	andi	$t8, $t7, 3
#This function is called from Behavior  bhvPyramidTop
#It has virtual address 0x802F0168 and rom address 0xAB168
 bhv_pyramid_top_init:
	addiu	$sp, $sp, -0x30
	sw	$ra, 0x2c($sp)
	lui	$a0, 0x8036
	lui	$a3, 0x1300
	addiu	$t6, $zero, 0x6fd
	addiu	$t7, $zero, 0x400
#This function is called from Behavior  bhvPyramidTop
#It has virtual address 0x802F05B4 and rom address 0xAB5B4
 bhv_pyramid_top_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$s0, 0x14c($t6)
#This function is called from Behavior  bhvSpindel
#It has virtual address 0x802EF820 and rom address 0xAA820
 bhv_spindel_init:
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lwc1	$f4, 0xa4($t6)
	swc1	$f4, 0x168($t6)
	lui	$t7, 0x8036
	lw	$t7, 0x1160($t7)
#This function is called from Behavior  bhvSpindel
#It has virtual address 0x802EF858 and rom address 0xAA858
 bhv_spindel_loop:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	addiu	$at, $zero, -1
	lw	$t7, 0xf4($t6)
#This function is called from Behavior  bhvKlepto
#It has virtual address 0x80310498 and rom address 0xCB498
 bhv_klepto_init:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x144($t6)
	beqz	$t7, 0x30
#This function is called from Behavior  bhvKlepto
#It has virtual address 0x8031129C and rom address 0xCC29C
 bhv_klepto_update:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	jal	 cur_obj_update_floor_and_walls
	nop	
	jal	 cur_obj_lateral_dist_to_home
	nop	
#This function is called from Behavior  bhvGrindel
#It has virtual address 0x802AD34C and rom address 0x6834C
 bhv_grindel_thwomp_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$a0, 0x8033
	jal	 cur_obj_call_action_function
	addiu	$a0, $a0, 0x298
	b	0x1c
#This function is called from Behavior  bhvSslMovingPyramidWall
#It has virtual address 0x802EFCD0 and rom address 0xAACD0
 bhv_ssl_moving_pyramid_wall_init:
	addiu	$sp, $sp, -8
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$a0, 0x144($t6)
	beqz	$a0, 0x38
	nop	
#This function is called from Behavior  bhvSslMovingPyramidWall
#It has virtual address 0x802EFD8C and rom address 0xAAD8C
 bhv_ssl_moving_pyramid_wall_loop:
	addiu	$sp, $sp, -8
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$a0, 0x14c($t6)
	beqz	$a0, 0x2c
	nop	
#This function is called from Behavior  bhvPyramidElevator
#It has virtual address 0x802EFE64 and rom address 0xAAE64
 bhv_pyramid_elevator_init:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	sw	$zero, 0x1c($sp)
	lui	$a0, 0x8036
	lui	$a2, 0x1300
	addiu	$a2, $a2, 0x3b98
#This function is called from Behavior  bhvPyramidElevator
#It has virtual address 0x802EFEF4 and rom address 0xAAEF4
 bhv_pyramid_elevator_loop:
	addiu	$sp, $sp, -8
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$a0, 0x14c($t6)
	beqz	$a0, 0x44
	nop	
#This function is called from Behavior  bhvSandSoundLoop
#It has virtual address 0x802F09A4 and rom address 0xAB9A4
 bhv_sand_sound_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8034
	lw	$t6, -0x3430($t6)
	addiu	$at, $zero, 3
	lbu	$t7, ($t6)
#This function is called from Behavior  bhvEyerokBoss
#It has virtual address 0x8030EA9C and rom address 0xC9A9C
 bhv_eyerok_boss_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x14c($t6)
	sltiu	$at, $t7, 5
#This function is called from Behavior  bhvChainChompGate
#It has virtual address 0x80301148 and rom address 0xBC148
 bhv_chain_chomp_gate_init:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$a0, 0x1300
	jal	 cur_obj_nearest_object_with_behavior
	addiu	$a0, $a0, 0x478c
	lui	$t6, 0x8036
#This function is called from Behavior  bhvChainChompGate
#It has virtual address 0x80301180 and rom address 0xBC180
 bhv_chain_chomp_gate_update:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x68($t6)
	lw	$t8, 0x1b0($t7)
#This function is called from Behavior  bhvPitBowlingBall
#It has virtual address 0x802EF21C and rom address 0xAA21C
 bhv_bob_pit_bowling_ball_init:
	lui	$at, 0x4140
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	mtc1	$at, $f4
	nop	
	swc1	$f4, 0xe4($t6)
#This function is called from Behavior  bhvPitBowlingBall
#It has virtual address 0x802EF274 and rom address 0xAA274
 bhv_bob_pit_bowling_ball_loop:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	jal	 object_step
	nop	
	sh	$v0, 0x1a($sp)
	lui	$t6, 0x8036
#This function is called from Behavior  bhvGoombaTripletSpawner
#It has virtual address 0x802FF214 and rom address 0xBA214
 bhv_goomba_triplet_spawner_update:
	addiu	$sp, $sp, -0x40
	sw	$ra, 0x24($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x14c($t6)
	bnez	$t7, 0x1ac
#This function is called from Behavior  bhvBobombBuddyOpensCannon
#It has virtual address 0x802E76AC and rom address 0xA26AC
 bhv_bobomb_buddy_init:
	lui	$at, 0x4020
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	mtc1	$at, $f4
	nop	
	swc1	$f4, 0xe4($t6)
#This function is called from Behavior  bhvBobombBuddyOpensCannon
#It has virtual address 0x802E7C4C and rom address 0xA2C4C
 bhv_bobomb_buddy_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	jal	 bobomb_buddy_actions
	nop	
	lui	$a0, 0x8036
	lw	$a0, 0x1160($a0)
#This function is called from Behavior  bhvKoopaRaceEndpoint
#It has virtual address 0x802FD950 and rom address 0xB8950
 bhv_koopa_race_endpoint_update:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0xf4($t6)
	beqz	$t7, 0xc0
#This function is called from Behavior  bhvKingBobomb
#It has virtual address 0x802A8064 and rom address 0x63064
 bhv_king_bobomb_loop:
	addiu	$sp, $sp, -0x38
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$at, 0x41a0
	mtc1	$at, $f4
	nop	
#This function is called from Behavior  bhvKoopa
#It has virtual address 0x802FBC4C and rom address 0xB6C4C
 bhv_koopa_init:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	addiu	$at, $zero, 4
#This function is called from Behavior  bhvKoopa
#It has virtual address 0x802FD7F8 and rom address 0xB87F8
 bhv_koopa_update:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t7, 0x8036
	lw	$t7, 0x1160($t7)
	lui	$t6, 0x5063
#This function is called from Behavior  bhvFadingWarp
#It has virtual address 0x802AAB54 and rom address 0x65B54
 bhv_fading_warp_loop:
	addiu	$sp, $sp, -8
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x154($t6)
	bnez	$t7, 0xd8
	nop	
#This function is called from Behavior  bhvSnowMoundSpawn
#It has virtual address 0x802F6448 and rom address 0xB1448
 bhv_snow_mound_spawn_loop:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	addiu	$a3, $zero, 0x1770
	lwc1	$f12, 0xa0($t6)
#This function is called from Behavior  bhvSLWalkingPenguin
#It has virtual address 0x802C863C and rom address 0x8363C
 bhv_sl_walking_penguin_loop:
	addiu	$sp, $sp, -0x30
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$at, 0x42c8
	mtc1	$at, $f4
	nop	
#This function is called from Behavior  bhvSLSnowmanWind
#It has virtual address 0x802C834C and rom address 0x8334C
 bhv_sl_snowman_wind_loop:
	addiu	$sp, $sp, -0x38
	sw	$ra, 0x1c($sp)
	sw	$zero, 0x34($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x154($t6)
#This function is called from Behavior  bhvBigChillBully
#It has virtual address 0x802EB104 and rom address 0xA6104
 bhv_big_bully_init:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	jal	 cur_obj_init_animation
	move	$a0, $zero
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
#This function is called from Behavior  bhvBigChillBully
#It has virtual address 0x802EB9D0 and rom address 0xA69D0
 bhv_bully_loop:
	addiu	$sp, $sp, -0x30
	sw	$ra, 0x24($sp)
	sw	$s0, 0x20($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lwc1	$f4, 0xa0($t6)
#This function is called from Behavior  bhvWdwSquareFloatingPlatform
#It has virtual address 0x802F6984 and rom address 0xB1984
 bhv_floating_platform_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	jal	 floating_platform_find_home_y
	nop	
	lui	$t6, 0x8036
#This function is called from Behavior  bhvArrowLift
#It has virtual address 0x802F6C0C and rom address 0xB1C0C
 bhv_arrow_lift_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$s0, 0x14c($t6)
#This function is called from Behavior  bhvInitializeChangingWaterLevel
#It has virtual address 0x802C2930 and rom address 0x7D930
 bhv_init_changing_water_level_loop:
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x14c($t6)
	bnez	$t7, 0x40
	nop	
	lui	$t8, 0x8036
#This function is called from Behavior  bhvWaterLevelDiamond
#It has virtual address 0x802C2A24 and rom address 0x7DA24
 bhv_water_level_diamond_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1184($t6)
	beqz	$t6, 0x2a8
#This function is called from Behavior  bhvRotatingPlatform
#It has virtual address 0x802AA830 and rom address 0x65830
 bhv_rotating_platform_loop:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x188($t6)
	sra	$t8, $t7, 0x18
#This function is called from Behavior  bhvWdwExpressElevator
#It has virtual address 0x802C08A8 and rom address 0x7B8A8
 bhv_wdw_express_elevator_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	mtc1	$zero, $f4
	nop	
#This function is called from Behavior  bhvInSunkenShip3
#It has virtual address 0x802C1CD4 and rom address 0x7CCD4
 bhv_ship_part_3_loop:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0xd0($t6)
	sh	$t7, 0x1e($sp)
#This function is called from Behavior  bhvUnagi
#It has virtual address 0x8030A1C0 and rom address 0xC51C0
 bhv_unagi_init:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	addiu	$at, $zero, 1
	lw	$t7, 0x144($t6)
#This function is called from Behavior  bhvUnagi
#It has virtual address 0x8030A93C and rom address 0xC593C
 bhv_unagi_loop:
	addiu	$sp, $sp, -0x30
	sw	$ra, 0x24($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lh	$t7, 0x1b2($t6)
	bnez	$t7, 0xb8
#This function is called from Behavior  bhvJetStream
#It has virtual address 0x802E82B0 and rom address 0xA32B0
 bhv_jet_stream_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lui	$at, 0x8034
	lwc1	$f6, -0x7b04($at)
#This function is called from Behavior  bhvCannonClosed
#It has virtual address 0x802E7C90 and rom address 0xA2C90
 bhv_cannon_closed_init:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	jal	 save_file_is_cannon_unlocked
	nop	
	addiu	$at, $zero, 1
	bne	$v0, $at, 0xa4
#This function is called from Behavior  bhvCannonClosed
#It has virtual address 0x802E7E54 and rom address 0xA2E54
 bhv_cannon_closed_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$s0, 0x14c($t6)
#This function is called from Behavior  bhvBubba
#It has virtual address 0x803145D4 and rom address 0xCF5D4
 bhv_bubba_loop:
	addiu	$sp, $sp, -0x40
	sw	$ra, 0x2c($sp)
	sw	$s0, 0x28($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	addiu	$at, $zero, -0x2001
#This function is called from Behavior  bhvThiHugeIslandTop
#It has virtual address 0x802A6CF4 and rom address 0x61CF4
 bhv_thi_huge_island_top_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lh	$t6, 0x1256($t6)
	andi	$t7, $t6, 1
	beqz	$t7, 0x50
#This function is called from Behavior  bhvThiBowlingBallSpawner
#It has virtual address 0x802EF0E8 and rom address 0xAA0E8
 bhv_thi_bowling_ball_spawner_loop:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	addiu	$at, $zero, 0x100
	lw	$t7, 0x154($t6)
#This function is called from Behavior  bhvThiTinyIslandTop
#It has virtual address 0x802A6D64 and rom address 0x61D64
 bhv_thi_tiny_island_top_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lh	$t6, 0x1256($t6)
	andi	$t7, $t6, 1
	bnez	$t7, 0x13c
#This function is called from Behavior  bhvWigglerHead
#It has virtual address 0x80302154 and rom address 0xBD154
 bhv_wiggler_update:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x14c($t6)
#This function is called from Behavior  bhvSwingPlatform
#It has virtual address 0x8031326C and rom address 0xCE26C
 bhv_swing_platform_init:
	lui	$at, 0x4600
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	mtc1	$at, $f4
	nop	
	swc1	$f4, 0xf4($t6)
#This function is called from Behavior  bhvSwingPlatform
#It has virtual address 0x80313294 and rom address 0xCE294
 bhv_swing_platform_update:
	addiu	$sp, $sp, -8
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0xd8($t6)
	sw	$t7, 4($sp)
	lui	$t8, 0x8036
#This function is called from Behavior  bhvAnimatesOnFloorSwitchPress
#It has virtual address 0x803094F8 and rom address 0xC44F8
 bhv_animates_on_floor_switch_press_init:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$a0, 0x1300
	jal	 cur_obj_nearest_object_with_behavior
	addiu	$a0, $a0, 0x1468
	lui	$t6, 0x8036
#This function is called from Behavior  bhvAnimatesOnFloorSwitchPress
#It has virtual address 0x80309530 and rom address 0xC4530
 bhv_animates_on_floor_switch_press_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x100($t6)
	beqz	$t7, 0x90
#This function is called from Behavior  bhvJumpingBox
#It has virtual address 0x802B288C and rom address 0x6D88C
 bhv_jumping_box_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$s0, 0x124($t6)
#This function is called from Behavior  bhvRrRotatingBridgePlatform
#It has virtual address 0x802AF3FC and rom address 0x6A3FC
 bhv_rr_rotating_bridge_platform_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0xc8($t6)
	addiu	$t8, $t7, -0x80
#This function is called from Behavior  bhvDonutPlatformSpawner
#It has virtual address 0x80313354 and rom address 0xCE354
 bhv_donut_platform_spawner_update:
	addiu	$sp, $sp, -0x40
	sw	$ra, 0x24($sp)
	addiu	$t6, $zero, 1
	sw	$t6, 0x38($sp)
	sw	$zero, 0x3c($sp)
	lui	$t7, 0x8036
#This function is called from Behavior  bhvHiddenAt120Stars
#It has virtual address 0x802F09F0 and rom address 0xAB9F0
 bhv_castle_cannon_grate_init:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$a0, 0x8033
	lh	$a0, -0x220c($a0)
	move	$a1, $zero
	addiu	$a2, $zero, 0x18
#This function is called from Behavior  bhvWaterfallSoundLoop
#It has virtual address 0x802F07F4 and rom address 0xAB7F4
 bhv_waterfall_sound_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$a0, 0x4001
	jal	 cur_obj_play_sound_1
	ori	$a0, $a0, 1
	b	0x1c
#This function is called from Behavior  bhvAmbientSounds
#It has virtual address 0x802F0950 and rom address 0xAB950
 bhv_ambient_sounds_init:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8034
	lw	$t6, -0x3430($t6)
	addiu	$at, $zero, 3
	lbu	$t7, ($t6)
#This function is called from Behavior  bhvMoatGrills
#It has virtual address 0x802BA5BC and rom address 0x755BC
 bhv_moat_grills_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	jal	 save_file_get_flags
	nop	
	andi	$t6, $v0, 0x200
	beqz	$t6, 0x2c
#This function is called from Behavior  bhvInvisibleObjectsUnderBridge
#It has virtual address 0x802BA25C and rom address 0x7525C
 bhv_invisible_objects_under_bridge_init:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	jal	 save_file_get_flags
	nop	
	andi	$t6, $v0, 0x200
	beqz	$t6, 0x3c
#This function is called from Behavior  bhvIntroScene
#It has virtual address 0x8029C254 and rom address 0x57254
 bhv_intro_scene_loop:
	addiu	$sp, $sp, -0x38
	sw	$ra, 0x2c($sp)
	lui	$t6, 0x8034
	lw	$t6, -0x3434($t6)
	beqz	$t6, 0x4f8
	nop	
#This function is called from Behavior  bhvHidden1upInPoleSpawner
#It has virtual address 0x802F4B78 and rom address 0xAFB78
 bhv_1up_hidden_in_pole_spawner_loop:
	addiu	$sp, $sp, -0x30
	sw	$ra, 0x24($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	addiu	$a3, $zero, 0x2bc
	lwc1	$f12, 0xa0($t6)
#This function is called from Behavior  bhvCameraLakitu
#It has virtual address 0x80303984 and rom address 0xBE984
 bhv_camera_lakitu_init:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x24($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x144($t6)
	beqz	$t7, 0x44
#This function is called from Behavior  bhvCameraLakitu
#It has virtual address 0x80303F64 and rom address 0xBEF64
 bhv_camera_lakitu_update:
	addiu	$sp, $sp, -0x38
	sw	$ra, 0x24($sp)
	sw	$s0, 0x20($sp)
	sdc1	$f20, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
#This function is called from Behavior  bhvYoshi
#It has virtual address 0x802F8E54 and rom address 0xB3E54
 bhv_yoshi_init:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$at, 0x4000
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	mtc1	$at, $f4
#This function is called from Behavior  bhvYoshi
#It has virtual address 0x802F965C and rom address 0xB465C
 bhv_yoshi_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x14c($t6)
	sltiu	$at, $t7, 0xb
#This function is called from Behavior  bhvSeesawPlatform
#It has virtual address 0x80305C14 and rom address 0xC0C14
 bhv_seesaw_platform_init:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lui	$a0, 0x8033
	lw	$t7, 0x144($t6)
#This function is called from Behavior  bhvSeesawPlatform
#It has virtual address 0x80305C90 and rom address 0xC0C90
 bhv_seesaw_platform_update:
	addiu	$sp, $sp, -0x30
	sw	$ra, 0x1c($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0xd0($t6)
	sw	$t7, 0x2c($sp)
#This function is called from Behavior  bhvFerrisWheelAxle
#It has virtual address 0x80305E2C and rom address 0xC0E2C
 bhv_ferris_wheel_axle_init:
	addiu	$sp, $sp, -0x30
	sw	$ra, 0x24($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lui	$a0, 0x8033
	lw	$t7, 0x144($t6)
#This function is called from Behavior  bhvBowserCourseRedCoinStar
#It has virtual address 0x802F328C and rom address 0xAE28C
 bhv_bowser_course_red_coin_star_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lui	$at, 0x8036
#This function is called from Behavior  bhvBitfsSinkingCagePlatform
#It has virtual address 0x802AECDC and rom address 0x69CDC
 bhv_bitfs_sinking_cage_platform_loop:
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x144($t6)
	beqz	$t7, 0x84
	nop	
	lui	$t8, 0x8036
#This function is called from Behavior  bhvSmallBully
#It has virtual address 0x802EB05C and rom address 0xA605C
 bhv_small_bully_init:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	jal	 cur_obj_init_animation
	move	$a0, $zero
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
#This function is called from Behavior  bhvActivatedBackAndForthPlatform
#It has virtual address 0x803097A4 and rom address 0xC47A4
 bhv_activated_back_and_forth_platform_init:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x188($t6)
	sra	$t8, $t7, 0x10
#This function is called from Behavior  bhvActivatedBackAndForthPlatform
#It has virtual address 0x803098C0 and rom address 0xC48C0
 bhv_activated_back_and_forth_platform_update:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1158($t6)
	lui	$t8, 0x8036
	lw	$t8, 0x1160($t8)
#This function is called from Behavior  bhvWhirlpool
#It has virtual address 0x802E7F70 and rom address 0xA2F70
 bhv_whirlpool_init:
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0xd0($t6)
	sw	$t7, 0xf4($t6)
	lui	$t8, 0x8036
	lw	$t8, 0x1160($t8)
#This function is called from Behavior  bhvWhirlpool
#It has virtual address 0x802E80DC and rom address 0xA30DC
 bhv_whirlpool_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lui	$at, 0x8034
	lwc1	$f6, -0x7b08($at)
#This function is called from Behavior  bhvOctagonalPlatformRotating
#It has virtual address 0x80309454 and rom address 0xC4454
 bhv_rotating_octagonal_plat_init:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lui	$a0, 0x8033
	lw	$t7, 0x188($t6)
#This function is called from Behavior  bhvOctagonalPlatformRotating
#It has virtual address 0x803094D0 and rom address 0xC44D0
 bhv_rotating_octagonal_plat_loop:
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0xd4($t6)
	lw	$t8, 0x118($t6)
	addu	$t9, $t7, $t8
	sw	$t9, 0xd4($t6)
#This function is called from Behavior  bhvSlidingPlatform2
#It has virtual address 0x803091E0 and rom address 0xC41E0
 bhv_sliding_plat_2_init:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x188($t6)
	sra	$t8, $t7, 0x10
#This function is called from Behavior  bhvSlidingPlatform2
#It has virtual address 0x80309354 and rom address 0xC4354
 bhv_sliding_plat_2_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x154($t6)
	slti	$at, $t7, 0xb
#This function is called from Behavior  bhvLllRotatingBlockWithFireBars
#It has virtual address 0x802BC618 and rom address 0x77618
 bhv_lll_rotating_block_fire_bars_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$a0, 0x8033
	jal	 cur_obj_call_action_function
	addiu	$a0, $a0, 0x830
	lui	$t6, 0x8036
#This function is called from Behavior  bhvLllSinkingSquarePlatforms
#It has virtual address 0x802BCE58 and rom address 0x77E58
 bhv_lll_sinking_square_platforms_loop:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$at, 0x3f00
	mtc1	$at, $f4
	nop	
	swc1	$f4, 0x1c($sp)
#This function is called from Behavior  bhvLllTiltingInvertedPyramid
#It has virtual address 0x802BCF40 and rom address 0x77F40
 bhv_platform_normals_init:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	addiu	$t7, $t6, 0x21c
	sw	$t7, 0x1c($sp)
#This function is called from Behavior  bhvLllTiltingInvertedPyramid
#It has virtual address 0x802BD058 and rom address 0x78058
 bhv_tilting_inverted_pyramid_loop:
	addiu	$sp, $sp, -0x80
	sw	$ra, 0x14($sp)
	sw	$zero, 0x3c($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	addiu	$t7, $t6, 0x21c
#This function is called from Behavior  bhvLllSinkingRectangularPlatform
#It has virtual address 0x802BCDA8 and rom address 0x77DA8
 bhv_lll_sinking_rectangular_platform_loop:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$at, 0x8033
	lwc1	$f4, 0x7c84($at)
	swc1	$f4, 0x1c($sp)
	addiu	$t6, $zero, 0x100
#This function is called from Behavior  bhvLllSinkingRockBlock
#It has virtual address 0x802BC22C and rom address 0x7722C
 bhv_lll_sinking_rock_block_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	addiu	$a2, $zero, 0x7c
	addiu	$a3, $zero, -0x6e
#This function is called from Behavior  bhvLllVolcanoFallingTrap
#It has virtual address 0x802F3A30 and rom address 0xAEA30
 bhv_volcano_trap_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$s0, 0x14c($t6)
#This function is called from Behavior  bhvVolcanoSoundLoop
#It has virtual address 0x802F0820 and rom address 0xAB820
 bhv_volcano_sound_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$a0, 0x4103
	jal	 cur_obj_play_sound_1
	ori	$a0, $a0, 1
	b	0x1c
#This function is called from Behavior  bhvSkeeter
#It has virtual address 0x80313110 and rom address 0xCE110
 bhv_skeeter_update:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t7, 0x8036
	lw	$t7, 0x1160($t7)
	lui	$t6, 0x5072
#This function is called from Behavior  bhvMantaRay
#It has virtual address 0x802F6E40 and rom address 0xB1E40
 bhv_manta_ray_init:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$a0, 0x8036
	lui	$a2, 0x1300
	addiu	$a2, $a2, 0x37e0
	lw	$a0, 0x1160($a0)
#This function is called from Behavior  bhvMantaRay
#It has virtual address 0x802F7264 and rom address 0xB2264
 bhv_manta_ray_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$s0, 0x14c($t6)
#This function is called from Behavior  bhvDDDPole
#It has virtual address 0x803136CC and rom address 0xCE6CC
 bhv_ddd_pole_init:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	jal	 save_file_get_flags
	nop	
	andi	$t6, $v0, 0xa0
	bnez	$t6, 0x30
#This function is called from Behavior  bhvDDDPole
#It has virtual address 0x80313754 and rom address 0xCE754
 bhv_ddd_pole_update:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x154($t6)
	slti	$at, $t7, 0x15
#This function is called from Behavior  bhvCoinFormation
#It has virtual address 0x802ABEE4 and rom address 0x66EE4
 bhv_coin_formation_init:
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x188($t6)
	sra	$t8, $t7, 8
	andi	$t9, $t8, 0xff
	sw	$t9, 0xf4($t6)
#This function is called from Behavior  bhvCoinFormation
#It has virtual address 0x802ABF0C and rom address 0x66F0C
 bhv_coin_formation_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$s0, 0x14c($t6)
#This function is called from Behavior  bhvBowserSubDoor
#It has virtual address 0x802C1A40 and rom address 0x7CA40
 bhv_bowsers_sub_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	jal	 save_file_get_flags
	nop	
	andi	$t6, $v0, 0xa0
	beqz	$t6, 0x28
#This function is called from Behavior  bhvGiantPole
#It has virtual address 0x802A6C74 and rom address 0x61C74
 bhv_giant_pole_loop:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x154($t6)
	bnez	$t7, 0x60
#This function is called from Behavior  bhvSmallBomp
#It has virtual address 0x802ED78C and rom address 0xA878C
 bhv_small_bomp_init:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0xd4($t6)
	addiu	$t8, $t7, -0x4000
#This function is called from Behavior  bhvSmallBomp
#It has virtual address 0x802ED7FC and rom address 0xA87FC
 bhv_small_bomp_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$s0, 0x14c($t6)
#This function is called from Behavior  bhvWfRotatingWoodenPlatform
#It has virtual address 0x802AA774 and rom address 0x65774
 bhv_wf_rotating_wooden_platform_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x14c($t6)
	bnez	$t7, 0x5c
#This function is called from Behavior  bhvTowerDoor
#It has virtual address 0x802AA700 and rom address 0x65700
 bhv_tower_door_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x154($t6)
	bnez	$t7, 0x30
#This function is called from Behavior  bhvHeaveHo
#It has virtual address 0x802B2278 and rom address 0x6D278
 bhv_heave_ho_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$at, 0x4000
	mtc1	$at, $f12
	jal	 cur_obj_scale
#This function is called from Behavior  Bhv_Custom_0x13000644
#It has virtual address 0x802AA1B8 and rom address 0x651B8
 bhv_wf_breakable_wall_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8034
	addiu	$t6, $t6, -0x4e90
	lw	$t7, 0xc($t6)
	lui	$at, 0x88
#This function is called from Behavior  bhvSmallWhomp
#It has virtual address 0x802C79D8 and rom address 0x829D8
 bhv_whomp_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	jal	 cur_obj_update_floor_and_walls
	nop	
	lui	$a0, 0x8033
	jal	 cur_obj_call_action_function
#This function is called from Behavior  bhvWfSlidingPlatform
#It has virtual address 0x802EDDFC and rom address 0xA8DFC
 bhv_wf_sliding_platform_init:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0xd4($t6)
#This function is called from Behavior  bhvWfSlidingPlatform
#It has virtual address 0x802EDF28 and rom address 0xA8F28
 bhv_wf_sliding_platform_loop:
	addiu	$sp, $sp, -8
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$a0, 0x14c($t6)
	beqz	$a0, 0x38
	nop	
#This function is called from Behavior  bhvWfTumblingBridge
#It has virtual address 0x802AD890 and rom address 0x68890
 bhv_tumbling_bridge_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$a0, 0x8033
	jal	 cur_obj_call_action_function
	addiu	$a0, $a0, 0x2dc
	b	0x1c
#This function is called from Behavior  bhvCapSwitch
#It has virtual address 0x802A7170 and rom address 0x62170
 bhv_cap_switch_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$a0, 0x8033
	jal	 cur_obj_call_action_function
	addiu	$a0, $a0, 0xac
	b	0x1c
#This function is called from Behavior  bhvTiltingBowserLavaPlatform
#It has virtual address 0x802A2BC4 and rom address 0x5DBC4
 cur_obj_rotate_face_angle_using_vel:
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0xd0($t6)
	lw	$t8, 0x114($t6)
	addu	$t9, $t7, $t8
	sw	$t9, 0xd0($t6)
#This function is called from Behavior  bhvBowserBomb
#It has virtual address 0x802ECC14 and rom address 0xA7C14
 bhv_bowser_bomb_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$a0, 0x8036
	lui	$a1, 0x8036
	lw	$a1, 0x1158($a1)
	jal	 obj_check_if_collided_with_object
#This function is called from Behavior  bhvFallingBowserPlatform
#It has virtual address 0x802B8384 and rom address 0x73384
 bhv_falling_bowser_platform_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$a0, 0x8033
	jal	 cur_obj_call_action_function
	addiu	$a0, $a0, 0x67c
	b	0x1c
#This function is called from Behavior  bhvMontyMole
#It has virtual address 0x803044C0 and rom address 0xBF4C0
 bhv_monty_mole_init:
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	sw	$zero, 0xf4($t6)
	jr	$ra
	nop	
#This function is called from Behavior  bhvMontyMole
#It has virtual address 0x80304BA8 and rom address 0xBFBA8
 bhv_monty_mole_update:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x14($sp)
	lui	$t7, 0x8036
	lw	$t7, 0x1160($t7)
	lui	$t6, 0x5024
#This function is called from Behavior  Bhv_Custom_0x13001cb4
#It has virtual address 0x802BBB98 and rom address 0x76B98
 bhv_ukiki_init:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	addiu	$at, $zero, 1
#This function is called from Behavior  Bhv_Custom_0x13001cb4
#It has virtual address 0x802BBC0C and rom address 0x76C0C
 bhv_ukiki_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
#This function is called from Behavior  bhvTtmRollingLog
#It has virtual address 0x802F336C and rom address 0xAE36C
 bhv_ttm_rolling_log_init:
	lui	$at, 0x8034
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lwc1	$f4, -0x77e8($at)
	swc1	$f4, 0xf8($t6)
#This function is called from Behavior  bhvTtmRollingLog
#It has virtual address 0x802F36A4 and rom address 0xAE6A4
 bhv_rolling_log_loop:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lwc1	$f4, 0xa0($t6)
