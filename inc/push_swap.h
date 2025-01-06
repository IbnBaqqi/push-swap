/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulba <sabdulba@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 14:57:19 by sabdulba          #+#    #+#             */
/*   Updated: 2025/01/06 12:55:56 by sabdulba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <ctype.h>
# include <limits.h>
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
} t_node;

typedef struct s_stacks {
	struct s_node	**stack_a;
	struct s_node	**stack_b;
}	t_stacks;

typedef struct s_node_details {
    int				index;
    int				value;
    struct s_node	*node;  
} t_node_details;

typedef struct s_details {
    t_node_details	*min;
    t_node_details	*mid;
    t_node_details	*max;
} t_details;

# include "nodes.h"
# include "checks.h"
# include "operations.h"
# include "../lib/libft/inc/libft.h"


int	push_swap(int ac, char **av);


//ERROR & FREE

void	free_tab(char **str);

void	free_stack(t_node **head);

void	free_stacks(t_node **stack_a, t_node **stack_b);

void	which_sort(t_node **stack_a, t_node **stack_b);

//void	sort_three(t_node **head);

void	sort_three(t_node **head_ref, char check_cyclic);

void	index_array(t_node **stack_a);

int		*fill_array(t_node **stack_a);

void	big_guns(t_node **stack_a, t_node **stack_b);

void	quick_sort(int *array, int low, int high);

void	pick_next_move(t_node **stack, int target_index, int mid_index);

void	reconfigure(t_node **stack_a, t_node **stack_b);

//Searches
void	fountain(t_node *exiting_nod, char *found, t_details *details, int size);

void	head_to_tail(t_node **stack_a, t_node *exiting_node,
		char *found, t_node *last_node);
void	waterfall(t_node *exiting_node,
		char *found, t_details *details, int size);
void	min_max_handler(t_node *exiting_node, char *found,
		int size, t_details *details);

//Costs
void	exit_cost(t_node **stack, int size, int mid_index);
void	optimize(t_node **stack_b);
void	priority(t_node **stack_b);
t_node	*highest_priority(t_node **stack_b, t_node **stack_a);
void	target_cost(t_node **stack_a, t_node **stack_b,
		t_details *details, int size);

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

#endif