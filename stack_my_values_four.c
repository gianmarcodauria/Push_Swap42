/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_my_values_four.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-auria <gd-auria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 12:03:42 by gd-auria          #+#    #+#             */
/*   Updated: 2024/07/04 11:51:14 by gd-auria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	three_sort(t_node	**stack)
{
	t_node	*h;
	t_node	*h_max;

	h = min_val_node(*stack);
	h_max = high_val_node(*stack);
	if (h == *stack)
	{
		ra(stack);
		if ((*stack)->value > (*stack)->next->value)
			a_swap(stack);
		rra(stack);
	}
	if (h == (*stack)->next)
	{
		if (*stack == h_max)
			ra(stack);
		else
			a_swap(stack);
	}
	if ((*stack)->value > (*stack)->next->value)
	{
		a_swap(stack);
		rra(stack);
	}
	return ;
}

void	five_sort(t_node **a, t_node **b)
{
	t_node	*h;
	t_node	*h_max;

	h = min_val_node(*a);
	h_max = penultimate_min_val_node(*a);
	while (len_st(*a) != 3)
	{
		if ((*a) == h || (*a) == h_max)
			pb(b, a);
		else
			ra(a);
	}
	if (is_it_sorted(*a) == 0)
		three_sort(a);
	if (is_it_sorted(*b))
		b_swap(b);
	pa(a, b);
	pa(a, b);
}
