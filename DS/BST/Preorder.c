#include"myheader.h"
void Preorder(struct BST *ptr)
{
	if(ptr)
	{
		printf("%d ",ptr->data);
		Preorder(ptr->left);
		Preordr(ptr->right);
	}
}
