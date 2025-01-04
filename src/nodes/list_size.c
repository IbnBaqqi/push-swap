/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_size.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulba <sabdulba@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 15:22:41 by sabdulba          #+#    #+#             */
/*   Updated: 2025/01/04 15:23:15 by sabdulba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	list_size(t_node **head)
{
	t_node	*temp;
	int		size;

	if (!head)
		return (0);
	size = 0;
	temp = *head;
	while (temp)
	{
		size++;
		temp = temp->next;
	}
	return (size);
}
