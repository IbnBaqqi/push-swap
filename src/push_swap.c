/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulba <sabdulba@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 14:57:22 by sabdulba          #+#    #+#             */
/*   Updated: 2025/01/01 07:58:10 by sabdulba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	push_swap(int ac, char **av)
{
	t_node	**stack_a;
	t_node	**stack_b;
	if (ac < 3)
		error_exit(-1, "Invalid parameters");
	stack_a = malloc(sizeof(t_node *));
	stack_b = malloc(sizeof(t_node *));
	*stack_a = NULL;
	*stack_b = NULL;
	if (!valid_check(ac, av, stack_a))
	{
		free_stacks(stack_a, stack_b);
		ft_printf("Error Occured\n");
		return (1);
	}
	if (check_sort(stack_a))
		error_exit(0, "Stack already sorted");
	return (0);
}

int	main(int ac, char **av)
{
	int a = push_swap(ac, av);
	if (a == 1)
		ft_printf("Error\n");
	else
		ft_printf("Success\n");
	return (0);
}
