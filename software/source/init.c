#include "define.h"
#include "timer.h"
#include "spi.h"
#include "uart.h"
void port_init(void)
{
	 PORTA = 0x00;
	 DDRA  = 0xff;
	 PORTB = 0x00;
	 DDRB  = 0x00;
	 PORTC = 0x00; //m103 output only
	 DDRC  = 0x00;
	 PORTD = 0x00;
	 DDRD  = 0x02;
}

//Watchdog initialize
// prescale: 32K 
void watchdog_init(void)
{
	 WDR(); //this prevents a timout on enabling
	 #ifdef CLOCK11059
	 WDTCR = 0x09; //WATCHDOG ENABLED - dont forget to issue WDRs
	 #endif
	 #ifdef CLOCK73728

	 #endif
}

//call this routine to initialize all peripherals
void init_devices(void)
{
 //stop errant interrupts until set up
	 CLI(); //disable all interrupts
	 port_init();
	// watchdog_init();
	 timer0_init();
	 uart0_init();
	 //SPI_MasterInit();

	 MCUCR = 0x0A;
	 GICR  = 0xC0;
	 TIMSK = 0x01; //timer interrupt sources
	 SEI(); //re-enable interrupts
 //all peripherals are now initialized
}

