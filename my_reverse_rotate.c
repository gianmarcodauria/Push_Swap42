/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-auria <gd-auria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 17:02:39 by gd-auria          #+#    #+#             */
/*   Updated: 2024/07/04 11:51:14 by gd-auria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate(t_node **node)
{
	t_node	*first;
	t_node	*sec_last;
	t_node	*last;

	first = *node;
	sec_last = find_second_last(*node);
	last = find_last(*node);
	if (!*node)
		return ;
	if (!(*node)->next)
		return ;
	sec_last->next = NULL;
	last->next = first;
	*node = last;
}

void	rra(t_node **a_stack)
{
	reverse_rotate(a_stack);
	write (1, "rra\n", 4);
}

void	rrb(t_node **b_stack)
{
	reverse_rotate(b_stack);
	write (1, "rrb\n", 4);
}

void	rrr(t_node **a_stack, t_node **b_stack)
{
	reverse_rotate(a_stack);
	reverse_rotate(b_stack);
	write (1, "rrr\n", 4);
}
