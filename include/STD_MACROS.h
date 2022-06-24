#ifndef STD_MACROS_H_
#define STD_MACROS_H_

#define SET_BIT(PORT,PIN)   PORT|=(1<<PIN) 

#define CLR_BIT(PORT,PIN)   PORT&=~(1<<PIN)

#define GET_BIT(PORT,PIN)   PORT&(1<<PIN)


#endif  /* STD_MACROS_H_ */