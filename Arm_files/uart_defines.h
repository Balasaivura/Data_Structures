#define FOSC 12000000//MHz
#define CCLK (FOSC*5)
#define PCLK (CCLK/4)
#define BAUD 9600
#define DIVISOR (PCLK/(16*BAUD))

//defines for sfr UxLCR
#define _8BITS 3
#define WORD_LEN_SEL_BITS _8BITS
#define DLAB_BIT 7

//defines for sfr UxLSR
#define DR_BIT 0
#define TEMT_BIT 6

#define TXD0_PIN PIN_FUNC2
#define RXD0_PIN PIN_FUNC2

#define UART_INTS_ENABLE 1
#define UART0_VIC_CHNO 6

//sfr defines UxIER
#define RDA_INT_EN_BIT 4
#define THRE_INT_EN_BIT 1

//sfr defines UxIIR
#define U0_RDA_INT_STATUS 4
#define U0_THRE_INT_STATUS 2

#define U0_TX_INT_STATUS_LED 2
#define U0_RX_INT_STATUS_LED 3
