/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-auria <gd-auria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 11:34:29 by gd-auria          #+#    #+#             */
/*   Updated: 2024/07/04 11:51:14 by gd-auria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_node **stack)
{
	t_node	*first;
	t_node	*third;
	t_node	*second;

	first = *stack;
	second = (*stack)->next;
	third = second->next;
	if (!*stack)
		return ;
	if (!(*stack)->next)
		return ;
	*stack = second;
	second->next = first;
	first->next = third;
}

void	a_swap(t_node **a_stack)
{
	swap(a_stack);
	write (1, "sa\n", 3);
}

void	b_swap(t_node **b_stack)
{
	swap(b_stack);
	write (1, "sb\n", 3);
}

void	ss_swap(t_node **a_stack, t_node **b_stack)
{
	swap(a_stack);
	swap(b_stack);
	write (1, "ss\n", 3);
}
