#include "STD_TYPES.h"
#include "STD_MACROS.h"

#include "RCC_INT.h"
#include "RCC_REG.h"



void RCC_ClockInit(void)
{
    /* pll is off , CSS is off , HSE is on and 8MHZ , HSI is off */
    RCC_CR = 0x00010000;
    /* no MCO , no PLL_mul , no PRESCALER , HSE is the clock source */
    RCC_CFGR = 0x00000001;
}

void RCC_EnableClockPeripheral(tBUS bus , uint8 peripheral)
{
    switch(bus)
    {
        case AHBENR:
        SET_BIT(RCC_AHBENR,peripheral);
        break;
        case APB1ENR:
        SET_BIT(RCC_APB1ENR,peripheral);
        break;
        case APB2ENR:
        SET_BIT(RCC_APB2ENR,peripheral);
        break;
    }
}

void RCC_DisableClockPeripheral(tBUS bus , uint8 peripheral)
{
    switch(bus)
    {
        case AHBENR:
        CLR_BIT(RCC_AHBENR,peripheral);
        break;
        case APB1ENR:
        CLR_BIT(RCC_APB1ENR,peripheral);
        break;
        case APB2ENR:
        CLR_BIT(RCC_APB2ENR,peripheral);
        break;
    }
}
