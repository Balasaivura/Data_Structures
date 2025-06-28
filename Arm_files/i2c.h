//i2c.h
#include "types.h"
void i2c_init(void);
void i2c_start(void);
void i2c_stop(void);
void i2c_write(u8);
u8 i2c_nack(void);
u8 i2c_mack(void);
void i2c_restart(void);
