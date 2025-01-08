/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulba <sabdulba@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 14:57:19 by sabdulba          #+#    #+#             */
/*   Updated: 2025/01/08 08:42:53 by sabdulba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <ctype.h>
# include <limits.h>
# include "../lib/libft/inc/libft.h"

typedef struct s_node
{
	int				value;
	int				list_index;
	int				order_index;
	int				exit_cost;
	int				target_cost;
	int				optimized;
	int				priority;
	struct s_node	*next;
	struct s_node	*prev;
}	t_node;

typedef struct s_stacks
{
	struct s_node	**stack_a;
	struct s_node	**stack_b;
}	t_stacks;

typedef struct s_node_details
{
	int				index;
	int				value;
	struct s_node	*node;
}	t_no_de;

typedef struct s_details
{
	t_no_de	*min;
	t_no_de	*mid;
	t_no_de	*max;
}	t_detai;

int		push_swap(int ac, char **av);

//ERROR & FREE
void	free_tab(char **str);
void	free_stack(t_node **head);
void	free_stacks(t_node **stack_a, t_node **stack_b);
void	which_sort(t_node **stack_a, t_node **stack_b);

void	sort_three(t_node **head_ref, char check_cyclic);
void	index_array(t_node **stack_a);
int		*fill_array(t_node **stack_a);
void	big_guns(t_node **stack_a, t_node **stack_b);
void	quick_sort(int *array, int low, int high);
void	pick_next_move(t_node **stack, int target_index, int mid_index);
void	reconfigure(t_node **stack_a, t_node **stack_b);

//Searches
void	fountain(t_node *exiting_nod, char *found, t_detai *details,
			int size);
void	head_to_tail(t_node **stack_a, t_node *exiting_node,
			char *found, t_node *last_node);
void	waterfall(t_node *exiting_node,
			char *found, t_detai *details, int size);
void	min_max_handler(t_node *exiting_node, char *found,
			int size, t_detai *details);

//Costs
void	exit_cost(t_node **stack, int size, int mid_index);
void	optimize(t_node **stack_b);
void	priority(t_node **stack_b);
t_node	*highest_priority(t_node **stack_b, t_node **stack_a);
void	target_cost(t_node **stack_a, t_node **stack_b,
			t_detai *details, int size);

//resets
void	resort_special(t_node **stack_a);
void	recalibrate(t_node **head);
void	reconfigure(t_node **stack_a, t_node **stack_b);
void	target_moves(t_node *highest, t_node **stack_a);

void	highest_helper(t_node **highest, t_node *tmp, int *nbr);
void	helper(t_node *highest, t_node **stack_a, t_node **stack_b, char ptr);

//signs
void	both_positive(t_node *temp);
void	both_negative(t_node *temp);
void	exit_zero(t_node *temp);
void	target_zero(t_node *temp);

//OPERATIONS

void	push(t_node **stack_src, t_node **stack_dst, char *rule, int output);
void	swap_nod(t_node *a, t_node *b, char *rule, int output);
void	double_swap(t_node *a, t_node *b, int output);
void	rotate(t_node **head, char *rule, int output);
void	reverse_rotate(t_node **head, char *rule, int output);
void	double_rotate(t_node **a, t_node **b, int output);
void	double_reverse(t_node **a, t_node **b, int output);
void	repeat_rotate(t_node **head, int num, char *ptr, int output);
void	repeat_push(t_stacks *stacks, int num, char *ptr, int output);
void	repeat_reverse(t_node **head, int num, char *rule, int output);
void	repeat_double_rotate(t_node **x, t_node **y, int num, int output);
void	repeat_double_reverse(t_node **x, t_node **y, int num, int output);

//NODES

t_node	*create_node(int value, int index);
t_node	*last_node(t_node *head);
void	add_node_head(t_node **head, t_node *new_nod);
void	add_node_tail(t_node **head, t_node *new_nod);
t_node	*delete_node(t_node **prev_node, t_node *target_node);
int		list_size(t_node **head);
void	print_list(t_node **head);

//t_no_de = t_node_details
//t_detai = t_details
t_no_de	*max_details(t_node **head);
t_no_de	*min_details(t_node **head);
t_no_de	*mid_details(t_node **head);
t_detai	*special_node(t_node **stack_a);

// CHECKS

int		error_exit(int error, char *error_msg);
int		check_duplicates(t_node **head);
int		valid_check(int ac, char **av, t_node **head);
int		valid_parse(char *av, t_node **head, int index);
int		check_sort(t_node **head);
int		check_front(t_node *min_node, t_node **stack_a);
int		check_back(t_node *min_node, t_node **stack_a);
int		is_cyclic(t_node **stack_a);
int		valid_check_arg(char *arg, t_node **head, int *y);
#endif