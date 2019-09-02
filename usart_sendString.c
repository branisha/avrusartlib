#include <string.h>
#include "lib-usart.h"

void UsartSendString( char* str){
    for(int i = 0; i < strlen(str); i++){
        while(!UsartIsAvailable())
            ;
        UsartSendByte(str[i]);
    }
}

