//lcd.h
#include"types.h"
void writelcd(u8);
void cmdlcd(u8);
void charlcd(u8);
void initlcd(void);
void strlcd(s8 *);
void U32lcd(u32);
void F32lcd(f32,u32);
void s32lcd(s32);
void LCD_writecustom(u8,u8*);

