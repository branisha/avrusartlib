#ifndef LIB_USART_H
#define LIB_USART_H

// change values here if needed
#define BAUD 38400
#define UBRR_REG F_CPU/8/BAUD-1 

#include <avr/io.h>

void UsartInit( uint16_t );
uint8_t UsartSendByte( uint8_t );
char UsartGetByte( void );
uint8_t UsartIsEmpty( void );
void UsartSendString( char* );
uint8_t UsartIsAvailable( void );

#endif