/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_index_cost.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-auria <gd-auria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 12:42:32 by gd-auria          #+#    #+#             */
/*   Updated: 2024/07/04 11:51:14 by gd-auria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	index_where_node(t_node **stack)
{
	int		i;
	t_node	*temp;

	temp = *stack;
	if (stack == NULL || temp == NULL)
		return ;
	i = 0;
	while (temp != NULL)
	{
		temp->where = i;
		i++;
		temp = temp->next;
	}
}

void	set_index_where_median(t_node *st)
{
	int	line;

	if (st == NULL)
		return ;
	line = len_st(st) / 2;
	while (st)
	{
		if (st->where <= line)
			st->m = 1;
		else
			st->m = 0;
		st = st->next;
	}
}

int	count_cost(t_node **a, t_node **b, t_node *a_t, t_node *b_t)
{
	if ((a_t->where < (len_st(*a) + 1) / 2)
		&& b_t->where < (len_st(*b) + 1) / 2)
	{
		if (a_t->where > b_t->where)
			return (a_t->where);
		else
			return (b_t->where);
	}
	else if ((a_t->where < (len_st(*a) + 1) / 2)
		&& b_t->where >= (len_st(*b) + 1) / 2)
		return (a_t->where + len_st(*b) - b_t->where);
	else if ((a_t->where >= (len_st(*a) + 1) / 2)
		&& b_t->where < (len_st(*b) + 1) / 2)
		return (b_t->where + len_st(*a) - a_t->where);
	else if ((a_t->where >= (len_st(*a) + 1) / 2)
		&& b_t->where >= (len_st(*b) + 1) / 2)
	{
		if ((len_st(*a) - a_t->where) > (len_st(*b) - b_t->where))
			return (len_st(*a) - a_t->where);
		else
			return (len_st(*b) - b_t->where);
	}
	else
		return (0);
}

int	lower_cost(t_node **a, t_node **b, t_node *a_t, t_node *b_t)
{
	int	cost;
	int	cost_min;

	a_t = *a;
	b_t = *b;
	cost = 0;
	cost_min = INT_MAX;
	while (a_t != NULL)
	{
		while (b_t != NULL)
		{
			cost = count_cost(a, b, a_t, b_t);
			if (cost < cost_min)
			{
				cost_min = cost;
			}
			b_t = b_t->next;
		}
		b_t = *b;
		a_t = a_t->next;
	}
	return (cost_min);
}
