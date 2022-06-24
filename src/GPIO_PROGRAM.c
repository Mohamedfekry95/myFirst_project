#include "STD_TYPES.h"
#include "STD_MACROS.h"

#include "GPIO_REG.h"
#include "GPIO_INT.h"





void DIO_SetDir(tPORT port , uint8 pin , uint8 mode)
{
    switch (port)
    {
        case PORT_A:
        if((pin <= 7))
        {
        	GPIOA_CRL &= ~(0b1111 << pin*4);
            GPIOA_CRL |= (mode << pin*4);
        }
        else if((pin >= 8)&&(pin <= 15))
        {
            pin = pin - 8;
            GPIOA_CRH &= ~(0b1111 << pin*4);
            GPIOA_CRH |= (mode << pin*4);
        }
        break;
        case PORT_B:
        if((pin <= 7))
        {
        	GPIOB_CRL &= ~(0b1111 << pin*4);
            GPIOB_CRL |= (mode << pin*4);
        }
        else if((pin >= 8)&&(pin <= 15))
        {
            pin = pin - 8;
            GPIOB_CRH &= ~(0b1111 << pin*4);
            GPIOB_CRH |= (mode << pin*4);
        }
        break;
        case PORT_C:
        if((pin <= 7))
        {
        	GPIOC_CRL &= ~(0b1111 << pin*4);
            GPIOC_CRL |= (mode << pin*4);
        }
        else if((pin >= 8)&&(pin <= 15))
        {
            pin = pin - 8;
            GPIOC_CRH &= ~(0b1111 << pin*4);
            GPIOC_CRH |= (mode << pin*4);
        }
        break;
        case PORT_D:
        if((pin <= 7))
        {
        	GPIOD_CRL &= ~(0b1111 << pin*4);
            GPIOD_CRL |= (mode << pin*4);
        }
        else if((pin >= 8)&&(pin <= 15))
        {
            pin = pin - 8;
            GPIOD_CRH &= ~(0b1111 << pin*4);
            GPIOD_CRH |= (mode << pin*4);
        }
    }
}

void DIO_SetPinVal(tPORT port ,uint8 pin , uint8 val)
{
    switch(port)
    {
        case PORT_A:
        if(val == 1)
        {
            SET_BIT(GPIOA_ODR,pin);
        }
        else
        {
            CLR_BIT(GPIOA_ODR,pin);
        } 
        break;
        case PORT_B:
        if(val == 1)
        {
            SET_BIT(GPIOB_ODR,pin);
        }
        else
        {
            CLR_BIT(GPIOB_ODR,pin);
        } 
        break;
        case PORT_C:
        if(val == 1)
        {
            SET_BIT(GPIOC_ODR,pin);
        }
        else
        {
            CLR_BIT(GPIOC_ODR,pin);
        } 
        break;
        case PORT_D:
        if(val == 1)
        {
            SET_BIT(GPIOD_ODR,pin);
        }
        else
        {
            CLR_BIT(GPIOD_ODR,pin);
        } 
        break;
    }
}

uint8 DIO_GetPInVal(tPORT port , uint8 pin)
{
    uint8 res = 0;
    switch(port)
    {
        case PORT_A:
        res = GET_BIT(GPIOA_IDR,pin);
        break;
        case PORT_B:
        res = GET_BIT(GPIOB_IDR,pin);
        break;
        case PORT_C:
        res = GET_BIT(GPIOC_IDR,pin);
        break;
        case PORT_D:
        res = GET_BIT(GPIOD_IDR,pin);
        break;
    }
    return res;
}
