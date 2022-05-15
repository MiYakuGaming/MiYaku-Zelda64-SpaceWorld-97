.include "macro.inc"

 # assembler directives
 .set noat      # allow manual use of $at
 .set noreorder # don't insert nops after branches
 .set gp=64     # allow use of 64-bit general purpose registers

.section .data

.balign 16

glabel En_Ossan_InitVars
 .word 0x003D0400, 0x00000019, 0x00010000, 0x000002D8
.word EnOssan_Init
.word EnOssan_Destroy
.word EnOssan_Update
.word 0x00000000, 0x0A000039, 0x01000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000100, 0x001E0050, 0x00000000, 0x00000000
glabel D_80AC88EC
 .word 0x000A001E, 0x00140032
glabel D_80AC88F4
 .word 0xEAACEAAC, 0xEAACEAAC, 0x15541554, 0x15541554, 0x001E001F, 0x00200021, 0x00220023, 0x00240025
glabel D_80AC8914
 .word D_80AC8EF0
.word D_80AC8F00
.word D_80AC8F10
.word D_80AC8F20
.word D_80AC8F30
.word D_80AC8F40
.word D_80AC8F50
.word D_80AC8F60
.word D_80AC8F70
.word D_80AC8F80
.word D_80AC8F90
glabel D_80AC8940
 .word 0x00FC0102, 0x01010159, 0x01920192, 0x01650192, 0x01920159, 0x01920192, 0x005B0192, 0x0192005B, 0x01920192, 0x005B0192, 0x019200FE, 0x01920104, 0x00C90192, 0x0103005B, 0x01920192, 0x013E0192, 0x01920000
glabel D_80AC8984
 .word func_80AC311C
.word func_80AC30B8
.word func_80AC3180
.word func_80AC30FC
.word func_80AC313C
.word func_80AC3098
.word func_80AC3098
.word func_80AC31A0
.word func_80AC31F4
.word func_80AC3098
.word func_80AC32C4
glabel D_80AC89B0
 .word 0x3C23D70A, 0x3C343958, 0x3C2C0831, 0x3C343958, 0x3C23D70A, 0x3C23D70A, 0x3C23D70A, 0x3C23D70A, 0x3C23D70A, 0x3C23D70A, 0x3C23D70A
glabel D_80AC89DC
 .word 0x000D0032, 0x0034FFEC, 0x00000032, 0x004CFFEC, 0x00040050, 0x0034FFFD, 0x00050050, 0x004CFFFD, 0x001DFFCE, 0x0034FFEC, 0x002CFFCE, 0x004CFFEC, 0x0001FFB0, 0x0034FFFD, 0x0010FFB0, 0x004CFFFD, 0x00090032, 0x0034FFEC, 0x00270032, 0x004CFFEC, 0x00080050, 0x0034FFFD, 0x002B0050, 0x004CFFFD, 0x0000FFCE, 0x0034FFEC, 0x0028FFCE, 0x004CFFEC, 0x002AFFB0, 0x0034FFFD, 0x0007FFB0, 0x004CFFFD, 0x00180032, 0x0034FFEC, 0x001C0032, 0x004CFFEC, 0x00190050, 0x0034FFFD, 0x00150050, 0x004CFFFD, 0x001AFFCE, 0x0034FFEC, 0x0016FFCE, 0x004CFFEC, 0x001BFFB0, 0x0034FFFD, 0x0017FFB0, 0x004CFFFD, 0x00090032, 0x0034FFEC, 0x00270032, 0x004CFFEC, 0x00080050, 0x0034FFFD, 0x002B0050, 0x004CFFFD, 0x0000FFCE, 0x0034FFEC, 0x0028FFCE, 0x004CFFEC, 0x002AFFB0, 0x0034FFFD, 0x0007FFB0, 0x004CFFFD, 0x000C0032, 0x0034FFEC, 0x002F0032, 0x004CFFEC, 0x00000050, 0x0034FFFD, 0x00100050, 0x004CFFFD, 0x002CFFCE, 0x0034FFEC, 0x0002FFCE, 0x004CFFEC, 0x0005FFB0, 0x0034FFFD, 0x0001FFB0, 0x004CFFFD, 0x000C0032, 0x0034FFEC, 0x00030032, 0x004CFFEC, 0x00000050, 0x0034FFFD, 0x00100050, 0x004CFFFD, 0x002CFFCE, 0x0034FFEC, 0x0002FFCE, 0x004CFFEC, 0x0005FFB0, 0x0034FFFD, 0x0001FFB0, 0x004CFFFD, 0x00110032, 0x0034FFEC, 0x00000032, 0x004CFFEC, 0x00040050, 0x0034FFFD, 0x00100050, 0x004CFFFD, 0x0012FFCE, 0x0034FFEC, 0x0005FFCE, 0x004CFFEC, 0x0010FFB0, 0x0034FFFD, 0x0010FFB0, 0x004CFFFD, 0x000F0032, 0x0034FFEC, 0x002C0032, 0x004CFFEC, 0x00100050, 0x0034FFFD, 0x00010050, 0x004CFFFD, 0x0000FFCE, 0x0034FFEC, 0x0002FFCE, 0x004CFFEC, 0x0007FFB0, 0x0034FFFD, 0x0031FFB0, 0x004CFFFD, 0x00030032, 0x0034FFEC, 0x00060032, 0x004CFFEC, 0x002D0050, 0x0034FFFD, 0x002E0050, 0x004CFFFD, 0x000EFFCE, 0x0034FFEC, 0x0010FFCE, 0x004CFFEC, 0x0030FFB0, 0x0034FFFD, 0x0010FFB0, 0x004CFFFD, 0x00130032, 0x0034FFEC, 0x00130032, 0x004CFFEC, 0x00130050, 0x0034FFFD, 0x00130050, 0x004CFFFD, 0x0014FFCE, 0x0034FFEC, 0x0014FFCE, 0x004CFFEC, 0x0014FFB0, 0x0034FFFD, 0x0014FFB0, 0x004CFFFD, 0x00250032, 0x0034FFEC, 0x00230032, 0x004CFFEC, 0x00220050, 0x0034FFFD, 0x00240050, 0x004CFFFD, 0x0020FFCE, 0x0034FFEC, 0x001EFFCE, 0x004CFFEC, 0x0021FFB0, 0x0034FFFD, 0x001FFFB0, 0x004CFFFD
glabel D_80AC8C9C
 .word func_80AC2CA8
.word func_80AC2CA8
.word func_80AC2CA8
.word func_80AC2CA8
.word func_80AC2CA8
.word func_80AC2CA8
.word func_80AC2CA8
.word func_80AC2CA8
.word func_80AC2CA8
.word func_80AC2CA8
.word func_80AC2CA8
.word func_80AC2CA8
.word func_80AC2CA8
.word func_80AC2CA8
.word func_80AC2CA8
.word func_80AC2CA8
.word func_80AC2CA8
.word func_80AC2CA8
.word func_80AC2CA8
.word func_80AC2CA8
.word func_80AC2CA8
.word func_80AC2CA8
.word func_80AC2CA8
.word func_80AC2CA8
.word func_80AC2CA8
.word func_80AC2CA8
.word func_80AC2CA8
.word func_80AC2CA8
.word func_80AC2CA8
.word func_80AC2CA8
.word func_80AC2CA8
.word func_80AC2CB8
.word func_80AC2CE8
.word func_80AC2D18
.word func_80AC2CA8
.word func_80AC2D48
.word func_80AC2D78
.word func_80AC2DA8
.word func_80AC2CA8
.word func_80AC2CA8
.word func_80AC2CA8
.word func_80AC2CA8
.word func_80AC2CA8
.word func_80AC2CA8
.word func_80AC2CA8
.word func_80AC2CA8
.word func_80AC2CA8
.word func_80AC2CA8
.word func_80AC2CA8
.word func_80AC2CA8
glabel D_80AC8D64
 .word 0x801F0002, 0x304C01F4
glabel D_80AC8D6C
 .word 0x41880000, 0x42680000, 0x41F00000, 0xC1880000, 0x42680000, 0x41F00000
glabel D_80AC8D84
 .word func_80AC6B3C
.word func_80AC6E0C
.word func_80AC6ECC
.word func_80AC6E0C
.word func_80AC6ADC
.word func_80AC6ADC
.word func_80AC6ADC
.word func_80AC6D30
.word func_80AC6C54
.word func_80AC6ADC
.word func_80AC6E6C
glabel D_80AC8DB0
 .word 0x00000000, 0x00000000, 0x42040000, 0x00000000, 0x00000000, 0x41F80000, 0x00000000, 0x00000000, 0x41F80000, 0x00000000, 0x00000000, 0x41F80000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x42100000, 0x00000000, 0x00000000, 0x41700000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x41D00000
glabel D_80AC8E34
 .word func_80AC3B18
.word func_80AC4074
.word func_80AC4288
.word func_80AC43A0
.word func_80AC43F0
.word func_80AC44DC
.word func_80AC4978
.word func_80AC4B4C
.word func_80AC4D20
.word func_80AC5594
.word func_80AC5680
.word func_80AC576C
.word func_80AC5858
.word func_80AC5900
.word func_80AC5C24
.word func_80AC5D40
.word func_80AC5DAC
.word func_80AC5EF0
.word func_80AC6208
.word func_80AC4DDC
.word func_80AC60E4
.word func_80AC6148
.word func_80AC61B8
.word func_80AC5C9C
.word func_80AC5A28
.word func_80AC6258
.word func_80AC62F4
glabel D_80AC8EA0
 .word 0x06004878, 0x060052B8, 0x060056B8
glabel D_80AC8EAC
 .word 0x06001570, 0x060001F0, 0x06000B30
glabel D_80AC8EB8
 .word 0x0600CE80, 0x0600D280, 0x0600D680
glabel D_80AC8EC4
 .word 0x06003E40, 0x06004640, 0x06004E40
glabel D_80AC8ED0
 .word 0x060030D8, 0x060034D8, 0x060038D8
glabel D_80AC8EDC
 .word 0x060035D8, 0x060039D8
glabel D_80AC8EE4
 .word 0x06003968, 0x06003D68, 0x06004168
