#include<stdio.h>
#include<dlfcn.h>
void main()
{
	int r,op,a,b;
	void *handler;
	int (*p)(int,int);
	printf("Enter the two numbers\n");
	scanf("%d %d",&a,&b);

	printf("Enter your option\n 1:sum\t2.mul\n");
	scanf("%d",&op);
	handler=dlopen("./libxyz.so",RTLD_LAZY);
	if(handler==0)
	{
		printf("%s\n",dlerror());
		return;
	}
	switch(op)
	{
		case 1:
			p=dlsym(handler,"sum");
			if(p==0)
			{
				printf("%s\n",dlerror());
				return;
			}
			r=(*p)(a,b);
			printf("r=%d\n",r);
			break;
		case 2:
			p=dlsym(handler,"mul");
			if(p==0)
			{
				printf("%s\n",dlerror());
				return;
			}
			r=(*p)(a,b);
			printf("r=%d\n",r);
			break;
		default:
			printf("Wrong input\n");
	}
	dlclose(handler);
}
