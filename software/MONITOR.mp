NOTE: AVR Code addresses are word addresses
All other addresses (including ones in FLASH) are byte addresses

Area                               Addr   Size   Decimal Bytes (Attributes)
--------------------------------   ----   ----   ------- ----- ------------
                           idata   0054   0035 =     53. bytes (rel,con,rom)

       Addr  Global Symbol
      -----  --------------------------------
       0054  __idata_start
       0089  __idata_end

Area                               Addr   Size   Decimal Bytes (Attributes)
--------------------------------   ----   ----   ------- ----- ------------
                            text   008A   0680 =   1664. bytes (rel,con,rom)

       Addr  Global Symbol
      -----  --------------------------------
       0045  __text_start
       0045  __start
       0067  _exit
       0068  _AT_init
       007F  _main
       00F2  _int0_isr
       00FC  _int1_isr
       012B  _port_init
       0136  _watchdog_init
       0138  _init_devices
       014B  _spi_init
       0150  _SPI_MasterInit
       0156  _SPI_MasterTransmit
       015A  _timer0_init
       0163  _timer0_ovf_isr
       016D  _uart0_init
       0179  _USART_Transmit
       017D  _USART_send_str
       0192  _uart0_rx_isr
       0206  _EEPROM_write_byte
       020E  _EEPROM_read_byte
       0215  _EEPROM_write
       022D  _EEPROM_read
       0245  _send_message
       0246  _read_message
       026B  _pass_phnum
       0299  _pass_key
       02D5  _pass_commond
       030F  _phcall
       0333  _memcmp
       0345  _memcpy
       0353  _memset
       035E  _strcpy
       0367  pop_xgset30FC
       0370  push_xgsetF0FC
       0372  push_xgset30FC
       0374  push_xgset00FC
       0376  push_xgset003C
       037B  push_xgset300C
       0380  pop_xgset300C
       0385  __text_end

Area                               Addr   Size   Decimal Bytes (Attributes)
--------------------------------   ----   ----   ------- ----- ------------
                            data   0060   0035 =     53. bytes (rel,con,ram)

       Addr  Global Symbol
      -----  --------------------------------
       0060  __data_start
       006F  timer.c:a
       0071  uart.c:flag
       0072  uart.c:i
       0095  __data_end

Area                               Addr   Size   Decimal Bytes (Attributes)
--------------------------------   ----   ----   ------- ----- ------------
                             bss   0095   008A =    138. bytes (rel,con,ram)

       Addr  Global Symbol
      -----  --------------------------------
       0095  _newms
       0095  __bss_start
       0096  _shefang
       0097  _mstxt
       00FB  _phnum
       0107  _key_old
       0111  _key
       011B  _keyflag
       011C  _readflag
       011D  _errflag
       011E  _okflag
       011F  __bss_end

Area                               Start  End    Decimal Bytes (Attributes)
--------------------------------   ----   ----   ------- ----- ------------
                          vector   0000   0030 =     48. bytes (abs,ovr,rom)

Files Linked      [ module(s) ]

C:\iccv7avr\lib\crtatmega.o	[ crtatmega.s ]
main.o	[ main.c ]
extint.o	[ extint.c ]
init.o	[ init.c ]
spi.o	[ spi.c ]
timer.o	[ timer.c ]
uart.o	[ uart.c ]
eeprom.o	[ eeprom.c ]
func.o	[ func.c ]
<library>	[ memcmp.s, memcpy.s, memset.s, strcpy.s, gpop4.s, gpush.s, gpushx.s ]

User Global Definitions

ram_end = 0x45f
hwstk_size = 0x1e

User Base Address Definitions

func_lit = 0x54
data = 0x60
eeprom:0.512

