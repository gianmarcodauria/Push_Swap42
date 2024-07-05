/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   target_lowcost.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-auria <gd-auria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 16:16:29 by gd-auria          #+#    #+#             */
/*   Updated: 2024/07/04 17:41:47 by gd-auria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*target(t_node *a, t_node *b)
{
	int		value;
	t_node	*temp;
	t_node	*target;

	temp = b;
	value = -2147483647;
	while (b != NULL)
	{
		if (b->value < a->value && b->value > value)
		{
			value = b->value;
			target = b;
		}
		b = b->next;
	}
	if (value == -2147483647)
		return (high_val_node(temp));
	else
		return (target);
}

void	lowest_cost(t_node *stack)
{
	int		n;
	t_node	*node;

	if (stack == NULL)
		return ;
	n = stack->cost;
	node = stack;
	stack = stack->next;
	while (stack)
	{
		if (stack->cost < n)
		{
			n = stack->cost;
			node = stack;
		}
		stack = stack->next;
	}
	node->lowest_cost = 1;
}

void	cheapest(t_node *b_stack)
{
	int		value;
	t_node	*node;

	if (b_stack == NULL)
		return ;
	value = b_stack->cost;
	node = b_stack;
	b_stack = b_stack->next;
	while (b_stack != NULL)
	{
		if (b_stack->cost < value)
		{
			value = b_stack->cost;
			node = b_stack;
		}
		b_stack = b_stack->next;
	}
	node->lowest_cost = 1;
}

t_node	*lowest_checker(t_node *stack)
{
	if (NULL == stack)
		return (NULL);
	while (stack != NULL)
	{
		if (stack->lowest_cost == 1)
			return (stack);
		stack = stack->next;
	}
	return (NULL);
}
