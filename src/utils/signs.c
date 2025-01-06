/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   signs.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulba <sabdulba@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 12:50:35 by sabdulba          #+#    #+#             */
/*   Updated: 2025/01/06 13:22:51 by sabdulba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	both_positive(t_node *temp)
{
	if (temp->exit_cost >= temp->target_cost)
		temp->priority = temp->exit_cost;
	else if (temp->target_cost > temp->exit_cost)
		temp->priority = temp->target_cost;
}

void	both_negative(t_node *temp)
{
	if (temp->exit_cost <= temp->target_cost)
		temp->priority = temp->exit_cost * -1;
	else if (temp->exit_cost > temp->target_cost)
		temp->priority = temp->target_cost * -1;
}

void	exit_zero(t_node *temp)
{
	if (temp->target_cost >= 0)
		temp->priority = temp->target_cost;
	else
		temp->priority = temp->target_cost * -1;
}

void	target_zero(t_node *temp)
{
	if (temp->exit_cost >= 0)
		temp->priority = temp->exit_cost;
	else
		temp->priority = temp->exit_cost * -1;
}
