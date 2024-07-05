/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whole_cases.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-auria <gd-auria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 12:27:50 by gd-auria          #+#    #+#             */
/*   Updated: 2024/07/04 17:34:27 by gd-auria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	all_cases(t_node **a, t_node **b, t_node *ch_a, t_node *ch_a_t)
{
	if (ft_first_case(a, b, ch_a, ch_a_t) == 1)
		return ;
	if (ft_sec_case(a, b, ch_a, ch_a_t) == 1)
		return ;
	if (ft_thr_case(a, b, ch_a, ch_a_t) == 1)
		return ;
	if (ft_four_case(a, b, ch_a, ch_a_t) == 1)
		return ;
}

void	new_find_cost(t_node **a_st, t_node **b_st)
{
	t_node	*tmp_a;
	t_node	*tmp_b;

	tmp_a = *a_st;
	tmp_b = *b_st;
	while (*a_st)
	{
		(*a_st)->cost = count_cost(&tmp_a, b_st, *a_st, (*a_st)->target);
		*a_st = (*a_st)->next;
	}
	*a_st = tmp_a;
	*b_st = tmp_b;
}

t_node	*find_cheapest(t_node **a_stack)
{
	t_node	*ch_a;
	t_node	*tmp;
	int		value;

	if (a_stack == NULL)
		return (NULL);
	tmp = *a_stack;
	ch_a = *a_stack;
	value = (*a_stack)->value;
	*a_stack = (*a_stack)->next;
	while (*a_stack)
	{
		if ((*a_stack)->cost < value)
		{
			value = (*a_stack)->cost;
			ch_a = *a_stack;
		}
		*a_stack = (*a_stack)->next;
	}
	*a_stack = tmp;
	return (ch_a);
}

void	targetize_list(t_node **a_stack, t_node **b_stack)
{
	t_node	*a_tmp_head;

	a_tmp_head = *a_stack;
	while (*a_stack != NULL)
	{
		(*a_stack)->target = target(*a_stack, *b_stack);
		*a_stack = (*a_stack)->next;
	}
	*a_stack = a_tmp_head;
}

void	my_cases(t_node **a_st, t_node **b_st)
{
	t_node	*low;

	pb(b_st, a_st);
	pb(b_st, a_st);
	while (*a_st)
	{
		index_where_node(a_st);
		index_where_node(b_st);
		targetize_list(a_st, b_st);
		new_find_cost(a_st, b_st);
		all_cases(a_st, b_st, find_cheapest(a_st), find_cheapest(a_st)->target);
		pb(b_st, a_st);
	}
	while (*b_st != NULL)
		pa(a_st, b_st);
	low = min_val_node(*a_st);
	while ((*a_st) != low)
	{
		if (low->where > len_st(*a_st) / 2)
			rra(a_st);
		else
			ra(a_st);
	}
}
