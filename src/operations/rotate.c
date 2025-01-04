/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulba <sabdulba@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/01 06:46:27 by sabdulba          #+#    #+#             */
/*   Updated: 2025/01/04 20:58:48 by sabdulba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	rotate(t_node **head, char *rule, int output)
{
	t_node	*del_node;

	del_node = delete_node(head, *head);
	add_node_tail(head, del_node);
	if (output && rule[0])
		ft_printf("%s\n", rule);
}

void	double_rotate(t_node **a, t_node **b, int output)
{
	rotate(a, "", output);
	rotate(b, "", output);
	ft_printf("rr\n");
}

void	reverse_rotate(t_node **head, char *rule, int output)
{
	t_node	*last_nod;
	t_node	*del_nod;

	last_nod = last_node(*head);
	del_nod = delete_node(head, last_nod);
	add_node_head(head, del_nod);
	if (output && rule[0])
		ft_printf("%s\n", rule);
}

void	double_reverse(t_node **a, t_node **b, int output)
{
	reverse_rotate(a, "", output);
	reverse_rotate(b, "", output);
	if (output)
		ft_printf("rrr\n");
}
