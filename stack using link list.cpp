#include <stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* link;
};

struct node* head=NULL;

void push(int data)
{
	struct node* temp =(struct node*)malloc(sizeof(struct node));

	if (!temp)
	{
		printf("\nStack Overflow");
		exit(1);
	}
	if(head==NULL){
        temp->data=data;
        temp->link=NULL;
        head=temp;
	}
	else{
	 temp->data = data;
     temp->link = head;
     head = temp;
	}
}

int isEmpty()
{
	return head == NULL;
}

int top()
{
	if (!isEmpty())
		return head->data;
	else
		exit(1);
}

void pop()
{
	struct node* temp =(struct node*)malloc(sizeof(struct node));

	if (top == NULL)
	{
		printf("\nStack Overflow\n");
		exit(1);
	}
	else
	{
		temp = head;
		head = head->link;
		free(temp);
	}
}

void display()
{
	struct node* temp;

	if (head == NULL)
	{
		printf("\nStack Overflow");
		exit(1);
	}
	else
	{
		temp = head;
		while (temp != NULL)
		{
			printf("%d ",temp->data );
			temp = temp->link;
		}
		printf("\n");
	}
}

int main()
{
	push(11);
	push(22);
	push(33);
	push(44);
	display();
	printf( "\nTop element is %d\n",top() );
	pop();
	pop();
	display();
    printf( "\nTop element is %d\n",top() );
	return 0;
}
