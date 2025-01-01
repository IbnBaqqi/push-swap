/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulba <sabdulba@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/01 10:12:03 by sabdulba          #+#    #+#             */
/*   Updated: 2025/01/01 10:13:20 by sabdulba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//OPERATIONS

/**
 * @brief A fuction to push from a stack to another stack
 * @param stack_src
 * @param stack_dst
 * @param rule The rule to follow i.e push a(pa) or push b(pb)
 * @param output To check if output is needed to be printed or not
 */
void	push(t_node **stack_src, t_node **stack_dst, char *rule, int output);

/**
 * @brief A function to swap nodes value in a list
 * @param a Node 1
 * @param b Node 2
 * @param rule The rule to follow i.e swap a(sa) or swap b(sb)
 * @param output To check if output is needed to be printed or not
 */
void	swap(t_node *a, t_node *b, char *rule, int output);

/**
 * @brief
 * @param head
 * @param rule
 * @param output
 */
void	rotate(t_node **head, char *rule, int output);

/**
 * @brief
 * @param a
 * @param b
 * @param output
 */
void	double_rotate(t_node **a, t_node **b, int output);