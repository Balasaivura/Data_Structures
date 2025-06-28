#define FOSC 12000000
#define CCLK (FOSC*5)
#define PCLK (CCLK/4)
#define ADCCLK 3000000 
#define CLKDIV ((PCLK/ADCCLK)-1)

//SFR defines For ADCR
#define NO_CHANNEL 0
#define CHO 1<<0
#define CLKDIV_BITS 8//@bit 8 to 15
#define PDN_BIT 21
#define START_BIT 24

//SFR defines for ADDR
#define RESULT_BITS 6//@bit 6 to 15
#define DONE_BIT 31//@bit 31
