
#include "lists.h"

int check_cycle(listint_t *list)
{
	listint_t *home,*step,*temp;
	int i,j;

	if (!list)
		return(0);
	else if (list == list->next)
		return(1);

	home = list;
	step = list;
	for(j = 1; step; j++)
	{
		if (step->next)
		{
			step = step->next;
			temp = home;
			for(i = 1; temp->next; i++)
			{
				temp = temp->next;
				if(step == temp)
				{
					if(i != j)
						return(1);
				}
			}
		}
		else
			break;
	}
	return(0);
}
/*
int main(void)
{
    listint_t *head;
    listint_t *current;
    listint_t *temp;
    int i;

    head = NULL;
    add_nodeint(&head, 0);
    add_nodeint(&head, 1);
    add_nodeint(&head, 2);
    add_nodeint(&head, 3);
    add_nodeint(&head, 4);
    add_nodeint(&head, 98);
    add_nodeint(&head, 402);
    add_nodeint(&head, 1024);
    print_listint(head);

    if (check_cycle(head) == 0)
        printf("Linked list has no cycle\n");
    else if (check_cycle(head) == 1)
        printf("Linked list has a cycle\n");

    current = head;
    for (i = 0; i < 4; i++)
        current = current->next;
    temp = current->next;
    current->next = head;

    if (check_cycle(head) == 0)
        printf("Linked list has no cycle\n");
    else if (check_cycle(head) == 1)
        printf("Linked list has a cycle\n");

    current = head;
    for (i = 0; i < 4; i++)
        current = current->next;
    current->next = temp;

    free_listint(head);

    return (0);
}
*/