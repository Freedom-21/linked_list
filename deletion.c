#include <stdio.h>
#include <stdlib.h>

void delete(node** head, int key)
{
	node *ptr = *head, *prev = NULL;

	if (ptr != NULL && ptr->data == key)
	{
		*head = ptr->next;
		free(ptr);
		return;
	}

	while (ptr != NULL && ptr->data != key)
	{
		prev = ptr;
		ptr = ptr->next;
	}

	if (ptr == NULL)
		return;

	prev->next = ptr->next;
	free(ptr);
}
