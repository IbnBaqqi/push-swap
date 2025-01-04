/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulba <sabdulba@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 15:20:41 by sabdulba          #+#    #+#             */
/*   Updated: 2025/01/04 15:33:01 by sabdulba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	push(t_node **stack_src, t_node **stack_dst, char *rule, int output)
{
	t_node	*del_node;

	del_node = delete_node(stack_src, *stack_src);
	add_node_head(stack_dst, del_node);
	if (output && rule[0])
		ft_printf("%s\n", rule);
}
