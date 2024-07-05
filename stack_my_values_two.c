/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_my_values_two.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-auria <gd-auria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 12:20:52 by gd-auria          #+#    #+#             */
/*   Updated: 2024/07/04 17:24:01 by gd-auria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*min_val_node(t_node *node)
{
	int			num;
	t_node		*min_val;

	if (node == NULL)
	{
		return (NULL);
	}
	num = INT_MAX;
	while (node)
	{
		if (node->value < num)
		{
			num = node->value;
			min_val = node;
		}
		node = node->next;
	}
	return (min_val);
}

t_node	*high_val_node(t_node *node)
{
	t_node	*s;

	if (node == NULL)
		return (NULL);
	s = node;
	while (node != NULL)
	{
		if (s->value < node->value)
		{
			s = node;
		}
		node = node->next;
	}
	return (s);
}

t_node	*penultimate_min_val_node(t_node *node)
{
	int		min_val;
	int		second_min_val;
	t_node	*min_node;
	t_node	*penultimate_min_val;

	min_node = min_val_node(node);
	if (min_node == NULL)
		return (NULL);
	min_val = min_node->value;
	second_min_val = INT_MAX;
	penultimate_min_val = NULL;
	while (node)
	{
		if (node->value > min_val && node->value < second_min_val)
		{
			second_min_val = node->value;
			penultimate_min_val = node;
		}
		node = node->next;
	}
	return (penultimate_min_val);
}
