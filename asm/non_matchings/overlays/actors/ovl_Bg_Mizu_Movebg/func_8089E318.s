.late_rodata
glabel jtbl_8089EC60
.word L8089E36C
.word L8089E3C0
.word L8089E36C
.word L8089E414
.word L8089E4D8
.word L8089E4D8
.word L8089E4D8
glabel D_8089EC7C
 .word 0x44318000
glabel D_8089EC80
 .word 0x42E66667
glabel D_8089EC84
    .float 9.58738019108e-05

.text
glabel func_8089E318
/* 006E8 8089E318 27BDFFC0 */  addiu   $sp, $sp, 0xFFC0           ## $sp = FFFFFFC0
/* 006EC 8089E31C AFBF001C */  sw      $ra, 0x001C($sp)           
/* 006F0 8089E320 AFB00018 */  sw      $s0, 0x0018($sp)           
/* 006F4 8089E324 8CAE07C0 */  lw      $t6, 0x07C0($a1)           ## 000007C0
/* 006F8 8089E328 00808025 */  or      $s0, $a0, $zero            ## $s0 = 00000000
/* 006FC 8089E32C 8DC30028 */  lw      $v1, 0x0028($t6)           ## 00000028
/* 00700 8089E330 AFA50044 */  sw      $a1, 0x0044($sp)           
/* 00704 8089E334 0C227866 */  jal     func_8089E198              
/* 00708 8089E338 AFA3003C */  sw      $v1, 0x003C($sp)           
/* 0070C 8089E33C 9606001C */  lhu     $a2, 0x001C($s0)           ## 0000001C
/* 00710 8089E340 8FA3003C */  lw      $v1, 0x003C($sp)           
/* 00714 8089E344 00061303 */  sra     $v0, $a2, 12               
/* 00718 8089E348 3042000F */  andi    $v0, $v0, 0x000F           ## $v0 = 00000000
/* 0071C 8089E34C 2C410007 */  sltiu   $at, $v0, 0x0007           
/* 00720 8089E350 1020008A */  beq     $at, $zero, .L8089E57C     
/* 00724 8089E354 00027880 */  sll     $t7, $v0,  2               
/* 00728 8089E358 3C01808A */  lui     $at, %hi(jtbl_8089EC60)       ## $at = 808A0000
/* 0072C 8089E35C 002F0821 */  addu    $at, $at, $t7              
/* 00730 8089E360 8C2FEC60 */  lw      $t7, %lo(jtbl_8089EC60)($at)  
/* 00734 8089E364 01E00008 */  jr      $t7                        
/* 00738 8089E368 00000000 */  nop
glabel L8089E36C
/* 0073C 8089E36C 84780022 */  lh      $t8, 0x0022($v1)           ## 00000022
/* 00740 8089E370 3C014170 */  lui     $at, 0x4170                ## $at = 41700000
/* 00744 8089E374 44814000 */  mtc1    $at, $f8                   ## $f8 = 15.00
/* 00748 8089E378 44982000 */  mtc1    $t8, $f4                   ## $f4 = 0.00
/* 0074C 8089E37C 3C01442F */  lui     $at, 0x442F                ## $at = 442F0000
/* 00750 8089E380 44818000 */  mtc1    $at, $f16                  ## $f16 = 700.00
/* 00754 8089E384 468021A0 */  cvt.s.w $f6, $f4                   
/* 00758 8089E388 C60A0168 */  lwc1    $f10, 0x0168($s0)          ## 00000168
/* 0075C 8089E38C 46105081 */  sub.s   $f2, $f10, $f16            
/* 00760 8089E390 46083000 */  add.s   $f0, $f6, $f8              
/* 00764 8089E394 4602003C */  c.lt.s  $f0, $f2                   
/* 00768 8089E398 00000000 */  nop
/* 0076C 8089E39C 45020004 */  bc1fl   .L8089E3B0                 
/* 00770 8089E3A0 E6000028 */  swc1    $f0, 0x0028($s0)           ## 00000028
/* 00774 8089E3A4 10000002 */  beq     $zero, $zero, .L8089E3B0   
/* 00778 8089E3A8 E6020028 */  swc1    $f2, 0x0028($s0)           ## 00000028
/* 0077C 8089E3AC E6000028 */  swc1    $f0, 0x0028($s0)           ## 00000028
.L8089E3B0:
/* 00780 8089E3B0 9602001C */  lhu     $v0, 0x001C($s0)           ## 0000001C
/* 00784 8089E3B4 00021303 */  sra     $v0, $v0, 12               
/* 00788 8089E3B8 10000070 */  beq     $zero, $zero, .L8089E57C   
/* 0078C 8089E3BC 3042000F */  andi    $v0, $v0, 0x000F           ## $v0 = 00000000
glabel L8089E3C0
/* 00790 8089E3C0 84790022 */  lh      $t9, 0x0022($v1)           ## 00000022
/* 00794 8089E3C4 3C014170 */  lui     $at, 0x4170                ## $at = 41700000
/* 00798 8089E3C8 44813000 */  mtc1    $at, $f6                   ## $f6 = 15.00
/* 0079C 8089E3CC 44999000 */  mtc1    $t9, $f18                  ## $f18 = 0.00
/* 007A0 8089E3D0 3C01808A */  lui     $at, %hi(D_8089EC7C)       ## $at = 808A0000
/* 007A4 8089E3D4 C42AEC7C */  lwc1    $f10, %lo(D_8089EC7C)($at) 
/* 007A8 8089E3D8 46809120 */  cvt.s.w $f4, $f18                  
/* 007AC 8089E3DC C6080168 */  lwc1    $f8, 0x0168($s0)           ## 00000168
/* 007B0 8089E3E0 460A4081 */  sub.s   $f2, $f8, $f10             
/* 007B4 8089E3E4 46062000 */  add.s   $f0, $f4, $f6              
/* 007B8 8089E3E8 4602003C */  c.lt.s  $f0, $f2                   
/* 007BC 8089E3EC 00000000 */  nop
/* 007C0 8089E3F0 45020004 */  bc1fl   .L8089E404                 
/* 007C4 8089E3F4 E6000028 */  swc1    $f0, 0x0028($s0)           ## 00000028
/* 007C8 8089E3F8 10000002 */  beq     $zero, $zero, .L8089E404   
/* 007CC 8089E3FC E6020028 */  swc1    $f2, 0x0028($s0)           ## 00000028
/* 007D0 8089E400 E6000028 */  swc1    $f0, 0x0028($s0)           ## 00000028
.L8089E404:
/* 007D4 8089E404 9602001C */  lhu     $v0, 0x001C($s0)           ## 0000001C
/* 007D8 8089E408 00021303 */  sra     $v0, $v0, 12               
/* 007DC 8089E40C 1000005B */  beq     $zero, $zero, .L8089E57C   
/* 007E0 8089E410 3042000F */  andi    $v0, $v0, 0x000F           ## $v0 = 00000000
glabel L8089E414
/* 007E4 8089E414 0C22770C */  jal     func_8089DC30              
/* 007E8 8089E418 8FA40044 */  lw      $a0, 0x0044($sp)           
/* 007EC 8089E41C 00024080 */  sll     $t0, $v0,  2               
/* 007F0 8089E420 3C01808A */  lui     $at, %hi(D_8089EB40)       ## $at = 808A0000
/* 007F4 8089E424 00280821 */  addu    $at, $at, $t0              
/* 007F8 8089E428 C430EB40 */  lwc1    $f16, %lo(D_8089EB40)($at) 
/* 007FC 8089E42C C6120168 */  lwc1    $f18, 0x0168($s0)          ## 00000168
/* 00800 8089E430 26040028 */  addiu   $a0, $s0, 0x0028           ## $a0 = 00000028
/* 00804 8089E434 3C063F80 */  lui     $a2, 0x3F80                ## $a2 = 3F800000
/* 00808 8089E438 46128000 */  add.s   $f0, $f16, $f18            
/* 0080C 8089E43C 44050000 */  mfc1    $a1, $f0                   
/* 00810 8089E440 0C01DE80 */  jal     Math_StepToF
              
/* 00814 8089E444 00000000 */  nop
/* 00818 8089E448 1440001F */  bne     $v0, $zero, .L8089E4C8     
/* 0081C 8089E44C 3C03808A */  lui     $v1, %hi(D_8089EE40)       ## $v1 = 808A0000
/* 00820 8089E450 2463EE40 */  addiu   $v1, $v1, %lo(D_8089EE40)  ## $v1 = 8089EE40
/* 00824 8089E454 90620000 */  lbu     $v0, 0x0000($v1)           ## 8089EE40
/* 00828 8089E458 30490002 */  andi    $t1, $v0, 0x0002           ## $t1 = 00000000
/* 0082C 8089E45C 5520000C */  bnel    $t1, $zero, .L8089E490     
/* 00830 8089E460 9218017C */  lbu     $t8, 0x017C($s0)           ## 0000017C
/* 00834 8089E464 960A001C */  lhu     $t2, 0x001C($s0)           ## 0000001C
/* 00838 8089E468 344D0002 */  ori     $t5, $v0, 0x0002           ## $t5 = 00000002
/* 0083C 8089E46C 000A5903 */  sra     $t3, $t2,  4               
/* 00840 8089E470 316C000F */  andi    $t4, $t3, 0x000F           ## $t4 = 00000000
/* 00844 8089E474 51800006 */  beql    $t4, $zero, .L8089E490     
/* 00848 8089E478 9218017C */  lbu     $t8, 0x017C($s0)           ## 0000017C
/* 0084C 8089E47C A06D0000 */  sb      $t5, 0x0000($v1)           ## 8089EE40
/* 00850 8089E480 920E017C */  lbu     $t6, 0x017C($s0)           ## 0000017C
/* 00854 8089E484 35CF0002 */  ori     $t7, $t6, 0x0002           ## $t7 = 00000002
/* 00858 8089E488 A20F017C */  sb      $t7, 0x017C($s0)           ## 0000017C
/* 0085C 8089E48C 9218017C */  lbu     $t8, 0x017C($s0)           ## 0000017C
.L8089E490:
/* 00860 8089E490 33190002 */  andi    $t9, $t8, 0x0002           ## $t9 = 00000000
/* 00864 8089E494 5320000D */  beql    $t9, $zero, .L8089E4CC     
/* 00868 8089E498 9602001C */  lhu     $v0, 0x001C($s0)           ## 0000001C
/* 0086C 8089E49C 82080003 */  lb      $t0, 0x0003($s0)           ## 00000003
/* 00870 8089E4A0 24052024 */  addiu   $a1, $zero, 0x2024         ## $a1 = 00002024
/* 00874 8089E4A4 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 00878 8089E4A8 15000005 */  bne     $t0, $zero, .L8089E4C0     
/* 0087C 8089E4AC 00000000 */  nop
/* 00880 8089E4B0 0C00BE5D */  jal     func_8002F974              
/* 00884 8089E4B4 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 00888 8089E4B8 10000004 */  beq     $zero, $zero, .L8089E4CC   
/* 0088C 8089E4BC 9602001C */  lhu     $v0, 0x001C($s0)           ## 0000001C
.L8089E4C0:
/* 00890 8089E4C0 0C00BE52 */  jal     func_8002F948              
/* 00894 8089E4C4 24052024 */  addiu   $a1, $zero, 0x2024         ## $a1 = 00002024
.L8089E4C8:
/* 00898 8089E4C8 9602001C */  lhu     $v0, 0x001C($s0)           ## 0000001C
.L8089E4CC:
/* 0089C 8089E4CC 00021303 */  sra     $v0, $v0, 12               
/* 008A0 8089E4D0 1000002A */  beq     $zero, $zero, .L8089E57C   
/* 008A4 8089E4D4 3042000F */  andi    $v0, $v0, 0x000F           ## $v0 = 00000000
glabel L8089E4D8
/* 008A8 8089E4D8 8FA40044 */  lw      $a0, 0x0044($sp)           
/* 008AC 8089E4DC 0C00B2D0 */  jal     Flags_GetSwitch
              
/* 008B0 8089E4E0 30C5003F */  andi    $a1, $a2, 0x003F           ## $a1 = 00000000
/* 008B4 8089E4E4 10400006 */  beq     $v0, $zero, .L8089E500     
/* 008B8 8089E4E8 26040028 */  addiu   $a0, $s0, 0x0028           ## $a0 = 00000028
/* 008BC 8089E4EC 3C01808A */  lui     $at, %hi(D_8089EC80)       ## $at = 808A0000
/* 008C0 8089E4F0 C426EC80 */  lwc1    $f6, %lo(D_8089EC80)($at)  
/* 008C4 8089E4F4 C6040168 */  lwc1    $f4, 0x0168($s0)           ## 00000168
/* 008C8 8089E4F8 10000002 */  beq     $zero, $zero, .L8089E504   
/* 008CC 8089E4FC 46062000 */  add.s   $f0, $f4, $f6              
.L8089E500:
/* 008D0 8089E500 C6000168 */  lwc1    $f0, 0x0168($s0)           ## 00000168
.L8089E504:
/* 008D4 8089E504 44050000 */  mfc1    $a1, $f0                   
/* 008D8 8089E508 0C01DE80 */  jal     Math_StepToF
              
/* 008DC 8089E50C 3C063F80 */  lui     $a2, 0x3F80                ## $a2 = 3F800000
/* 008E0 8089E510 14400017 */  bne     $v0, $zero, .L8089E570     
/* 008E4 8089E514 3C03808A */  lui     $v1, %hi(D_8089EE40)       ## $v1 = 808A0000
/* 008E8 8089E518 2463EE40 */  addiu   $v1, $v1, %lo(D_8089EE40)  ## $v1 = 8089EE40
/* 008EC 8089E51C 90620000 */  lbu     $v0, 0x0000($v1)           ## 8089EE40
/* 008F0 8089E520 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 008F4 8089E524 30490002 */  andi    $t1, $v0, 0x0002           ## $t1 = 00000000
/* 008F8 8089E528 5520000C */  bnel    $t1, $zero, .L8089E55C     
/* 008FC 8089E52C 9218017C */  lbu     $t8, 0x017C($s0)           ## 0000017C
/* 00900 8089E530 960A001C */  lhu     $t2, 0x001C($s0)           ## 0000001C
/* 00904 8089E534 344D0002 */  ori     $t5, $v0, 0x0002           ## $t5 = 00000002
/* 00908 8089E538 000A5903 */  sra     $t3, $t2,  4               
/* 0090C 8089E53C 316C000F */  andi    $t4, $t3, 0x000F           ## $t4 = 00000000
/* 00910 8089E540 51800006 */  beql    $t4, $zero, .L8089E55C     
/* 00914 8089E544 9218017C */  lbu     $t8, 0x017C($s0)           ## 0000017C
/* 00918 8089E548 A06D0000 */  sb      $t5, 0x0000($v1)           ## 8089EE40
/* 0091C 8089E54C 920E017C */  lbu     $t6, 0x017C($s0)           ## 0000017C
/* 00920 8089E550 35CF0002 */  ori     $t7, $t6, 0x0002           ## $t7 = 00000002
/* 00924 8089E554 A20F017C */  sb      $t7, 0x017C($s0)           ## 0000017C
/* 00928 8089E558 9218017C */  lbu     $t8, 0x017C($s0)           ## 0000017C
.L8089E55C:
/* 0092C 8089E55C 33190002 */  andi    $t9, $t8, 0x0002           ## $t9 = 00000000
/* 00930 8089E560 53200004 */  beql    $t9, $zero, .L8089E574     
/* 00934 8089E564 9602001C */  lhu     $v0, 0x001C($s0)           ## 0000001C
/* 00938 8089E568 0C00BE52 */  jal     func_8002F948              
/* 0093C 8089E56C 24052024 */  addiu   $a1, $zero, 0x2024         ## $a1 = 00002024
.L8089E570:
/* 00940 8089E570 9602001C */  lhu     $v0, 0x001C($s0)           ## 0000001C
.L8089E574:
/* 00944 8089E574 00021303 */  sra     $v0, $v0, 12               
/* 00948 8089E578 3042000F */  andi    $v0, $v0, 0x000F           ## $v0 = 00000000
.L8089E57C:
/* 0094C 8089E57C 24010003 */  addiu   $at, $zero, 0x0003         ## $at = 00000003
/* 00950 8089E580 10410007 */  beq     $v0, $at, .L8089E5A0       
/* 00954 8089E584 8FA90044 */  lw      $t1, 0x0044($sp)           
/* 00958 8089E588 24010004 */  addiu   $at, $zero, 0x0004         ## $at = 00000004
/* 0095C 8089E58C 10410004 */  beq     $v0, $at, .L8089E5A0       
/* 00960 8089E590 24010005 */  addiu   $at, $zero, 0x0005         ## $at = 00000005
/* 00964 8089E594 10410002 */  beq     $v0, $at, .L8089E5A0       
/* 00968 8089E598 24010006 */  addiu   $at, $zero, 0x0006         ## $at = 00000006
/* 0096C 8089E59C 14410027 */  bne     $v0, $at, .L8089E63C       
.L8089E5A0:
/* 00970 8089E5A0 3C0A0001 */  lui     $t2, 0x0001                ## $t2 = 00010000
/* 00974 8089E5A4 01495021 */  addu    $t2, $t2, $t1              
/* 00978 8089E5A8 814A1CBC */  lb      $t2, 0x1CBC($t2)           ## 00011CBC
/* 0097C 8089E5AC 82080003 */  lb      $t0, 0x0003($s0)           ## 00000003
/* 00980 8089E5B0 550A0023 */  bnel    $t0, $t2, .L8089E640       
/* 00984 8089E5B4 8FBF001C */  lw      $ra, 0x001C($sp)           
/* 00988 8089E5B8 860B0032 */  lh      $t3, 0x0032($s0)           ## 00000032
/* 0098C 8089E5BC 3C01808A */  lui     $at, %hi(D_8089EC84)       ## $at = 808A0000
/* 00990 8089E5C0 C430EC84 */  lwc1    $f16, %lo(D_8089EC84)($at) 
/* 00994 8089E5C4 448B4000 */  mtc1    $t3, $f8                   ## $f8 = 0.00
/* 00998 8089E5C8 00002825 */  or      $a1, $zero, $zero          ## $a1 = 00000000
/* 0099C 8089E5CC 468042A0 */  cvt.s.w $f10, $f8                  
/* 009A0 8089E5D0 46105302 */  mul.s   $f12, $f10, $f16           
/* 009A4 8089E5D4 0C034348 */  jal     Matrix_RotateY              
/* 009A8 8089E5D8 00000000 */  nop
/* 009AC 8089E5DC 3C04808A */  lui     $a0, %hi(D_8089EBAC)       ## $a0 = 808A0000
/* 009B0 8089E5E0 2484EBAC */  addiu   $a0, $a0, %lo(D_8089EBAC)  ## $a0 = 8089EBAC
/* 009B4 8089E5E4 0C0346BD */  jal     Matrix_MultVec3f              
/* 009B8 8089E5E8 27A50028 */  addiu   $a1, $sp, 0x0028           ## $a1 = FFFFFFE8
/* 009BC 8089E5EC C6120024 */  lwc1    $f18, 0x0024($s0)          ## 00000024
/* 009C0 8089E5F0 C7A40028 */  lwc1    $f4, 0x0028($sp)           
/* 009C4 8089E5F4 8E0C011C */  lw      $t4, 0x011C($s0)           ## 0000011C
/* 009C8 8089E5F8 2401FFFE */  addiu   $at, $zero, 0xFFFE         ## $at = FFFFFFFE
/* 009CC 8089E5FC 46049180 */  add.s   $f6, $f18, $f4             
/* 009D0 8089E600 E5860024 */  swc1    $f6, 0x0024($t4)           ## 00000024
/* 009D4 8089E604 C7AA002C */  lwc1    $f10, 0x002C($sp)          
/* 009D8 8089E608 C6080028 */  lwc1    $f8, 0x0028($s0)           ## 00000028
/* 009DC 8089E60C 8E0D011C */  lw      $t5, 0x011C($s0)           ## 0000011C
/* 009E0 8089E610 460A4400 */  add.s   $f16, $f8, $f10            
/* 009E4 8089E614 E5B00028 */  swc1    $f16, 0x0028($t5)          ## 00000028
/* 009E8 8089E618 C7A40030 */  lwc1    $f4, 0x0030($sp)           
/* 009EC 8089E61C C612002C */  lwc1    $f18, 0x002C($s0)          ## 0000002C
/* 009F0 8089E620 8E0E011C */  lw      $t6, 0x011C($s0)           ## 0000011C
/* 009F4 8089E624 46049180 */  add.s   $f6, $f18, $f4             
/* 009F8 8089E628 E5C6002C */  swc1    $f6, 0x002C($t6)           ## 0000002C
/* 009FC 8089E62C 8E02011C */  lw      $v0, 0x011C($s0)           ## 0000011C
/* 00A00 8089E630 8C4F0004 */  lw      $t7, 0x0004($v0)           ## 00000004
/* 00A04 8089E634 01E1C024 */  and     $t8, $t7, $at              
/* 00A08 8089E638 AC580004 */  sw      $t8, 0x0004($v0)           ## 00000004
.L8089E63C:
/* 00A0C 8089E63C 8FBF001C */  lw      $ra, 0x001C($sp)           
.L8089E640:
/* 00A10 8089E640 8FB00018 */  lw      $s0, 0x0018($sp)           
/* 00A14 8089E644 27BD0040 */  addiu   $sp, $sp, 0x0040           ## $sp = 00000000
/* 00A18 8089E648 03E00008 */  jr      $ra                        
/* 00A1C 8089E64C 00000000 */  nop