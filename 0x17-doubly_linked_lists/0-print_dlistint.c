/*
* Task_number: No 0
* Task_Title: Print list
* File_name: 0-print_dlistint.c
*
* Created: On November 9, 2023
* Author: Bereket Dereje Mekonnen
* Cohort: 18 (Eighteen)
*
* Project_Title: 0x17. C - Doubly linked lists
* GitHub_Repository: alx-low_level_programming
* Directory: 0x17-doubly_linked_lists
*/


#include "lists.h"
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

/**
* print_dlistint - prints all the elements
*                   of a dlistint_t list
*
* @h: head of the list
*
* Return: the number of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
int nnode;

nnode = 0;

if (h == NULL)
return (nnode);

while (h->prev != NULL)
h = h->prev;

while (h != NULL)
{
printf("%d\n", h->n);
nnode++;
h = h->next;
}

return (nnode);
}
