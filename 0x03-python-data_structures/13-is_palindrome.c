#include "lists.h"

void rev(int **arr, int len)
{
	int i,j,k;
	k = len / 2;

	for(i = 0; i < k; i++)
	{
		j = *arr[i];
		*arr[i] = *arr[len];
		*arr[len] = j;
		++i;
		--len;
	}
}

int count(listint_t *head)
{
	listint_t *temp;

	if(!head)
		return(0);

	temp = head;

	int i = 0;
	while(temp)
	{
		if(temp->next)
			temp = temp->next;
		else
			temp = NULL;
		++i;
	}
	/*printf("len=%d\n",i); */
	return(i);
}

int is_palindrome(listint_t **head)
{
	int len = 0, *arr,i = 0,j;
	int pal = 0;    /*palndrome*/
	listint_t *temp = NULL;

	if (!(*head))
		return(1);

	temp = (*head);
	len = count(temp);
	arr = malloc(sizeof(int) * (len / 2) );

	while(i < len/2 && temp)
	{   /*save the half of elements*/
		arr[i] = temp->n;
		if (temp->next)
			temp = temp->next;
		else
			break;
		i++;
	}
	rev(&arr, len / 2);

	if (len % 2 != 0 && temp->next)
		temp = temp->next;

	for (j = 0; temp; j++)
	{
			if(temp->n != arr[j])
			{
				pal = 1;
				break;
			}
		if(temp->next)
			temp = temp->next;
		else
		temp = NULL;
	}
	return(pal);
}

