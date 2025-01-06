/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulba <sabdulba@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 14:57:22 by sabdulba          #+#    #+#             */
/*   Updated: 2025/01/06 15:31:06 by sabdulba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	push_swap(int ac, char **av)
{
	t_node	**stack_a;
	t_node	**stack_b;

	if (ac < 2)
		return 0;
	stack_a = malloc(sizeof(t_node *));
	stack_b = malloc(sizeof(t_node *));
	*stack_a = NULL;
	*stack_b = NULL;
	if (!valid_check(ac, av, stack_a))
	{
		free_stacks(stack_a, stack_b);
        free(stack_a);
        free(stack_b);
		ft_putstr_fd("Error\n", 2);
		return (0);
	}
	if (check_sort(stack_a))
	{
		free_stacks(stack_a, stack_b);
		free(stack_a);
        free(stack_b);
		return (0);
	}
	which_sort(stack_a, stack_b);
	free_stacks(stack_a, stack_b);
	free(stack_a);
	free(stack_b);
	return (0);
}

int	main(int ac, char **av)
{
	push_swap(ac, av);
	return (0);
}
