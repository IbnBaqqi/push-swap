/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulba <sabdulba@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 15:43:53 by sabdulba          #+#    #+#             */
/*   Updated: 2025/01/08 08:45:31 by sabdulba         ###   ########.fr       */
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
	while (curr)
	{
		itr = curr->next;
		while (itr)
		{
			if (curr->value == itr->value)
				return (1);
			itr = itr->next;
		}
		curr = curr->next;
	}
	return (0);
}

int	valid_check_arg(char *arg, t_node **head, int *y)
{
	char	**list;
	int		j;

	j = 0;
	list = ft_split(&arg[j], ' ');
	if (!list || !*list)
	{
		free_tab(list);
		return (0);
	}
	while (list[j])
	{
		if (!valid_parse(list[j], head, *y))
		{
			free_tab(list);
			return (0);
		}
		y++;
		j++;
	}
	free_tab(list);
	return (1);
}

int	valid_check(int ac, char **av, t_node **head)
{
	int		i;
	int		y;

	i = 1;
	y = 0;
	while (i < ac)
	{
		if (!valid_check_arg(av[i], head, &y))
			return (0);
		i++;
	}
	if (check_duplicates(head))
		return (0);
	return (1);
}

int	valid_parse(char *av, t_node **head, int index)
{
	int		i;
	long	nbr;
	t_node	*new;

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
	nbr = ft_atoi(av);
	if (nbr < INT_MIN || nbr > INT_MAX)
		return (0);
	new = create_node(nbr, index);
	add_node_tail(head, new);
	return (1);
}

int	check_sort(t_node **head)
{
	t_node	*tmp;

	if (!head)
		return (0);
	tmp = *head;
	while (tmp)
	{
		if (tmp->prev && tmp->prev->value > tmp->value)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}
