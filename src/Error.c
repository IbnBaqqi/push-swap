/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulba <sabdulba@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 22:07:08 by sabdulba          #+#    #+#             */
/*   Updated: 2024/12/31 00:54:04 by sabdulba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	free_stack(t_node **head)
{
	t_node	*temp;

	if (!head)
		return ;
	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
}

void	free_stacks(t_node **stack_a, t_node **stack_b)
{
	free_stack(stack_a);
	free_stack(stack_b);
}

void	free_tab(char **str)
{
	int	i;

	i = 0;
	while (str[i] != NULL)
	{
		free(str[i]);
		i++;
	}
	free(str);
}