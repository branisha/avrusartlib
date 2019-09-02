#include "lib-usart.h"

// returns 1 if there is no data present in register
uint8_t UsartIsAvailable( void ){
    return (UCSR0A & (1<<UDRE0));
}