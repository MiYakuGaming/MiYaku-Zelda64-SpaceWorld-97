glabel func_80A97E18
/* 01068 80A97E18 27BDFFE0 */  addiu   $sp, $sp, 0xFFE0           ## $sp = FFFFFFE0
/* 0106C 80A97E1C AFB00018 */  sw      $s0, 0x0018($sp)           
/* 01070 80A97E20 00808025 */  or      $s0, $a0, $zero            ## $s0 = 00000000
/* 01074 80A97E24 AFBF001C */  sw      $ra, 0x001C($sp)           
/* 01078 80A97E28 AFA50024 */  sw      $a1, 0x0024($sp)           
/* 0107C 80A97E2C 00A02025 */  or      $a0, $a1, $zero            ## $a0 = 00000000
/* 01080 80A97E30 260502E4 */  addiu   $a1, $s0, 0x02E4           ## $a1 = 000002E4
/* 01084 80A97E34 26060304 */  addiu   $a2, $s0, 0x0304           ## $a2 = 00000304
/* 01088 80A97E38 0C00D3D5 */  jal     func_80034F54              
/* 0108C 80A97E3C 24070010 */  addiu   $a3, $zero, 0x0010         ## $a3 = 00000010
/* 01090 80A97E40 0C2A5F40 */  jal     func_80A97D00              
/* 01094 80A97E44 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 01098 80A97E48 24010001 */  addiu   $at, $zero, 0x0001         ## $at = 00000001
/* 0109C 80A97E4C 14410003 */  bne     $v0, $at, .L80A97E5C       
/* 010A0 80A97E50 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 010A4 80A97E54 10000002 */  beq     $zero, $zero, .L80A97E60   
/* 010A8 80A97E58 24070002 */  addiu   $a3, $zero, 0x0002         ## $a3 = 00000002
.L80A97E5C:
/* 010AC 80A97E5C 24070001 */  addiu   $a3, $zero, 0x0001         ## $a3 = 00000001
.L80A97E60:
/* 010B0 80A97E60 860E01E8 */  lh      $t6, 0x01E8($s0)           ## 000001E8
/* 010B4 80A97E64 260501E8 */  addiu   $a1, $s0, 0x01E8           ## $a1 = 000001E8
/* 010B8 80A97E68 51C00004 */  beql    $t6, $zero, .L80A97E7C     
/* 010BC 80A97E6C C604021C */  lwc1    $f4, 0x021C($s0)           ## 0000021C
/* 010C0 80A97E70 10000008 */  beq     $zero, $zero, .L80A97E94   
/* 010C4 80A97E74 24070004 */  addiu   $a3, $zero, 0x0004         ## $a3 = 00000004
/* 010C8 80A97E78 C604021C */  lwc1    $f4, 0x021C($s0)           ## 0000021C
.L80A97E7C:
/* 010CC 80A97E7C C6060090 */  lwc1    $f6, 0x0090($s0)           ## 00000090
/* 010D0 80A97E80 4606203C */  c.lt.s  $f4, $f6                   
/* 010D4 80A97E84 00000000 */  nop
/* 010D8 80A97E88 45000002 */  bc1f    .L80A97E94                 
/* 010DC 80A97E8C 00000000 */  nop
/* 010E0 80A97E90 24070001 */  addiu   $a3, $zero, 0x0001         ## $a3 = 00000001
.L80A97E94:
/* 010E4 80A97E94 0C00D285 */  jal     Npc_TurnTowardsFocus              
/* 010E8 80A97E98 24060002 */  addiu   $a2, $zero, 0x0002         ## $a2 = 00000002
/* 010EC 80A97E9C 8FBF001C */  lw      $ra, 0x001C($sp)           
/* 010F0 80A97EA0 8FB00018 */  lw      $s0, 0x0018($sp)           
/* 010F4 80A97EA4 27BD0020 */  addiu   $sp, $sp, 0x0020           ## $sp = 00000000
/* 010F8 80A97EA8 03E00008 */  jr      $ra                        
/* 010FC 80A97EAC 24020001 */  addiu   $v0, $zero, 0x0001         ## $v0 = 00000001