/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulba <sabdulba@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 15:43:53 by sabdulba          #+#    #+#             */
/*   Updated: 2024/12/31 22:17:47 by sabdulba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	check_duplicates(t_node **head)
{
	t_node	*curr;
	t_node	*itr;

	if (*head == NULL || (*head)->next == NULL)
		return (1);
	curr = *head;
	while(curr)
	{
		itr = curr->next;
		while(itr)
		{
			if (curr->value == itr->value)
				return (1);
			itr = itr->next;
		}
		curr = curr->next;
	}
	return (0);
}
int	valid_check(int ac, char **av, t_node **head)
{
	int		i;
	int		j;
	int		y;
	char	**list;

	i = 1;
	y = 0;
	while(i < ac)
	{
		list = ft_split(av[i], ' ');
		if (!list || !*list)
		{
			free_tab(list); //TO Edit
			return (0);
		}
		j = 0;
		while (list[j])
		{
			if (!valid_parse(list[j], head, y))
				return (0);
			y++;
			j++;
		}
		free_tab(list);
		i++;
	}
	if (check_duplicates(head))
		return (0);
	print_list(head);
	return (1);
}
int	valid_parse(char *av, t_node **head, int index)
{
	int		i;
	long	nbr;
	
	i = 0;
	if (av[i] == '-' || av[i] == '+')
		i++;
	if (av[i] == '\0')
		return (0);
	while (av[i])
	{
		if (!ft_isdigit(av[i]))
			return (0);
		i++;
	}
	nbr = ft_atoi(av); //change to handle long
	if (nbr < -2147483648 || nbr > 2147483647)
		return (0);
	t_node *new = create_node(nbr, index);
	add_node_tail(head, new);
	return (1);
}
