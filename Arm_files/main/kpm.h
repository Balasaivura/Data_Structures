//kpm.h
#include "types.h"
#define ROW0 16
#define ROW1 17
#define ROW2 18
#define ROW3 19
#define COL0 20
#define COL1 21
#define COL2 22
#define COL3 23

void InitKPM(void);
u32  ColScan(void);
u32  RowCheck(void);
u32  ColCheck(void);
u32  KeyScan(void);

