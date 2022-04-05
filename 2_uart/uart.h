#ifndef UART_H
#define UART_H

#include <stdint.h>
#include "gpio.h"


#define UART_MODULE ((NRF_UART_REG*)0x40002000) //UART base adress

typedef struct {
	volatile uint32_t TASKS_STARTRX;
    volatile uint32_t TASKS_STOPRX;
    volatile uint32_t TASKS_STARTTX;
    volatile uint32_t TASKS_STOPTX;
    volatile uint32_t RESERVED_0[3];        //RESERVE

    volatile uint32_t TASKS_SUSPEND; 
    volatile uint32_t RESERVED_1[56];        //RESERVE

    volatile uint32_t EVENTS_CTS;
    volatile uint32_t EVENTS_NCTS;
    volatile uint32_t EVENTS_RXDRDY;
    volatile uint32_t RESERVED_2[4];        //RESERVE

    volatile uint32_t EVENTS_TXDRDY;
    volatile uint32_t RESERVED_3;           //RESERVE

    volatile uint32_t EVENTS_ERROR;
    volatile uint32_t RESERVED_4[7];         //RESERVE

    volatile uint32_t EVENTS_RXTO;
    volatile uint32_t RESERVED_5[46];        //RESERVE

    volatile uint32_t SHORTS;
    volatile uint32_t RESERVED_6[64];        //RESERVE

    volatile uint32_t INTENSET;
    volatile uint32_t INTENCLR;
    volatile uint32_t RESERVED_7[93];        //RESERVE

    volatile uint32_t ERRORSRC;
    volatile uint32_t RESERVED_8[31];        //RESERVE

    volatile uint32_t ENABLE;
    volatile uint32_t RESERVED_9;            //RESERVE

    volatile uint32_t PSEL_RTS;
    volatile uint32_t PSEL_TXD;
    volatile uint32_t PSEL_CTS;
    volatile uint32_t PSEL_RXD;
    volatile uint32_t RXD;
    volatile uint32_t TXD;
    volatile uint32_t RESERVED_10;            //RESERVE

    volatile uint32_t BAUDRATE;
    volatile uint32_t RESERVED_11[17]; 	    //RESERVE
    
} NRF_UART_REG;


void uart_init();
void uart_send(char letter);
char uart_read();

#endif