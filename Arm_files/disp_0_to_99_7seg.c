#include "seg.h"
#include "types.h"
#include "delay.h"
main()
{
	u32 i,j;
	init_mux7segs();
	while(1)
	{
		for(i=0;i<=99;i++)
		{
			for(j=1000;j>0;j--)
			{
				disp_mux_segs(i);
			}
		}
	}
}
