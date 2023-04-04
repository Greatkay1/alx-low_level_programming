#include "lists.h"
/**
 * sum_listint - calculates the sum of all the data.
 * @head: a pointer to the head.
 * okhai lists.
 *
 * Return:0 if the list is empty
 */
int sum_listint(listint_t *head)
{
int sum = 0;

while (head)
{
sum += head->n;
head = head->next;
}
return (sum);
}
