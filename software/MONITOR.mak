CC = iccavr
LIB = ilibw
CFLAGS =  -ID:\monitor\software\header -e -D__ICC_VERSION=722 -DATMega16  -l -g -MLongJump -MHasMul -MEnhanced 
ASFLAGS = $(CFLAGS) 
LFLAGS =  -g -e:0x4000 -ucrtatmega.o -bfunc_lit:0x54.0x4000 -dram_end:0x45f -bdata:0x60.0x45f -dhwstk_size:30 -beeprom:0.512 -fihx_coff -S2
FILES = main.o extint.o init.o spi.o timer.o uart.o eeprom.o func.o 

MONITOR:	$(FILES)
	$(CC) -o MONITOR $(LFLAGS) @MONITOR.lk   -lcatmega
main.o: .\header\define.h D:\monitor\software\header\iom16v.h D:\monitor\software\header\macros.h D:\monitor\software\header\AVRdef.h .\header\uart.h .\header\eeprom1.h .\header\string.h D:\monitor\software\header\_const.h
main.o:	source\main.c
	$(CC) -c $(CFLAGS) source\main.c
extint.o: .\header\define.h D:\monitor\software\header\iom16v.h D:\monitor\software\header\macros.h D:\monitor\software\header\AVRdef.h .\header\func.h
extint.o:	source\extint.c
	$(CC) -c $(CFLAGS) source\extint.c
init.o: .\header\define.h D:\monitor\software\header\iom16v.h D:\monitor\software\header\macros.h D:\monitor\software\header\AVRdef.h .\header\timer.h .\header\spi.h .\header\uart.h
init.o:	source\init.c
	$(CC) -c $(CFLAGS) source\init.c
spi.o: .\header\define.h D:\monitor\software\header\iom16v.h D:\monitor\software\header\macros.h D:\monitor\software\header\AVRdef.h
spi.o:	source\spi.c
	$(CC) -c $(CFLAGS) source\spi.c
timer.o: .\header\define.h D:\monitor\software\header\iom16v.h D:\monitor\software\header\macros.h D:\monitor\software\header\AVRdef.h
timer.o:	source\timer.c
	$(CC) -c $(CFLAGS) source\timer.c
uart.o: .\header\define.h D:\monitor\software\header\iom16v.h D:\monitor\software\header\macros.h D:\monitor\software\header\AVRdef.h
uart.o:	source\uart.c
	$(CC) -c $(CFLAGS) source\uart.c
eeprom.o: .\header\define.h D:\monitor\software\header\iom16v.h D:\monitor\software\header\macros.h D:\monitor\software\header\AVRdef.h
eeprom.o:	source\eeprom.c
	$(CC) -c $(CFLAGS) source\eeprom.c
func.o: .\header\define.h D:\monitor\software\header\iom16v.h D:\monitor\software\header\macros.h D:\monitor\software\header\AVRdef.h .\header\uart.h .\header\string.h D:\monitor\software\header\_const.h .\header\eeprom1.h
func.o:	source\func.c
	$(CC) -c $(CFLAGS) source\func.c
