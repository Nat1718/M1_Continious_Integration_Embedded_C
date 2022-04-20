#ifndef __USART_H__
#define __USART_H__

#define F_CPU 16000000UL // microcontroller frequency
#define BAUD 9600 // define baud rate 
#define BAUDRATE ((F_CPU)/(BAUD*16UL)-1) //set baud rate value for UBRR

void USARTInit(void);

char USARTRead();

void USARTWrite(int);

#endif
