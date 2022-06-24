#ifndef RCC_INT_H_
#define RCC_INT_H_

typedef enum 
{
    AHBENR = 0,
    APB1ENR,
    APB2ENR
}tBUS;

void RCC_ClockInit(void);

void RCC_EnableClockPeripheral(tBUS bus , uint8 peripheral);

void RCC_DisableClockPeripheral(tBUS bus , uint8 peripheral);


#endif  /* RCC_INT_H_ */
