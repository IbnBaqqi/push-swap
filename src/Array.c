/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulba <sabdulba@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 23:59:52 by sabdulba          #+#    #+#             */
/*   Updated: 2025/01/05 00:30:32 by sabdulba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int *fill_array(t_node **stack_a)
{
	int		*array;
	t_node	*temp;
	int		i;

	i = 0;
	temp = *stack_a;
	array = malloc(sizeof(int) * list_size(stack_a));
	while (temp)
	{
		array[i] = temp->value;
		temp = temp->next;
		i++;
	}
	return (array);
}
void	index_array(t_node **stack_a)
{
	int		*array;
	t_node	*temp;
	int		i;

	i = 0;
	temp = *stack_a;
	array = fill_array(stack_a);
	quicK_sort(array); //TODO
	while (temp)
	{
		i = 0;
		while (i < list_size(stack_a))
		{
			if (temp->value == array[i])
				temp->order_index = i + 1;
			i++;
		}
		temp = temp->next;
	}
	free(array);
}