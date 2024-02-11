#include <stdio.h>
#include <stdlib.h>

void insetBeg(node** head, int new_data)
{
	node* new = (node*)malloc(sizeof(node));
	new->data = new_data;
	new->next = (*head);
	(*head) = new;
}

void insertEnd(node** head, int new_data)
{
	node* new = (node*)malloc(sizeof(node));
	node* lastnode = *head;

	new->data = new_data;
	new->next = NULL;

	if (*head == NULL)
	{
		(*head) = new;
		return;
	}

	while (lastnode->next != NULL)
		lastnode = lastnode->next;
	
	lastnode->next = new;
	return;
}

void insertAfterNode(node* prev_node, int new_data)
{
	if (prev_node == NULL)
		return;

	node* new = (node*)malloc(sizeof(node));
	new->data = new_data;
	new->next = prev_node->next;

	prev_node->next = new;
}
