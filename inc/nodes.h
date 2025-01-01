/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nodes.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulba <sabdulba@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/01 09:51:17 by sabdulba          #+#    #+#             */
/*   Updated: 2025/01/01 23:18:41 by sabdulba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
void	add_node_head(t_node **head, t_node *new_nod);

/**
 * @brief A function to add a node to the end/tail of a linkedlist
 * @param head Head of the list
 * @param new New node to be added to the list
 */
void	add_node_tail(t_node **head, t_node *new_nod);

/**
 * @brief A function to delete a node from the list
 * @param prev_node Previous node linking to the target node
 * @param target_node Node to be deleted from the list
 */
t_node	*delete_node(t_node **prev_node, t_node *target_node);

/**
 * @brief A function that returns the size of a linked list
 * @param head Head of the list to get the size
 */
int	list_size(t_node **head);

/**
 * @brief A function to print the nodes of a list
 * @param head Head of the list to start the printing
 */
void	print_list(t_node **head);

t_node_details	*max_details(t_node **head);
t_node_details	*min_details(t_node **head);
t_node_details	*mid_details(t_node **head);
t_details		*special_node(t_node **stack_a);