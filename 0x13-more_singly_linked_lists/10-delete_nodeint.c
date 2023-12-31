#include "lists.h"
#include <stdlib.h>

/**
* delete_nodeint_at_index - deletes a node of a linked list
*                           at a particular index.
*
* @head: pointer to the beginning of the first element
*        in the linked list.
*
* @index: index of the node to be deleted and freed.
*
* Return: 1 if successful and -1 if failed.
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *node;
unsigned int k;
listint_t *tmp;

tmp = *head;
if (head == NULL || *head == NULL)
return (-1);

for (k = 0; k < index - 1 && tmp != NULL && index != 0; k++)
tmp = tmp->next;

if (tmp == 0)
return (-1);

if (index == 0)
{
node = tmp->next;
free(tmp);
*head = node;
}
else
{
if (tmp->next == NULL)
node = tmp->next;

else
node = tmp->next->next;
free(tmp->next);
tmp->next = node;
}

return (1);
}
