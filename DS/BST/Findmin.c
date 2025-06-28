#include"myheader.h"
struct BST *Findmin(struct BST *ptr)
{
	if(ptr->left)
		return Findmin(ptr->left);
	return ptr;
}
