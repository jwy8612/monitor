
#include "define.h"
#include "func.h"

#pragma interrupt_handler int0_isr:iv_INT0

extern u8 phnum[12];
void int0_isr(void)
{
}

#pragma interrupt_handler int1_isr:iv_INT1
void int1_isr(void)
{
	 //external interupt on INT1
	 //u8 data;
	 //EEPROM_read(phnum_addr,phnum,phnum_length);
	// USART_send_str(phnum);
	//phcall();
}

