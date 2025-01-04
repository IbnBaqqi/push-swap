/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulba <sabdulba@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 21:40:51 by sabdulba          #+#    #+#             */
/*   Updated: 2025/01/04 20:58:31 by sabdulba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

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
