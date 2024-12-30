/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulba <sabdulba@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 14:57:19 by sabdulba          #+#    #+#             */
/*   Updated: 2024/12/31 01:16:49 by sabdulba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <ctype.h>

# include "../lib/libft/inc/libft.h"


typedef struct s_node 
{
	int value;
	int list_index;
	struct s_node *next;
	struct s_node *prev;
} t_node;

/**
 * @brief Entry point for the program
 * @param ac length of arguments from command line
 * @param av Each string from command line
 */
int	push_swap(int ac, char **av);

//NODES

/**
 * @brief A function to create a new node
 * @param value Value to be assigned to the new node
 * @param index Index of the new node on the list
 */
t_node	*create_node(int value, int index);

/**
 * @brief A function to find the last node of a linked list
 * @param head Head of the list to transverse
 */
t_node	*last_node(t_node *head);

/**
 * @brief A function to add a node to the head of a linkedlist
 * @param head Head of the list
 * @param new New node to be added to the list
 */
void	add_node_head(t_node **head, t_node *new);

/**
 * @brief A function to add a node to the end/tail of a linkedlist
 * @param head Head of the list
 * @param new New node to be added to the list
 */
void	add_node_tail(t_node **head, t_node *new_nod);

// CHECKS
/**
 * @brief Exit and print the required error
 * @param error_msg Error message to be printed for easy trace of the error
 */
int error_exit(char *error_msg);

/**
 * @brief A function to check duplicate values in a linkedlist
 * @param head Head of the list
 */
int	check_duplicates(t_node **head);

/**
 * @brief A function to checks if the arguments are valid
 * @param av Argument strings
 * @param head Head of the node
 * @param index Index of string
 */
int	valid_check(int ac, char **av, t_node **head);

/**
 * @brief A function to check the validity of a string
 * @param av Arguments/strings
 * @param head Head of the list
 * @param index Index of String
 */
int	valid_parse(char *av, t_node **head, int index);

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