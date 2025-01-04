/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulba <sabdulba@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/01 09:49:49 by sabdulba          #+#    #+#             */
/*   Updated: 2025/01/04 02:38:01 by sabdulba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
// CHECKS
/**
 * @brief Exit and print the required error
 * @param error Error value to exit with
 * @param error_msg Error message to be printed for easy trace of the error
 */
int error_exit(int error, char *error_msg);

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

/**
 * @brief A function to check if list is sorted
 * @param head Head of the list
 */
int	check_sort(t_node **head);

/**
 * 
 */
int	check_front(t_node *min_node, t_node **stack_a);

/**
 * 
 */
int	check_back(t_node *min_node, t_node **stack_a);

int	check_cyclic(t_node **stack_a);