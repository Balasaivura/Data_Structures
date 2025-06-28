#include<stdio.h>
#include<stdlib.h>

struct stack
{
	int data;
	struct stack *link;
};
struct stack *top;
void Push(int);
int Pop();
int Peek();

int main()
{
	int val,choice;
	while(1)
	{
		printf("1.Push 2.Pop 3.Peek 4.exit\n");
		printf("Enter the choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:printf("Enter the data to be pushed\n");
			       scanf("%d",&val);
			       Push(val);
			       break;
			case 2:if(top==NULL)
				       printf("Stack is Empty\n");
			       else
				       printf("data poped is %d\n",Pop());
			       break;
			case 3:if(top==NULL)
				       printf("Stack is Empty\n");
			       else
				       printf("data pointing to top of the stack is %d\n",Peek());
			       break;
			case 4:exit(0);
		}
	}
}

void Push(int d)
{
	struct stack *newnode=NULL;
	newnode=calloc(1,sizeof(struct stack));
	if(newnode==NULL)
	{
		printf("newnode not created\n");
	}
	else
	{
		newnode->data=d;
		newnode->link=top;
		top=newnode;
	}
}

int Pop()
{
	struct stack *temp=NULL;
	int val;
	temp=top;
	top=top->link;
	val=temp->data;
	free(temp);
	return val;
}

int Peek()
{
	return top->data;
}
