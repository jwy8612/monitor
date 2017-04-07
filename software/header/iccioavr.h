/*
 ioavr.h for iccavr
 finding io header file needed
 from -DAT... compiler switch

 2008-02-05     initial version
 2008-02-07     changed to #elif, added #warning
 2008-03-10     added ATmega32/64C1/M1/U4
 2008-03-24     added ATxmega64/128A1 and ATxmega128A1_revD
 2008-04-16     added ATmega8/16HVA
 2008-05-26     added ATmega1284P
 2008-06-04     added ATtiny13A/48/88
 2008-07-03     fixed ATtiny13/A, added ATmega16/32A
 2008-07-08     added ATtiny167 and ATxmegaA1/A3/A4
 2008-11-12     added ATmega16U4, resorted ATmega entries
 2009-04-10     added ATtiny43U and ATmega32U4/6
 2009-04-28     added ATtiny10
 2009-05-18     removed obsolete ATmega256 and ATtiny22
 2009-05-20     added ATtiny87 and warnings "not recommended for new design"
 2009-05-21     added ATmega4/8HVD and ATmega640
*/

#ifndef _iccioavr_h
#define _iccioavr_h

/* active ATtiny devices */

#if defined(ATtiny10)
  #include <iot10v.h>
#elif defined(ATtiny13)
  //#warning "ATtiny13 is not recommended for new design"
  #include <iot13v.h>
#elif defined(ATtiny13A)
  #include <iot13Av.h>

#elif defined(ATtiny2313)
  #include <iot2313v.h>
#elif defined(ATtiny24)
  #include <iot24v.h>
#elif defined(ATtiny24A)
  #include <iot24v.h>
#elif defined(ATtiny25)
  #include <iot25v.h>
#elif defined(ATtiny261)
  #include <iot261v.h>

#elif defined(ATtiny43U)
  #include <iot43Uv.h>
#elif defined(ATtiny44)
  #include <iot44v.h>
#elif defined(ATtiny44A)
  #include <iot44v.h>
#elif defined(ATtiny45)
  #include <iot45v.h>
#elif defined(ATtiny461)
  #include <iot461v.h>
#elif defined(ATtiny48)
  #include <iot48v.h>

#elif defined(ATtiny84)
  #include <iot84v.h>
#elif defined(ATtiny85)
  #include <iot85v.h>
#elif defined(ATtiny861)
  #include <iot861v.h>
#elif defined(ATtiny87)
  #include <iot87v.h>
#elif defined(ATtiny88)
  #include <iot88v.h>

#elif defined(ATtiny167)
  #include <iot167v.h>

/* active ATmega devices */

/* 4 KB flash */
#elif defined(ATMega48)
  #include <iom48v.h>
#elif defined(ATMega48P)
  #include <iom48pv.h>
#elif defined(ATMega48PA)
  #include <iom48pv.h>
#elif defined(ATMega4HVD) /* battery controller */
  #include <iom4HVDv.h>

/* 8 KB flash */
#elif defined(ATMega8)
  #include <iom8v.h>
#elif defined(ATMega8HVA) /* battery controller */
  #include <iom8HVAv.h>
#elif defined(ATMega8HVD) /* battery controller */
  #include <iom8HVDv.h>
#elif defined(ATMega8515)
  #include <iom8515v.h>
#elif defined(ATMega8535)
  #include <iom8535v.h>
#elif defined(ATMega88)
  #include <iom88v.h>
#elif defined(ATMega88P)
  #include <iom88pv.h>
#elif defined(ATMega88PA)
  #include <iom88pv.h>

/* 16 KB flash */
#elif defined(ATMega16)
  //#warning "ATMega16 is not recommended for new design"
  #include <iom16v.h>
#elif defined(ATMega16A)
  #include <iom16v.h>
#elif defined(ATMega16HVA) /* battery controller */
  #include <iom16HVAv.h>
//#elif defined(ATMega16HVB) /* battery controller */
//  #include <iom16HVBv.h>
#elif defined(ATMega16U4) /* USB controller */
  #include <iom16U4v.h>
#elif defined(ATMega162)
  #include <iom162v.h>
#elif defined(ATMega164P)
  #include <iom164pv.h>
#elif defined(ATMega164PA)
  #include <iom164pv.h>
#elif defined(ATMega165)
  //#warning "ATMega165 is not recommended for new design"
  #include <iom165v.h>
#elif defined(ATMega165P)
  #include <iom165pv.h>
#elif defined(ATMega1650)
  #include <iom1650v.h>
#elif defined(ATMega1650P)
  #include <iom1650pv.h>
#elif defined(ATMega168)
  #include <iom168v.h>
#elif defined(ATMega168P)
  #include <iom168pv.h>
#elif defined(ATMega169) /* LCD controller */
  //#warning "ATMega169 is not recommended for new design"
  #include <iom169v.h>
#elif defined(ATMega169P) /* LCD controller */
  #include <iom169pv.h>
#elif defined(ATMega1690) /* LCD controller */
  #include <iom1690v.h>
#elif defined(ATMega1690P) /* LCD controller */
  #include <iom1690pv.h>

/* 32 KB flash */
#elif defined(ATMega32)
  //#warning "ATMega32 is not recommended for new design"
  #include <iom32v.h>
#elif defined(ATMega32A)
  #include <iom32v.h>
//#elif defined(ATMega32HVB) /* battery controller */
//  #include <iom32HVBv.h>
#elif defined(ATMega32C1) /* CAN controller */
  #include <iom32C1v.h>
#elif defined(ATMega32M1) /* CAN & Motor controller */
  #include <iom32M1v.h>
#elif defined(ATMega32U4) /* USB controller */
  #include <iom32U4v.h>
#elif defined(ATMega32U6) /* USB controller */
  #include <iom32U6v.h>
#elif defined(ATMega324)
  #include <iom324v.h>
#elif defined(ATMega324P)
  #include <iom324pv.h>
#elif defined(ATMega324PA)
  #include <iom324pv.h>
#elif defined(ATMega325)
  #include <iom325v.h>
#elif defined(ATMega325P)
  #include <iom325pv.h>
#elif defined(ATMega3250)
  #include <iom3250v.h>
#elif defined(ATMega3250P)
  #include <iom3250pv.h>
#elif defined(ATMega329) /* LCD controller */
  #include <iom329v.h>
#elif defined(ATMega329P) /* LCD controller */
  #include <iom329pv.h>
#elif defined(ATMega3290) /* LCD controller */
  #include <iom3290v.h>

/* 40 KB flash */
#elif defined(ATMega406) /* battery controller */
  #include <iom406v.h>

/* 64 KB flash */
#elif defined(ATMega64)
  #include <iom64v.h>
#elif defined(ATMega64A)
  #include <iom64v.h>
#elif defined(ATMega640)
  #include <iom640v.h>
#elif defined(ATMega64C1) /* CAN controller */
  #include <iom64C1v.h>
#elif defined(ATMega64M1) /* CAN & Motor controller */
  #include <iom64M1v.h>
#elif defined(ATMega644)
  #include <iom644v.h>
#elif defined(ATMega644P)
  #include <iom644pv.h>
#elif defined(ATMega645)
  #include <iom645v.h>
#elif defined(ATMega6450)
  #include <iom6450v.h>
#elif defined(ATMega649) /* LCD controller */
  #include <iom649v.h>
#elif defined(ATMega6490) /* LCD controller */
  #include <iom6490v.h>

/* maybe future parts:

#elif defined(ATMega645P)
  #include <iom645pv.h>
#elif defined(ATMega6450P)
  #include <iom6450pv.h>
#elif defined(ATMega649P) / * LCD controller * /
  #include <iom649pv.h>
#elif defined(ATMega6490P) / * LCD controller * /
  #include <iom6490pv.h>
*/

/* 128 KB flash */
#elif defined(ATMega128)
  #include <iom128v.h>
/*#elif defined(ATMega128A)
  #include <iom128v.h>*/
#elif defined(ATMega1280)
  #include <iom1280v.h>
#elif defined(ATMega1281)
  #include <iom1281v.h>
#elif defined(ATMega1284P)
  #include <iom1284pv.h>

/* 256 KB flash */
#elif defined(ATMega2560)
  #include <iom2560v.h>
#elif defined(ATMega2561)
  #include <iom2561v.h>


/* active XMega devices */

#elif defined(ATxmega64A1)
  #include <ioxm64A1v.h>
#elif defined(ATxmega128A1)
  #include <ioxm128A1v.h>
#elif defined(ATxmega128A1_revD)
  #include <ioxm128A1revDv.h>
#elif defined(ATxmega192A1)
  #include <ioxm192A1v.h>
#elif defined(ATxmega256A1)
  #include <ioxm256A1v.h>
#elif defined(ATxmega384A1)
  #include <ioxm384A1v.h>

#elif defined(ATxmega64A3)
  #include <ioxm64A3v.h>
#elif defined(ATxmega128A3)
  #include <ioxm128A3v.h>
#elif defined(ATxmega192A3)
  #include <ioxm192A3v.h>
#elif defined(ATxmega256A3)
  #include <ioxm256A3v.h>

#elif defined(ATxmega16A4)
  #include <ioxm16A4v.h>
#elif defined(ATxmega32A4)
  #include <ioxm32A4v.h>
#elif defined(ATxmega64A4)
  #include <ioxm64A4v.h>
#elif defined(ATxmega128A4)
  #include <ioxm128A4v.h>


/* other devices with mega core

/* CAN AVRs */

#elif defined(AT90CAN32)
 #include <ioCAN32v.h>
#elif defined(AT90CAN64)
 #include <ioCAN64v.h>
#elif defined(AT90CAN128)
 #include <ioCAN128v.h>

/* Lighting AVRs */

#elif defined(AT90PWM1)
 #include <ioPWM1v.h>
#elif defined(AT90PWM2)
 #include <ioPWM2v.h>
#elif defined(AT90PWM2B)
 #include <ioPWM2v.h>
#elif defined(AT90PWM216)
 #include <ioPWM216v.h>
#elif defined(AT90PWM3)
 #include <ioPWM3v.h>
#elif defined(AT90PWM3B)
 #include <ioPWM3v.h>
#elif defined(AT90PWM316)
 #include <ioPWM316v.h>

/* USB AVRs */

#elif defined(AT90USB82)
 #include <ioUSB82v.h>
#elif defined(AT90USB162)
 #include <ioUSB162v.h>
#elif defined(AT90USB646)
 #include <ioUSB646v.h>
#elif defined(AT90USB647)
 #include <ioUSB647v.h>
#elif defined(AT90USB1286)
 #include <ioUSB1286v.h>
#elif defined(AT90USB1287)
 #include <ioUSB1287v.h>

/* FPSLICs */

#elif defined(AT94K05)
  #include <ioat94kv.h>
#elif defined(AT94K10)
  #include <ioat94kv.h>
#elif defined(AT94K40)
  #include <ioat94kv.h>


/* devices out of maintance */

#elif defined(ATMega103)
  #warning "ATMega103 is not recommended for new design"
  #include <iom103v.h>
#elif defined(ATMega161)
  #warning "ATMega161 is not recommended for new design"
  #include <iom161v.h>
#elif defined(ATMega163)
  #warning "ATMega163 is not recommended for new design"
  #include <iom163v.h>
//#elif defined(ATMega256)
//  #include <iom256v.h>
#elif defined(ATMega323)
  #warning "ATMega323 is not recommended for new design"
  #include <iom323v.h>

//#elif defined(ATtiny22)
//  #include <iot22v.h>
#elif defined(ATtiny26)
  #warning "AT90S... is not recommended for new design"
  #include <iot26v.h>

#elif defined(AT90S2313)
  #warning "AT90S... is not recommended for new design"
  #include <io2313v.h>
#elif defined(AT90S2323)
  #warning "AT90S... is not recommended for new design"
  #include <io2323v.h>
#elif defined(AT90S2333)
  #warning "AT90S... is not recommended for new design"
  #include <io2333v.h>
#elif defined(AT90S2343)
  #warning "AT90S... is not recommended for new design"
  #include <io2343v.h>
#elif defined(AT90S4414)
  #warning "AT90S... is not recommended for new design"
  #include <io4414v.h>
#elif defined(AT90S4433)
  #warning "AT90S... is not recommended for new design"
  #include <io4433v.h>
#elif defined(AT90S4434)
  #warning "AT90S... is not recommended for new design"
  #include <io4434v.h>
#elif defined(AT90S8515)
  #warning "AT90S... is not recommended for new design"
  #include <io8515v.h>
#elif defined(AT90S8534)
  #warning "AT90S... is not recommended for new design"
  #include <io8534v.h>
#elif defined(AT90S8535)
  #warning "AT90S... is not recommended for new design"
  #include <io8535v.h>

#elif defined(AT43USB320)
  #warning "AT43USB320 is not recommended for new design"
  #include <ioUSB320v.h>
#elif defined(AT43USB355)
  #warning "AT43USB355 is not recommended for new design"
  #include <ioUSB355v.h>

#elif defined(AT86RF401)
  #warning "AT86RF401 is not recommended for new design"
  #include <iorf401v.h>


/* if no device name matches */

#else
  #warning "Don't know which io header file to #include"
#endif

#endif

/* eof */