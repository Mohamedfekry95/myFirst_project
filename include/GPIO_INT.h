#ifndef GPIO_INT_H_
#define GPIO_INT_H_

typedef enum
{
    PORT_A,
    PORT_B,
    PORT_C,
    PORT_D
}tPORT;

void DIO_SetDir(tPORT port , uint8 pin , uint8 mode);

void DIO_SetPinVal(tPORT ,uint8 pin , uint8 val);

uint8 DIO_GetPInVal(tPORT port , uint8 pin);

#endif /* GPIO_INT_H_ */
