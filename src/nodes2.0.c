/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nodes2.0.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulba <sabdulba@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 21:40:51 by sabdulba          #+#    #+#             */
/*   Updated: 2024/12/31 22:10:13 by sabdulba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	list_size(t_node **head)
{
	t_node	*temp;
	int		size;

	if (!head)
		return (0);
	temp = *head;
	size = 0;
	while (temp)
	{
		temp = temp->next;
		size++;
	}
	return (size);
}

void	print_list(t_node **head)
{
	t_node	*temp;
	
	temp = *head;
	while (temp)
	{
		ft_printf("%d - ", temp->value);
		temp = temp->next;
	}
	ft_printf("\n");
}