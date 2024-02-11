#include <stdio.h>
#include <stdlib.h>

void display();

typedef struct Node
{
	int data;
	struct Node* next;
}node;

int main()
{
	node* firstnode;
	node* secondnode;
	node* thirdnode;
	node* fourthnode;

	firstnode = (node*)malloc(sizeof(node));
	secondnode = (node*)malloc(sizeof(node));
	thirdnode = (node*)malloc(sizeof(node));
	fourthnode = (node*)malloc(sizeof(node));
	
        firstnode->data = 10;
        secondnode->data = 20;
        thirdnode->data = 30;
        fourthnode->data = 40;

		
	firstnode->next = secondnode;
	secondnode->next = thirdnode;
	thirdnode->next = fourthnode;
	fourthnode->next = NULL;

	display(firstnode);
	return (0);
}

void display(node* ptr)
{
	while (ptr != NULL)
	{
		printf("element: %d\n", ptr->data);
		ptr = ptr->next;
	}
}
