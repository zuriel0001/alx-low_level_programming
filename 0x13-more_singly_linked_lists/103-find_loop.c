#include "lists.h"


/**
 * *find_listint_loop -  a function that finds the loop in a linked list
 *
 * @head: pointer to first node
 *
 * Return: address of the node where loop starts, or NULL  if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *double_jump;
	listint_t *each_node;

	if (head == NULL)
		return (NULL);

	each_node = head;
	double_jump = head;

	while (each_node && double_jump && double_jump->next)
	{
		double_jump = double_jump->next->next;
		each_node = each_node->next;

		if (double_jump == each_node)
		{

			each_node = head;
			while (each_node != double_jump)
			{
				each_node = each_node->next;
				double_jump = double_jump->next;
			}
			return (double_jump);
		}
	}
	return (NULL);
}
