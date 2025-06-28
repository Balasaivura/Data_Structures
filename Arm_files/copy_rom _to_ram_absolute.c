#include "types.h"
const s8 s[] __attribute__((at(0x100)))="Embedded c program";
s8 d[50] __attribute__((at(0x40000100)));
main()
{
u32 i;
for(i=0;s[i];i++)
d[i]=s[i];
while(1);
}
