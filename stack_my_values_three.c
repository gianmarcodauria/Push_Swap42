/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_my_values_three.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-auria <gd-auria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 11:40:37 by gd-auria          #+#    #+#             */
/*   Updated: 2024/07/04 15:10:30 by gd-auria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_other_min_val(t_node *a)
{
	t_node	*tmp;
	int		num;

	tmp = (a);
	num = tmp->value;
	while (tmp)
	{
		if (num > tmp->value)
			num = tmp->value;
		tmp = tmp->next;
	}
	return (num);
}

int	second_min_val(t_node *stack, int val_lowest)
{
	t_node	*a_t;
	int		x;

	a_t = stack;
	if (a_t->value != val_lowest)
		x = a_t->value;
	else
		x = a_t->next->value;
	while (a_t)
	{
		if (x > a_t->value && a_t->value != val_lowest)
			x = a_t->value;
		a_t = a_t->next;
	}
	return (x);
}

int	is_it_sorted(t_node *stack)
{
	while (stack->next)
	{
		if (stack->value > stack->next->value)
			return (0);
		stack = stack->next;
	}
	return (1);
}
