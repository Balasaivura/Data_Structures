#include"types.h"
void Init_UART0(void);
void U0_TxByte(u8);
u8 U0_RxByte(void);
void uart0_isr(void)__irq;
