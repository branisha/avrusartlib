#include "lib-usart.h"

// returns 0 if there is data in buffer
// returns 1 if succesful
uint8_t UsartSendByte( uint8_t c){
    if(!(UCSR0A & (1<<UDRE0)))
        return 0;
    UDR0 = c;
    return 1;
}

