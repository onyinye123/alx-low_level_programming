#include "lists.h"

/**
 * free_listint2 - frees a list memory
 * @head: poiinter to head node
 * Return: void
 */

void free_listint2(listint_t **head)
{
listint_t *ptr;
listint_t *tmp;
if (head != NULL)
{
ptr = *head;
while ((tmp = ptr) != NULL)
{
ptr = ptr->next;
free(tmp);
}
*head = NULL;
}
}
