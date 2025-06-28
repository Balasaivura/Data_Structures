#include"myheader.h"
struct BST *Del(struct BST *ptr,int d)
{
	struct BST *temp=NULL;
	if(ptr==NULL)
	{
		printf("%d is not found\n",d);
	}
	else if(d<ptr->data)
	{
		ptr->left=Del(ptr->left,d);
	}
	else if(d>ptr->data)
	{
		ptr->right=Del(ptr->right,d);
	}

