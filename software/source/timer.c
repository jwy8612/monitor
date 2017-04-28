#include "define.h"

//TIMER0 initialize - prescale:1024
// WGM: Normal
// desired value: 1KHz
// actual value:  1.080KHz (7.4%)
void timer0_init(void)
{
#ifdef CLOCK11059
	 TCCR0 = 0x00; //stop
	 TCNT0 = 0xF6; //set count
	 OCR0  = 0x0A;  //set compare
	 TCCR0 = 0x05; //start timer
#endif
#ifdef CLOCK73728
	TCCR0 = 0x00; //stop
	TCNT0 = 0x8D; //set count
	OCR0  = 0x73;  //set compare
	TCCR0 = 0x03; //start timer

#endif
}

#pragma interrupt_handler timer0_ovf_isr:iv_TIM0_OVF
void timer0_ovf_isr(void)
{
#ifdef CLOCK11059
	 TCNT0 = 0xF6; //reload counter value
#endif
#ifdef CLOCK73728
	 TCNT0 = 0x8D; //reload counter value
#endif	 

}

