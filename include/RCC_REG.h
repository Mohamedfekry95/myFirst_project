#ifndef RCC_REG_H_
#define RCC_REG_H_

#define RCC_BASE_ADD    0x40021000

#define RCC_CR        (*((uint32*)(RCC_BASE_ADD + 0x00)))
#define RCC_CFGR      (*((uint32*)(RCC_BASE_ADD + 0x04)))
#define RCC_CIR       (*((uint32*)(RCC_BASE_ADD + 0x08)))
#define RCC_APB2RSTR   (*((uint32*)(RCC_BASE_ADD + 0x0C)))
#define RCC_APB1RSTR   (*((uint32*)(RCC_BASE_ADD + 0x10)))
#define RCC_AHBENR     (*((uint32*)(RCC_BASE_ADD + 0x14)))
#define RCC_APB2ENR    (*((uint32*)(RCC_BASE_ADD + 0x18)))
#define RCC_APB1ENR    (*((uint32*)(RCC_BASE_ADD + 0x1C)))
#define RCC_BDCR       (*((uint32*)(RCC_BASE_ADD + 0x20)))

#endif /* RCC_REG_H_ */
