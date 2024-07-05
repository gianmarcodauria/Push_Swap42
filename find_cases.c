/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_cases.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-auria <gd-auria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 17:44:12 by gd-auria          #+#    #+#             */
/*   Updated: 2024/07/04 17:33:29 by gd-auria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_first_case(t_node **a, t_node **b, t_node *ch_a, t_node *ch_at)
{
	if ((ch_a->where > (len_st(*a)) / 2)
		&& ch_at->where > (len_st(*b)) / 2)
	{
		while ((*a)->value != ch_a->value && (*b)->value != ch_at->value)
			rrr(a, b);
		while ((*b)->value != ch_at->value)
			rrb(b);
		while ((*a)->value != ch_a->value)
			rra(a);
		return (1);
	}
	return (0);
}

int	ft_sec_case(t_node **a, t_node **b, t_node *ch_a, t_node *ch_at)
{
	if ((ch_a->where <= ((len_st(*a)) / 2))
		&& ch_at->where <= (len_st(*b)) / 2)
	{
		while ((*a)->value != ch_a->value && (*b)->value != ch_at->value)
			rr(a, b);
		while ((*b)->value != ch_at->value)
			rb(b);
		while ((*a)->value != ch_a->value)
			ra(a);
		return (1);
	}
	return (0);
}

int	ft_thr_case(t_node **a, t_node **b, t_node *ch_a, t_node *ch_at)
{
	if ((ch_a->where <= (len_st(*a)) / 2)
		&& ch_at->where > (len_st(*b)) / 2)
	{
		while ((*a)->value != ch_a->value)
			ra(a);
		while ((*b)->value != ch_at->value)
			rrb(b);
		while ((*a)->value != ch_a->value)
			rra(a);
		return (1);
	}
	return (0);
}

int	ft_four_case(t_node **a, t_node **b, t_node *ch_a, t_node *ch_at)
{
	if ((ch_a->where >= (len_st(*a)) / 2)
		&& ch_at->where <= (len_st(*b)) / 2)
	{
		while ((*a)->value != ch_a->value && (*b)->value != ch_at->value)
		{
			rra(a);
			rb(b);
		}
		while ((*b)->value != ch_at->value)
			rb(b);
		while ((*a)->value != ch_a->value)
			rra(a);
		return (1);
	}
	return (0);
}
