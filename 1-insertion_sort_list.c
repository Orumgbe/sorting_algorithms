#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include "sort.h"
void swap_node(listint_t **list, listint_t *first, listint_t *second);

/**
 * insertion_sort_list - Sorts a doubly linked list in ascending order
 * @list: double pointer to head node
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *node1, *node2, *current;

	if (*list && (*list)->next)
	{
		node1 = *list;
		node2 = node1->next;
		current = *list;
	}

	while (node1 && node2 && current)
	{
		current = node2;
		while (node2->n < node1->n)
		{
			swap_node(list, node1, node2);
			print_list(*list);
			if (node2->prev)
				node1 = node2->prev;
			else
				break;
		}
		node1 = current;
		node2 = current->next;
	}
}

/**
 * swap_node - swaps two nodes in the linked list
 * @list: head node of list
 * @first: first node to swap
 * @second: second node to swap
 * Return: void
 */
void swap_node(listint_t **list, listint_t *first, listint_t *second)
{
	listint_t *prev, *next;

	prev = first->prev;
	next = second->next;

	if (prev != NULL)
		prev->next = second;
	else
		*list = second;

	first->prev = second;
	first->next = next;
	second->prev = prev;
	second->next = first;

	if (next)
		next->prev = first;
}
