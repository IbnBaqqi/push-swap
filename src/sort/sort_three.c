/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulba <sabdulba@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 09:05:12 by sabdulba          #+#    #+#             */
/*   Updated: 2025/01/03 07:41:29 by sabdulba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

static int	identify_nodes(t_node **head, t_node **first, t_node **second, t_node **third)
{
	if (*head == NULL || (*head)->next == NULL)
		return 0;
	*first = *head;
	*second = (*head)->next;
	if ((*head)->next->next == NULL)
	{
		*third = NULL;
		return (1);
	}
	*third = (*head)->next->next;
	return (2);
}
static void	sort_three_nodes(t_node **head, t_node *first, t_node *second, t_node *third)
{
	if (third == NULL)
	{
		if (first->value > second->value)
			swap(*head, (*head)->next, "sa", 1);
		return ;
	}
	if (check_sort(head))
        return ;
	if (first->value > second->value && first->value > third->value)
	{
		if (second->value > third->value)
		{
			rotate(head, "ra", 1);
			swap(*head, (*head)->next, "sa", 1);
		}
		else
			rotate(head, "ra", 1);
	}
	else if (second->value > first->value && second->value > third->value)
	{
		if (first->value > third->value)
			reverse_rotate(head, "rra", 1);
		else
		{
			swap(*head, (*head)->next, "sa", 1);
			rotate(head, "ra", 1);
		}
	}
	else if (third->value > first->value && third->value > second->value)
	{
		if (first->value > second->value)
			swap(*head, (*head)->next, "sa", 1);
	}
}

void	sort_three(t_node **head)
{
	t_node	*first = NULL;
	t_node	*second = NULL;
	t_node	*third = NULL;
	int		node_count;

	node_count = identify_nodes(head, &first, &second, &third);
	if (node_count == 0)
		return ;
	while (!check_sort(head))
	{
		sort_three_nodes(head, first, second, third);
		identify_nodes(head, &first, &second, &third);
	}
}
// void	sort_three_max(t_node **head, char check_cyclic)
// {
// 	if (!*head || !(*head)->next)
// 		return ;
// 	if (list_size(head) == 2)
// 	{
// 		if ((*head)->value > (*head)->next->value)
// 			swap(*head, (*head)->next, "sa", 1);
// 		return ;
// 	}
// 	t_node *first = *head;
//     t_node *second = first->next;
//     t_node *third = second->next;

//     if (first->value > second->value && first->value > third->value)
//     {
//         if (second->value > third->value)
//         {
//             rotate(head, "ra", 1);
//             swap_nodes(*head, (*head)->next, "sa", 1);
//         }
//         else
//             rotate(head, "ra", 1);
//     }
//     else if (second->value > first->value && second->value > third->value)
//     {
//         if (first->value > third->value)
//             reverse_rotate(head, "rra", 1);
//         else
//         {
//             swap_nodes(*head, (*head)->next, "sa", 1);
//             rotate(head, "ra", 1);
//         }
//     }
//     else if (third->value > first->value && third->value > second->value)
//         if (first->value > second->value)
//             swap_nodes(*head, (*head)->next, "sa", 1);
// }
