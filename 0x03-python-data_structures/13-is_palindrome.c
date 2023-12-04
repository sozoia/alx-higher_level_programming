#include "lists.h"

/**
 * is_palindrome - check for palindrome linked list
 * @head: head of list
 * Return: 1 if palindrome of 0 if not
*/
int is_palindrome(listint_t **head)
{
	listint_t *fast, *slow, *new;

	if (!(*head))
		return (1);

	fast = (*head);
	slow = fast;
	new = NULL;

	while(1)
	{
		fast = fast->next->next;
		slow = slow->next;
		if (!fast->next->next)
		{	/*case even:*/
			new = slow->next;
			break;
		}
		else if (!fast->next)
		{	/*case odd*/
			new = slow->next->next;
			break;
		}
	}

	slow = (*head);
	while (new)
	{
		if (new->n != slow->n)
			return(1);
		if (new->next && slow->next)
		{
			new = new->next;
			slow = slow->next;
		}
		else
			break;
	}
	return(0);
}