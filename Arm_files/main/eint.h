
void Enable_EINT0(void);
void eint0_isr(void) __irq;
#define CFGPIN(WORD,PIN,FUNC) WORD=((PIN<16)?((WORD&~(3<<(PIN*2)))|(FUNC<<(PIN*2))):((WORD&~(3<<((PIN-16)*2)))|(FUNC<<((PIN-16)*2))))




