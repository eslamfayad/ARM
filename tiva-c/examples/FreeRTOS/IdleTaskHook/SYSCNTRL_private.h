#ifndef _SYSCNTRL_PRIVATE_H_
#define _SYSCNTRL_PRIVATE_H_
#define RCGCGPIO *((unsigned int *) 0x400FE608)
#define RCGCUART *((unsigned int *) 0x400FE618)
#define GPIOHBCTL * ((u32*) 0x400FE06C)
#define RCGCI2C * ((u32*) 0x400FE620)
#define RCGCADC * ((u32*) 0x400FE638)
#define RCGCTIMER * ((unsigned int *) 0x400FE604)

#endif