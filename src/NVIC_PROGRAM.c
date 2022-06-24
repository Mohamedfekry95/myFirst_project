#include "STD_TYPES.h"
#include "STD_MACROS.h"

#include "NVIC_INT.h"
#include "NVIC_REG.h"

void NVIC_SetEnable(uint8 index)
{
    if((index <= 31))
    {
        SET_BIT(NVIC_ISER0,index);
    }
    else if((index >= 32)&&(index <= 63))
    {
        index-=32;
        SET_BIT(NVIC_ISER1,index);
    }
    else if((index >= 64)&&(index <= 95))
    {
        index-=64;
        SET_BIT(NVIC_ISER2,index);
    }
}
void NVIC_ClrEnable(uint8 index)
{
    if((index <= 31))
    {
        SET_BIT(NVIC_ICER0,index);
    }
    else if((index >= 32)&&(index <= 63))
    {
        index-=32;
        SET_BIT(NVIC_ICER1,index);
    }
    else if((index >= 64)&&(index <= 95))
    {
        index-=64;
        SET_BIT(NVIC_ICER2,index);
    }
}

void NVIC_SetPending(uint8 per)
{
    if((per <= 31))
    {
        SET_BIT(NVIC_ISPR0,per);
    }
    else if((per >= 32)&&(per <= 63))
    {
        per-=32;
        SET_BIT(NVIC_ISPR1,per);
    }
    else if((per >= 64)&&(per <= 95))
    {
        per-=64;
        SET_BIT(NVIC_ISPR2,per);
    }
}

void NVIC_ClrPending(uint8 per)
{
    if((per <= 31))
    {
        SET_BIT(NVIC_ICPR0,per);
    }
    else if((per >= 32)&&(per <= 63))
    {
        per-=32;
        SET_BIT(NVIC_ICPR1,per);
    }
    else if((per >= 64)&&(per <= 95))
    {
        per-=64;
        SET_BIT(NVIC_ICPR2,per);
    }
}

void NVIC_init()
{
    SCB_AIRCR = 0x05FA0500;
}


void NVIC_SetPriority(uint8 index , uint8 priority)
{ 
    /* since each interrupt has one byte accessible */
    NVIC_IPR[index] = priority;
 }
