#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdio_ext.h>
#define max 3
void print(char (*)[3][20]);
void insert(char (*)[3][20]);
void find(char (*)[3][20]);
void delete(char (*)[3][20]);
void sort(char(*)[3][20]);
void sort1(char(*)[3][20]);
int cnt;
int main()
{
	char cdb[max][3][20];
	char ch;
	__fpurge(stdin);
	while(1)
	{
		__fpurge(stdin);
		printf("i.insert p.print f.find d.delete s.sort S.sort1 e.exit\n");
		ch=getchar();
		switch(ch)
		{
			case 'i':insert(cdb);
				 break;
			case 'p':print(cdb);
				 break;
			case 'f':find(cdb);
				 break;
			case 'd':delete(cdb);
				 break;
			case 's':sort(cdb);
				break;
			case 'S':sort1(cdb);
				break;
			case 'e':exit(0);
		}
	}
}
void insert(char (*p)[3][20])
{
	int i,j;
	if(cnt==max)
	{
		printf("DB is full\n");
	}
	else
	{
		printf("Enter name:");
		scanf("%s",p[cnt][0]);
		printf("Enter email:");
		scanf("%s",p[cnt][1]);
		printf("Enter contact:");
		scanf("%s",p[cnt][2]);
		/*printf("Enter name:");
		fgets(p[cnt][0],20,stdin);
		if(p[strlen(p[cnt][0])-1]=='\n')
			p[strlen(p[cnt][0])-1]='\0';
		printf("Enter email:");
		fgets(p[cnt][1],20,stdin);
		if(p[strlen(p[cnt][1])-1]=='\n')
			p[strlen(p[cnt][1])-1]='\0';
		printf("Enter contact:");
		fgets(p[cnt][2],20,stdin);
		if(p[strlen(p[cnt][2])-1]=='\n')
			p[strlen(p[cnt][2])-1]='\0';*/
		cnt++;
	}
}
void print(char (*p)[3][20])
{
	int i;
	if(cnt==0)
	{
		printf("DB is empty\n");
	}
	else
	{
		for(i=0;i<cnt;i++)
		{
			printf("Name: %s\n",p[i][0]);
			printf("Email: %s\n",p[i][1]);
			printf("Contact: %s\n",p[i][2]);
		}
		printf("\n");
	}
}
void find(char (*p)[3][20])
{
	int i;
	char s[20];
	printf("Enter the string to be search\n");
	scanf("%s",s);
	for(i=0;i<cnt;i++)
	{
		if(strstr(p[i][0],s)||strstr(p[i][1],s)||strstr(p[i][2],s))
		{
			printf("found at: %d\n",i+1);
			return 0;
		}
	}
	printf("%s Not found\n",s);
}
void delete(char (*p)[3][20])
{
	int i;
	char s[20];
	printf("Enter the string to be delete\n");
	scanf("%s",s);
	for(i=0;i<cnt;i++)
	{
		if(strcmp(p[i][0],s)==0)
		{
			memmove(p+i,p+i+1,(cnt-i-1)*sizeof(*p));
			cnt--;
			break;
		}
	}
}
void sort(char(*p)[3][20])
{
	int i,j;
	char temp[3][20];
	for(i=0;i<cnt;i++)
	{
		for(j=0;j<cnt-1;j++)
		{
			if(strcmp(p[i][0],p[j][0])>0)
			{
				memcpy(temp,p[i],sizeof(*p));
				memcpy(p[i],p[j],sizeof(*p));
				memcpy(p[j],temp,sizeof(*p));
			}
		}
	}
}
void sort1(char(*p)[3][20])
{
        int i,j;
        char temp[3][20];
        for(i=0;i<cnt;i++)
        {
                for(j=0;j<cnt-1;j++)
                {
                        if(strlen(p[i][0])>strlen(p[j][0]))
                        {
                                memcpy(temp,p[i],sizeof(*p));
                                memcpy(p[i],p[j],sizeof(*p));
                                memcpy(p[j],temp,sizeof(*p));
                        }
                }
        }
}
