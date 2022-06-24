#ifndef NVIC_INT_H_
#define NVIC_INT_H_


void NVIC_SetPriority(uint8 index , uint8 priority);
void NVIC_init();
void NVIC_ClrPending(uint8 per);
void NVIC_SetPending(uint8 per);
void NVIC_ClrEnable(uint8 index);
void NVIC_SetEnable(uint8 index);

#endif  /* NVIC_INT_H_ */
