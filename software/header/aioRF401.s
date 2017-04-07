;-------------------------------------------------
; ICCAVR asm header file
; target = AT86RF401
; ja 2002/06/26
;
; Attention:
; chip is memory of 2313, but mega core!
; this means that e.g.
; - SPH is actually used (must always be 0)
; - interrupt vectors are generated for
;   table of *jmp*.
;
; creation of int vectors is supported by macros:
; - "set_vector_table"
;   makes whole vector table with original labels
; - "set_vector_<original label>"
;   makes single vector with label by argument
;   e.g.
;    set_vector_BT_F0 react_on_BT_F0
;   results in code
;    .org 8
;    jmp  react_on_BT_F0
;
; macros leave with area set to text.
;-------------------------------------------------
; io register definitions
;
SREG	=0x3f
 I		=7		; in asm sources
 T		=6		; original bit names
 H		=5		; are ok
 S		=4
 V		=3
 N		=2
 Zero	=1		; except for Z
 C		=0
;
SPH		=0x3e
SPL		=0x3d
;
BL_CONFIG	=0x35
 BL		=7
 BLV	=6
 BL5	=5
 BL4	=4
 BL3	=3
 BL2	=2
 BL1	=1
 BL0	=0
B_DET		=0x34
 BD5	=5
 BD4	=4
 BD3	=3
 BD2	=2
 BD1	=1
 BD0	=0
AVR_COMFIG	=0x33
 ACS1	=6
 ACS0	=5
 TM		=4
 BD		=3
 BLI	=2
 SLEEP	=1
 BBM	=0
;
IO_DATIN	=0x32
 IOI5	=5
 IOI4	=4
 IOI3	=3
 IOI2	=2
 IOI1	=1
 IOI0	=0
IO_DATOUT	=0x31
 IOO5	=5
 IOO4	=4
 IOO3	=3
 IOO2	=2
 IOO1	=1
 IOO0	=0
IO_ENAB		=0x30
 BOHYST	=6
 IOE5	=5
 IOE4	=4
 IOE3	=3
 IOE2	=2
 IOE1	=1
 IOE0	=0
;
WDTCR	=0x22
 WDTOE	=4
 WDE 	=3
 WDP2	=2
 WDP1	=1
 WDP0	=0
;
BTCR	=0x21
 C9		=7
 C8		=6
 M1		=5
 M0		=4
 IE		=3
 F2		=2
 DATA	=1
 F0		=0
BTCNT	=0x20
 C7		=7
 C6		=6
 C5		=5
 C4		=4
 C3		=3
 C2		=2
 C1		=1
 C0		=0
;
DEEAR	=0x1e	; byte address
DEEDR	=0x1d
DEECR	=0x1c
 BSY	=3
 EEU	=2
 EEL	=1
 EER	=0
;
LOCKDET2	=0x17
 EUD	=7
 LAT	=6
 ULC2	=5
 ULC1	=4
 ULC0	=3
 LC2	=2
 LC1	=1
 LC0	=0
LOCKDET1	=0x10
 UPOK	=4
 ENKO	=3
 BOD	=2
 CS1	=1
 CS0	=0
VCOTUNE		=0x16
 VCOVDET1 =7
 VCOVDET0 =6
 VCOTUNE4 =4
 VCOTUNE3 =3
 VCOTUNE2 =2
 VCOTUNE1 =1
 VCOTUNE0 =0
PWR_ATTEN	=0x14
 PCC2	=5
 PCC1	=4
 PCC0	=3
 PCF2	=2
 PCF1	=1
 PCF0	=0
TX_CNTL		=0x12
;
;-------------------------------------------------
; useful memory definitions
;
RAMEND  =0xDF	;Last On-Chip SRAM Location
E2END	=0x7F	;Last On-Chip EEPROM Location
FLASHEND=0x7FF	;Last On-Chip Flash Location
;
;-------------------------------------------------
.macro set_vector_table
 .area vector (abs)
 .org	4
  jmp	BT_F2_ISR
  jmp	BT_F0_ISR
 .area text
.endmacro
;
.macro set_vector_BT_F2
 .area vector (abs)
 .org	4
  jmp	@0
 .area text
.endmacro
.macro set_vector_TXDONE
 .area vector (abs)
 .org	4
  jmp	@0
 .area text
.endmacro
.macro set_vector_BT_F0
 .area vector (abs)
 .org	8
  rjmp	@0
 .area text
.endmacro
;-------------------------------------------------
;<eof>
