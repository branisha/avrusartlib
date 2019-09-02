#include "lib-usart.h"

// Gets byte from register, this should be paired with UsartIsDataPresent function
char UsartGetByte( void ){
    return UDR0;
}