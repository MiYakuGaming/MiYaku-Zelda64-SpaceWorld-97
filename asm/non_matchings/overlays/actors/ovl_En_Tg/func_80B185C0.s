glabel func_80B185C0
/* 00260 80B185C0 AFA50004 */  sw      $a1, 0x0004($sp)           
/* 00264 80B185C4 848E01E0 */  lh      $t6, 0x01E0($a0)           ## 000001E0
/* 00268 80B185C8 15C00004 */  bne     $t6, $zero, .L80B185DC     
/* 0026C 80B185CC 00000000 */  nop
/* 00270 80B185D0 848F00B6 */  lh      $t7, 0x00B6($a0)           ## 000000B6
/* 00274 80B185D4 25F80800 */  addiu   $t8, $t7, 0x0800           ## $t8 = 00000800
/* 00278 80B185D8 A49800B6 */  sh      $t8, 0x00B6($a0)           ## 000000B6
.L80B185DC:
/* 0027C 80B185DC 03E00008 */  jr      $ra                        
/* 00280 80B185E0 00000000 */  nop