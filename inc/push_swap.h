/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulba <sabdulba@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 14:57:19 by sabdulba          #+#    #+#             */
/*   Updated: 2025/01/01 10:17:39 by sabdulba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <ctype.h>

typedef struct s_node 
{
	int value;
	int list_index;
	struct s_node *next;
	struct s_node *prev;
} t_node;

# include "nodes.h"
# include "checks.h"
# include "operations.h"
# include "../lib/libft/inc/libft.h"

/**
 * @brief Entry point for the program
 * @param ac length of arguments from command line
 * @param av Each string from command line
 */
int	push_swap(int ac, char **av);


//ERROR & FREE
/**
 * @brief A function to free the Strings od strings
 * @param str String of strings to free
 */
void	free_tab(char **str);

/**
 * @brief A function to free the single stack
 * @param head Head of the stack to begin the freeing
 */
void	free_stack(t_node **head);

/**
 * @brief A function to free the two stacks
 * @param stack_a Stack A
 * @param stack_b Stack B
 */
void	free_stacks(t_node **stack_a, t_node **stack_b);


#endif