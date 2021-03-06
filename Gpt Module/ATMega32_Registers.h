/*
 * ATMega32_Registers.h
 *
 * Created: 7/13/2021 8:02:01 PM
 *  Author: Ahmed Nabil
 */ 


#ifndef ATMEGA32_REGISTERS_H_
#define ATMEGA32_REGISTERS_H_
#include "Platform_Types.h"
/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/
/*-*-*-*-*- FUNCTION-LIKE MACROS -*-*-*-*-*/
#define REG_SET_BIT(Reg, pinNum)		((Reg) |= (1<<pinNum))
#define REG_CLR_BIT(Reg, pinNum)		((Reg) &= ~(1<<pinNum))

/*-* PIN NUMBERS *-*/
#define PIN_0		0
#define PIN_1		1
#define PIN_2		2
#define PIN_3		3
#define PIN_4		4
#define PIN_5		5
#define PIN_6		6
#define PIN_7		7
/*-* PORT NUMBERS *-*/
#define PORT_A		0
#define PORT_B		1
#define PORT_C		2
#define PORT_D		3

/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/
/*-*-*-*-*-*-*-*-*-*-*-*- DIO REGISTERS -*-*-*-*-*-*-*-*-*-*-*-*/
/*-* PORT A Registers *-*/
#define DIO_PORTA_DATA			(*((volatile uint8_t*)(0x3B)))
#define DIO_PORTA_DIR			(*((volatile uint8_t*)(0x3A)))
#define DIO_PORTA_PIN			(*((volatile uint8_t*)(0x39)))

/*-* PORT B Registers *-*/
#define DIO_PORTB_DATA			(*((volatile uint8_t*)(0x38)))
#define DIO_PORTB_DIR			(*((volatile uint8_t*)(0x37)))
#define DIO_PORTB_PIN			(*((volatile uint8_t*)(0x36)))

/*-* PORT C Registers *-*/
#define DIO_PORTC_DATA			(*((volatile uint8_t*)(0x35)))
#define DIO_PORTC_DIR			(*((volatile uint8_t*)(0x34)))
#define DIO_PORTC_PIN			(*((volatile uint8_t*)(0x33)))

/*-* PORT D Registers *-*/
#define DIO_PORTD_DATA			(*((volatile uint8_t*)(0x32)))
#define DIO_PORTD_DIR			(*((volatile uint8_t*)(0x31)))
#define DIO_PORTD_PIN			(*((volatile uint8_t*)(0x30)))



/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/
/*-*-*-*-*-*-*-*-*-*-*-*- GPT REGISTERS -*-*-*-*-*-*-*-*-*-*-*-*/
/*-* Timers Registers *-*/
#define GPT_TIMSK_REG			(*((volatile uint8_t*)(0x59)))
#define GPT_TIFR_REG			(*((volatile uint8_t*)(0x58)))

/*-* Timer 0 8-bit Registers *-*/
#define GPT_OCR0_REG			(*((volatile uint8_t*)(0x5C)))
#define GPT_TCCR0_REG			(*((volatile uint8_t*)(0x53)))
#define GPT_TCNT0_REG			(*((volatile uint8_t*)(0x52)))

/*-* Timer 1 16-bit Registers *-*/
#define GPT_TCCR1A_REG			(*((volatile uint8_t*)(0x4F)))
#define GPT_TCCR1B_REG			(*((volatile uint8_t*)(0x4E)))
#define GPT_TCNT1H_REG			(*((volatile uint8_t*)(0x4D)))
#define GPT_TCNT1L_REG			(*((volatile uint8_t*)(0x4C)))
#define GPT_OCR1AH_REG			(*((volatile uint8_t*)(0x4B)))
#define GPT_OCR1AL_REG			(*((volatile uint8_t*)(0x4A)))
#define GPT_OCR1BH_REG			(*((volatile uint8_t*)(0x49)))
#define GPT_OCR1BL_REG			(*((volatile uint8_t*)(0x48)))
#define GPT_ICR1H_REG			(*((volatile uint8_t*)(0x47)))
#define GPT_ICR1L_REG			(*((volatile uint8_t*)(0x46)))

/*-* Timer 2 8-bit Registers *-*/
#define GPT_TCCR2_REG			(*((volatile uint8_t*)(0x45)))
#define GPT_TCNT2_REG			(*((volatile uint8_t*)(0x44)))
#define GPT_OCR2_REG			(*((volatile uint8_t*)(0x43)))


#endif /* ATMEGA32_REGISTERS_H_ */