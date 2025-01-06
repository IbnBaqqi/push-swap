/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulba <sabdulba@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/01 10:12:03 by sabdulba          #+#    #+#             */
/*   Updated: 2025/01/06 09:39:12 by sabdulba         ###   ########.fr       */
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
void	swap_nod(t_node *a, t_node *b, char *rule, int output);

void	double_swap(t_node *a, t_node *b, int output);

/**
 * @brief
 * @param head
 * @param rule
 * @param output
 */
void	rotate(t_node **head, char *rule, int output);

void	reverse_rotate(t_node **head, char *rule, int output);

/**
 * @brief
 * @param a
 * @param b
 * @param output
 */
void	double_rotate(t_node **a, t_node **b, int output);

void	double_reverse(t_node **a, t_node **b, int output);

void	repeat_rotate(t_node **head, int num, char *ptr, int output);

void	repeat_push(t_stacks *stacks, int num, char *ptr, int output);

void	repeat_reverse(t_node **head, int num, char *rule, int output);

void	repeat_double_rotate(t_node **x, t_node **y, int num, int output);

void	repeat_double_reverse(t_node **x, t_node **y, int num, int output);