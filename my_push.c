/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-auria <gd-auria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 14:41:29 by gd-auria          #+#    #+#             */
/*   Updated: 2024/07/04 13:07:44 by gd-auria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	second_p(t_node **b, t_node **a)
{
	t_node	*first;
	t_node	*second;

	first = *b;
	second = *a;
	*b = *a;
	*a = second->next;
	(*b)->next = first;
}

void	push(t_node **b, t_node **a)
{
	return (second_p(b, a));
}
