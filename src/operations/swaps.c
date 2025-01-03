/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swaps.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulba <sabdulba@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/01 01:03:24 by sabdulba          #+#    #+#             */
/*   Updated: 2025/01/02 23:14:32 by sabdulba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	push(t_node **stack_src, t_node **stack_dst, char *rule, int output)
{
	t_node	*del_node;

	del_node = delete_node(stack_src, *stack_src);
	add_node_head(stack_dst, del_node);
	if (output && *rule)
		ft_printf("%s\n", rule);
}
void	swap(t_node *a, t_node *b, char *rule, int output)
{
	int	temp;

	temp = a->value;
	a->value = b->value;
	b->value = temp;
	if (output && *rule)
		ft_printf("%s\n", rule);
}

void	double_swap(t_node *a, t_node *b, int output)
{
	swap(a, a->next, "", output);
	swap(b, b->next, "", output);
	if (output)
		ft_printf("ss\n");
}