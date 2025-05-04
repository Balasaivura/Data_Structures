#include<stdio.h>
int main()
// with y value modified
{
        int x,y;
        int cnt,v;
        v=1;cnt=0;
        scanf("%d %d",&x,&y);
        while(--y){
                v=v*x;
                cnt++;
        }
        printf("%d is raise to %d are %d",x,y,v);
}
	
// without y value modified	
/*{
	int x,y;
	int cnt,v;
	v=1;cnt=0;
	scanf("%d %d",&x,&y);
	while(cnt<y){
		v=v*x;
		cnt++;
	}
	printf("%d is raise to %d are %d",x,y,v);
}
*/
