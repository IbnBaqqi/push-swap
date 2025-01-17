/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swaps.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulba <sabdulba@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/01 01:03:24 by sabdulba          #+#    #+#             */
/*   Updated: 2025/01/04 20:59:01 by sabdulba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	swap_nod(t_node *a, t_node *b, char *rule, int output)
{
	int	temp;

	temp = a->value;
	a->value = b->value;
	b->value = temp;
	if (output && rule[0])
		ft_printf("%s\n", rule);
}

void	double_swap(t_node *a, t_node *b, int output)
{
	swap_nod(a, a->next, "", output);
	swap_nod(b, b->next, "", output);
	if (output)
		ft_printf("ss\n");
}
