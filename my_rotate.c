/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-auria <gd-auria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 12:33:11 by gd-auria          #+#    #+#             */
/*   Updated: 2024/07/04 16:25:49 by gd-auria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_node **node)
{
	t_node	*first;
	t_node	*last;

	first = *node;
	last = find_last(*node);
	if (*node == NULL)
		return ;
	if (!(*node)->next)
		return ;
	if (!last)
		return ;
	last->next = *node;
	*node = (*node)->next;
	first->next = NULL;
}

void	ra(t_node **a_stack)
{
	rotate(a_stack);
	write(1, "ra\n", 3);
}

void	rb(t_node **b_stack)
{
	rotate(b_stack);
	write(1, "rb\n", 3);
}

void	rr(t_node **a_stack, t_node **b_stack)
{
	rotate(a_stack);
	rotate(b_stack);
	write(1, "rr\n", 3);
}
