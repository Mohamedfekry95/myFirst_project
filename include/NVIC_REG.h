#ifndef NVIC_REG_H_
#define NVIC_REG_H_

#define NVIC_BASE_ADD   0xE000E100

#define SCB_BASE_ADD    0xE000E008



#define NVIC_ISER0  (*((uint32*)(NVIC_BASE_ADD+0x00)))
#define NVIC_ISER1  (*((uint32*)(NVIC_BASE_ADD+0x04)))
#define NVIC_ISER2  (*((uint32*)(NVIC_BASE_ADD+0x08)))

#define NVIC_ICER0  (*((uint32*)(NVIC_BASE_ADD+0x80)))
#define NVIC_ICER1  (*((uint32*)(NVIC_BASE_ADD+0x84)))
#define NVIC_ICER2  (*((uint32*)(NVIC_BASE_ADD+0x88)))

#define NVIC_ISPR0  (*((uint32*)(NVIC_BASE_ADD+0x100)))
#define NVIC_ISPR1  (*((uint32*)(NVIC_BASE_ADD+0x104)))
#define NVIC_ISPR2  (*((uint32*)(NVIC_BASE_ADD+0x108)))

#define NVIC_ICPR0  (*((uint32*)(NVIC_BASE_ADD+0x180)))
#define NVIC_ICPR1  (*((uint32*)(NVIC_BASE_ADD+0x184)))
#define NVIC_ICPR2  (*((uint32*)(NVIC_BASE_ADD+0x188)))

#define NVIC_IABR0  (*((uint32*)(NVIC_BASE_ADD+0x200)))
#define NVIC_IABR1  (*((uint32*)(NVIC_BASE_ADD+0x204)))
#define NVIC_IABR2  (*((uint32*)(NVIC_BASE_ADD+0x208)))

/* without value at address expression */
#define NVIC_IPR   ((uint8*)(NVIC_BASE_ADD+0x300))

#define  SCB_AIRCR  (*((uint32*)(SCB_BASE_ADD+0x0C)))


#endif /* NVIC_REG_H_ */
