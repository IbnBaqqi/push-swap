/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulba <sabdulba@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/01 08:11:00 by sabdulba          #+#    #+#             */
/*   Updated: 2025/01/03 07:29:16 by sabdulba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	which_sort(t_node **stack_a, t_node **stack_b)
{
	int	size;

	size = list_size(stack_a);
	if (size < 4)
	{
		(void)stack_b;
		sort_three(stack_a); //TODO
	}
	else
		return ;
		//big_guns(stack_a, stack_b); // TODO
}