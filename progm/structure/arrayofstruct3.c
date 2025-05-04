#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdio_ext.h>
typedef struct contactDB
{
	char name[20];
	char email[20];
	char contact[20];
}cdb;
cdb* insert(cdb *);
void print(cdb *);
void *find(cdb *);
void *search(cdb *);
void *delete(cdb *);
void *sort(cdb *);
int cnt;
/*cdb* insert(cdb *p)
{
        if(MAX==cnt){
                printf("db is full");
        }
        else{
        p=realloc(p,(cnt+1)*sizeof(cdb));
        printf("Enter the name:");
        scanf("%s",p[cnt].name);
        printf("Enter the email:");
        scanf("%s",p[cnt].email);
        printf("Enter the contact:");
        scanf("%s",p[cnt].contact);
        cnt++;
        }
        return p;
}
void print(cdb *p)
{
        if(cnt==0)
                printf("DB is empty\n");
        else
        {
                for(int i=0;i<cnt;i++)
                {
                        printf("%s %s %s\n",p[i].name,p[i].email,p[i].contact);
                }
        }
}*/

int main()
{
	cdb *db=NULL;
	char ch;
	while(1)
	{
		printf("i.insert p.print d.delete f.find s.search S.sort e.exit\n");
		printf("Enter the choice\n");
		__fpurge(stdin);
		scanf("%c",&ch);
		switch(ch)
		{
			case 'i':db=insert(db);
				 break;
			case 'p':print(db);
				 break;
			case 'e':exit(0);
			case 'd':db=delete(db);
				 break;
			case 'f':find(db);
				 break;
			case 's':search(db);
				 break;
			case 'S':sort(db);
				 break;
		}

	}
}
cdb* insert(cdb *p)
{
        p=realloc(p,(cnt+1)*sizeof(cdb));
        printf("Enter the name:");
        scanf("%s",p[cnt].name);
        printf("Enter the email:");
        scanf("%s",p[cnt].email);
        printf("Enter the contact:");
        scanf("%s",p[cnt].contact);
        cnt++;
        return p;
}
void print(cdb *p)
{
	if(cnt==0)
		printf("DB is empty\n");
	else
	{
                for(int i=0;i<cnt;i++)
		{
			printf("%s %s %s\n",p[i].name,p[i].email,p[i].contact);
		}
	}
}
void *delete(cdb *p)
{
	char s1[20];
	int flag=0;
	printf("Enter the string to be delete\n");
	scanf("%s",s1);
	for(int i=0;i<cnt;i++)
	{
		if(strcmp(p[i].name,s1)==0)
		{
			memmove(p+i,p+i+1,(cnt-i-1)*sizeof(cdb));
			cnt--;
			p=realloc(p,cnt*sizeof(cdb));
			flag=1;
			break;
		}
	}
	if(flag==0)
		printf("%s is not found\n",s1);

}
void *search(cdb *p)
{
	char s1[20];
        int flag=0;
        printf("Enter the string to be delete\n");
        scanf("%s",s1);
        for(int i=0;i<cnt;i++)
        {
                if(strcmp(p[i].name,s1)==0)
                {
			printf("found at %d\n",i+1);
			flag=1;
			break;
		}
	}
	if(flag==0)
		printf("%s not found\n",s1);
}
void *find(cdb *p)
{
        char s1[20];
        int flag=0;
        printf("Enter the string to be delete\n");
        scanf("%s",s1);
        for(int i=0;i<cnt;i++)
        {
                if(strcmp(p[i].name,s1)==0)
                {
                        printf("%s %s %s\n",p[i].name,p[i].email,p[i].contact);
                        flag=1;
                }
        }
        if(flag==0)
                printf("%s not found\n",s1);
}
void *sort(cdb *ptr)
{
        int i,j,k;
        cdb s1[1];
        for(i=0;i<cnt;i++)
        {
                for(k=0;k<cnt-1;k++)
                {
                        if(strcmp(ptr[k].name,ptr[k+1].name)>0)
                        //if(strlen(ptr[k].name)<strlen(ptr[k+1].name))
                        {
                                memmove(&s1,&ptr[k],sizeof(cdb));
                                memmove(&ptr[k],&ptr[k+1],sizeof(cdb));
                                memmove(&ptr[k+1],&s1,sizeof(cdb));
                        }
                }
        }
}
