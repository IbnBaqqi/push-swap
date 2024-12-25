/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulba <sabdulba@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 14:57:19 by sabdulba          #+#    #+#             */
/*   Updated: 2024/12/25 16:29:46 by sabdulba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>


typedef struct s_node 
{
	struct s_node *next;
	int data;
} t_node;

/**
 * @brief Entry point for the program
 * @param ac length of parameters from command line
 * @param av Each string from command line
 */
int	push_swap(int ac, char **av);

/**
 * @brief Exit and print the required error
 * @param error_msg Error message to be printed for easy trace of the error
 */
int error_exit(char *error_msg);

#endif