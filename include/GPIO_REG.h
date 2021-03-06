#ifndef GPIO_REG_H_
#define GPIO_REG_H_

#define GPIOA_BASE_ADD   0x40010800

#define GPIOB_BASE_ADD   0x40010C00

#define GPIOC_BASE_ADD   0x40011000

#define GPIOD_BASE_ADD   0x40011400



#define GPIOA_CRL  (*((uint32*)(GPIOA_BASE_ADD+0x00)))
#define GPIOA_CRH  (*((uint32*)(GPIOA_BASE_ADD+0x04)))
#define GPIOA_IDR  (*((uint32*)(GPIOA_BASE_ADD+0x08)))
#define GPIOA_ODR  (*((uint32*)(GPIOA_BASE_ADD+0x0C)))
#define GPIOA_BSR  (*((uint32*)(GPIOA_BASE_ADD+0x10)))
#define GPIOA_BRR  (*((uint32*)(GPIOA_BASE_ADD+0x14)))
#define GPIOA_LCK  (*((uint32*)(GPIOA_BASE_ADD+0x18)))

#define GPIOB_CRL  (*((uint32*)(GPIOB_BASE_ADD+0x00)))
#define GPIOB_CRH  (*((uint32*)(GPIOB_BASE_ADD+0x04)))
#define GPIOB_IDR  (*((uint32*)(GPIOB_BASE_ADD+0x08)))
#define GPIOB_ODR  (*((uint32*)(GPIOB_BASE_ADD+0x0C)))
#define GPIOB_BSR  (*((uint32*)(GPIOB_BASE_ADD+0x10)))
#define GPIOB_BRR  (*((uint32*)(GPIOB_BASE_ADD+0x14)))
#define GPIOB_LCK  (*((uint32*)(GPIOB_BASE_ADD+0x18)))

#define GPIOC_CRL  (*((uint32*)(GPIOC_BASE_ADD+0x00)))
#define GPIOC_CRH  (*((uint32*)(GPIOC_BASE_ADD+0x04)))
#define GPIOC_IDR  (*((uint32*)(GPIOC_BASE_ADD+0x08)))
#define GPIOC_ODR  (*((uint32*)(GPIOC_BASE_ADD+0x0C)))
#define GPIOC_BSR  (*((uint32*)(GPIOC_BASE_ADD+0x10)))
#define GPIOC_BRR  (*((uint32*)(GPIOC_BASE_ADD+0x14)))
#define GPIOC_LCK  (*((uint32*)(GPIOC_BASE_ADD+0x18)))

#define GPIOD_CRL  (*((uint32*)(GPIOD_BASE_ADD+0x00)))
#define GPIOD_CRH  (*((uint32*)(GPIOD_BASE_ADD+0x04)))
#define GPIOD_IDR  (*((uint32*)(GPIOD_BASE_ADD+0x08)))
#define GPIOD_ODR  (*((uint32*)(GPIOD_BASE_ADD+0x0C)))
#define GPIOD_BSR  (*((uint32*)(GPIOD_BASE_ADD+0x10)))
#define GPIOD_BRR  (*((uint32*)(GPIOD_BASE_ADD+0x14)))
#define GPIOD_LCK  (*((uint32*)(GPIOD_BASE_ADD+0x18)))



#endif  /*  */
