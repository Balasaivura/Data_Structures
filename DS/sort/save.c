#include"myheader.h"
void save(STUDENT *head)
{
	FILE *fp;
	int size=sizeof(STUDENT)-sizeof(STUDENT*);
	if(head==NULL)
	{
		printf("List is empty\n");
		return ;
	}
	else
	{
		fp=fopen("Stu","w");
		if(fp==NULL)
		{
			printf("File not found\n");
			return ;
		}
		while(head)
		{
			fwrite(head,size,1,fp);
			head=head->link;
		}
		fclose(fp);
	}
}
