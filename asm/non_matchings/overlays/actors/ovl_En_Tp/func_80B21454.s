glabel func_80B21454
/* 00674 80B21454 27BDFFE8 */  addiu   $sp, $sp, 0xFFE8           ## $sp = FFFFFFE8
/* 00678 80B21458 AFBF0014 */  sw      $ra, 0x0014($sp)           
/* 0067C 80B2145C 848F001C */  lh      $t7, 0x001C($a0)           ## 0000001C
/* 00680 80B21460 240E0002 */  addiu   $t6, $zero, 0x0002         ## $t6 = 00000002
/* 00684 80B21464 A48E015A */  sh      $t6, 0x015A($a0)           ## 0000015A
/* 00688 80B21468 05E1000F */  bgez    $t7, .L80B214A8            
/* 0068C 80B2146C 2418000D */  addiu   $t8, $zero, 0x000D         ## $t8 = 0000000D
/* 00690 80B21470 8C82011C */  lw      $v0, 0x011C($a0)           ## 0000011C
/* 00694 80B21474 2403000B */  addiu   $v1, $zero, 0x000B         ## $v1 = 0000000B
/* 00698 80B21478 24053866 */  addiu   $a1, $zero, 0x3866         ## $a1 = 00003866
/* 0069C 80B2147C 50400007 */  beql    $v0, $zero, .L80B2149C     
/* 006A0 80B21480 A498015A */  sh      $t8, 0x015A($a0)           ## 0000015A
/* 006A4 80B21484 A443001C */  sh      $v1, 0x001C($v0)           ## 0000001C
.L80B21488:
/* 006A8 80B21488 A04000AF */  sb      $zero, 0x00AF($v0)         ## 000000AF
/* 006AC 80B2148C 8C42011C */  lw      $v0, 0x011C($v0)           ## 0000011C
/* 006B0 80B21490 5440FFFD */  bnel    $v0, $zero, .L80B21488     
/* 006B4 80B21494 A443001C */  sh      $v1, 0x001C($v0)           ## 0000001C
/* 006B8 80B21498 A498015A */  sh      $t8, 0x015A($a0)           ## 0000015A
.L80B2149C:
/* 006BC 80B2149C 0C00BE0A */  jal     Audio_PlayActorSound2
              
/* 006C0 80B214A0 AFA40018 */  sw      $a0, 0x0018($sp)           
/* 006C4 80B214A4 8FA40018 */  lw      $a0, 0x0018($sp)           
.L80B214A8:
/* 006C8 80B214A8 24190001 */  addiu   $t9, $zero, 0x0001         ## $t9 = 00000001
/* 006CC 80B214AC 3C0580B2 */  lui     $a1, %hi(func_80B214CC)    ## $a1 = 80B20000
/* 006D0 80B214B0 AC99014C */  sw      $t9, 0x014C($a0)           ## 0000014C
/* 006D4 80B214B4 0C2C8378 */  jal     func_80B20DE0              
/* 006D8 80B214B8 24A514CC */  addiu   $a1, $a1, %lo(func_80B214CC) ## $a1 = 80B214CC
/* 006DC 80B214BC 8FBF0014 */  lw      $ra, 0x0014($sp)           
/* 006E0 80B214C0 27BD0018 */  addiu   $sp, $sp, 0x0018           ## $sp = 00000000
/* 006E4 80B214C4 03E00008 */  jr      $ra                        
/* 006E8 80B214C8 00000000 */  nop