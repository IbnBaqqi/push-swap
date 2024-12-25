/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulba <sabdulba@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 15:43:53 by sabdulba          #+#    #+#             */
/*   Updated: 2024/12/25 15:45:56 by sabdulba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int error_exit(char *error_msg)
{
	printf("%d", error_msg); //change to ft_printf
	exit(-1);
}