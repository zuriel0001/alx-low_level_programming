#include "lists.h"

size_t print_listint_safe(const listint_t *head);


/**
* get_listint_loop - Counts the number of unique nodes
*                     in a looped listint_t linked list.
* @head: a pointer to the head of the listint_t
*
* Return: 0 if the list is not looped
*         else return the number of unique nodes in the list.
*/
size_t get_listint_loop(const listint_t *head)
{
	const listint_t *ptr1, *ptr2;
	size_t nodes;

	/* Check if the list is empty or only has one node */
	if (head == NULL || head->next == NULL)
		return (0);

	/* assign ptr1 to the next node from the head */
	ptr1 = head->next;

	/* and ptr2 to the node two steps ahead from the head */
	ptr2 = (head->next)->next;

	while (ptr2)
	{
		/* If ptr1 and ptr2 meet */
		if (ptr1 == ptr2)
		{
			/*assign ptr1 to head and move ptr1 and ptr2 forward until they meet again*/
			ptr1 = head;
			nodes = 1;
			for (; ptr1 != ptr2; nodes++)
			{
				ptr1 = ptr1->next;
				ptr2 = ptr2->next;
			}

			/* moving ptr1 through the full list */
			ptr1 = ptr1->next;

			while (ptr1 != ptr2)
			{
				nodes++;
				ptr1 = ptr1->next;
			}

			return (nodes);
		}

		/* Move ptr1 forward one node and ptr2 forward two nodes */
		ptr1 = ptr1->next;
		ptr2 = (ptr2->next)->next;
	}

	/* If there is no loop, return 0 */
	return (0);
}


/**
* print_listint_safe - prints a listint_t linked list safely.
* @head: a pointer to the head of the listint_t to print.
*
* Return: The number of nodes in the list.
*/
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, i = 0;

	nodes = get_listint_loop(head);

	if (nodes == 0)
	{
		/* iterate through each node in the list, printing its address and value */
		while (head && head != NULL)
		{
			nodes++;
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		/*iterating through each node in the list to the point where a loop begins*/
		for (i = 0; i < nodes; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		/* print the address and value of the first node in the loop */
		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
