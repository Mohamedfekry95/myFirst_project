#include "STD_TYPES.h"
#include "STD_MACROS.h"


#include "RCC_INT.h"
#include "GPIO_INT.h"
#include "NVIC_INT.h"



void main(void)
{

/*intialize system clock*/
RCC_ClockInit();


/*intialize NVIC with lock key*/
NVIC_init();

/*ENABLE GPIOA CLOCK*/
RCC_EnableClockPeripheral(APB2ENR,2);

/*enable USART1 clock*/
//RCC_EnableClockPeriphral(2,14);

/*set portA pin0 pin1 as output mode with 2Mhz*/
DIO_SetDir(PORT_A,0,0b0010);
DIO_SetDir(PORT_A,1,0b0010);


/*ENABLE USART1 NVIC INTERRUPT*/
NVIC_SetEnable(37);

/*ENABLE USART2 NVIC INTERRUPT*/
NVIC_SetEnable(38);

/*SET USART1 AT GROUP PRIORITY 1 AND SUBPRIORITY 0*/
NVIC_SetPriority(37 , 0x40);

/*SET USART2 AT GROUP PRIORITY 0 AND SUBPRIORITY 0*/
NVIC_SetPriority(38 , 0x00);

/*ENABLE USART1 PENDING FLAG*/
NVIC_SetPending(37);

while(1)
{



}//superloop



}//main
void USART1_IRQHandler(void)
{
/*set A0 as output push pull 2MHZ*/

DIO_SetPinVal(PORT_A,1, 1);

NVIC_SetPending(38);
}//interrupt_handler




void USART2_IRQHandler(void)

{
/*set A0 as output push pull 2MHZ*/

DIO_SetPinVal(PORT_A,0, 1);
}//interrupt_handler

