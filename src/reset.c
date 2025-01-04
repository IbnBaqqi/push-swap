/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reset.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulba <sabdulba@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 21:49:48 by sabdulba          #+#    #+#             */
/*   Updated: 2025/01/04 23:23:12 by sabdulba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	recalibrate(t_node **head)
{
	t_node	*temp;
	int		i;
	
	if (!head)
		return ;
	i = 0;
	temp = *head;
	while (temp)
	{
		temp -> list_index = i;
		temp = temp -> next;
		i++;
	}
}
