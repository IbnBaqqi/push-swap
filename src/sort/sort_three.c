/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulba <sabdulba@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 09:05:12 by sabdulba          #+#    #+#             */
/*   Updated: 2025/01/04 20:59:12 by sabdulba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

static void	mover(t_node **head_ref, int mid_val, int prev_val, int next_val)
{
	if (mid_val > prev_val && mid_val > next_val)
	{
		if (prev_val > next_val)
			reverse_rotate(head_ref, "rra", 1);
		else if (prev_val < next_val)
			swap_nod(*head_ref, (*head_ref)->next, "sa", 1);
	}
	else if (mid_val < prev_val && mid_val < next_val)
	{
		if (prev_val > next_val)
			rotate(head_ref, "ra", 1);
		else
			swap_nod(*head_ref, (*head_ref)->next, "sa", 1);
	}
	else
		swap_nod(*head_ref, (*head_ref)->next, "sa", 1);
}

void	sort_three(t_node **head_ref, char check_cyclic)
{
	int				prev_val;
	t_node			*mid_node;
	int				next_val;
	t_node_details	*mid;

	if (check_sort(head_ref) || (check_cyclic == 'y' && is_cyclic(head_ref)))
		return ;
	if (list_size(head_ref) == 2)
		return (swap_nod(*head_ref, (*head_ref)->next, "sa", 1));
	mid = mid_details(head_ref);
	mid_node = mid->node;
	prev_val = mid_node->prev->value;
	next_val = mid_node->next->value;
	mover(head_ref, mid_node->value, prev_val, next_val);
	sort_three(head_ref, check_cyclic);
	free(mid);
}
