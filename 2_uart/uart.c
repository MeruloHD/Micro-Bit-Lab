#include "uart.h"

void uart_init(){
    GPIO1->PIN_CNF[8] = 1;  //TX OUTPUT

    GPIO0->PIN_CNF[6] = 0;  //RX  INPUT

    //UART_MODULE->PSEL_TXD = 4;
};


void uart_send(char letter);
char uart_read();