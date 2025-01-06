/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeats.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulba <sabdulba@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 09:28:10 by sabdulba          #+#    #+#             */
/*   Updated: 2025/01/06 13:16:17 by sabdulba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	repeat_rotate(t_node **head, int num, char *ptr, int output)
{
	int	i;

	i = 0;
	while (i < num)
	{
		rotate(head, ptr, output);
		i++;
	}
}

void	repeat_push(t_stacks *stacks, int num, char *ptr, int output)
{
	int		i;
	t_node	**x;
	t_node	**y;

	i = 0;
	x = stacks->stack_a;
	y = stacks->stack_b;
	while (i < num)
	{
		push(x, y, ptr, output);
		i++;
	}
}

void	repeat_reverse(t_node **head, int num, char *rule, int output)
{
	int	i;

	i = 0;
	while (i < num)
	{
		reverse_rotate(head, rule, output);
		i++;
	}
}

void	repeat_double_rotate(t_node **x, t_node **y, int num, int output)
{
	int	i;

	i = 0;
	while (i < num)
	{
		double_rotate(x, y, output);
		i++;
	}
}

void	repeat_double_reverse(t_node **x, t_node **y, int num, int output)
{
	while (num < 0)
	{
		double_reverse(x, y, output);
		num++;
	}
}
