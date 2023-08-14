#include "lists.h"

/**
 * reverse - reverse second half of a list
 *
 * @head: head of the second half
 *
 * Return: (no return)
 *
 */
void reverse(listint_t **head)
{
	listint_t *previous;
	listint_t *current;
	listint_t *nxt;

	previous = NULL;
	current = *head;

	while (current != NULL)
	{
	nxt = current->next;
	current->next = previous;
	previous = current;
	current = nxt;
	}
	*head = previous;
}

/**
 * compare - compare two lists
 *
 * @h1: head of the first half
 * @h2: head of the second half
 *
 * Return: (1) equal, (0) not equal
 *
 */
int compare(listint_t *h1, listint_t *h2)
{
	listint_t *tmp1;
	listint_t *tmp2;

	tmp1 = h1;
	tmp2 = h2;

	while (tmp1 != NULL && tmp2 != NULL)
	{
	if (tmp1->n == tmp2->n)
		{
		tmp1 = tmp1->next;
		tmp2 = tmp2->next;
		}
	else
		{
		return (0);
		}
	}
	if (tmp1 == NULL && tmp2 == NULL)
	{
	return (1);
	}
	return (0);
}

/**
 * is_palindrome - checks if it is a palindrome
 *
 * @head: pointer to head of list
 *
 * Return: (0) true, (1) false
 *
 */
int is_palindrome(listint_t **head)
{
	listint_t *slow, *fast, *prev_slow;
	listint_t *scn_half, *middle;
	int palindrome;

	slow = fast = prev_slow = *head;
	middle = NULL;
	palindrome = 1;

	if (*head != NULL && (*head)->next != NULL)
	{
	while (fast != NULL && fast->next != NULL)
		{
		fast = fast->next->next;
		prev_slow = slow;
		slow = slow->next;
		}
	if (fast != NULL)
	{
	middle = slow;
	slow = slow->next;
	}
	scn_half = slow;
	prev_slow->next = NULL;
	reverse(&scn_half);
	palindrome = compare(*head, scn_half);

	if (middle != NULL)
	{
	prev_slow->next = middle;
	middle->next = scn_half;
	}
	else
		{
		prev_slow->next = scn_half;
		}
	}
	return (palindrome);
}

