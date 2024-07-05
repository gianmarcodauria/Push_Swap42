/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_push_sec.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-auria <gd-auria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 15:14:22 by gd-auria          #+#    #+#             */
/*   Updated: 2024/07/04 11:51:14 by gd-auria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_node **a, t_node **b)
{
	if (b == NULL || *b == NULL)
		return ;
	push(a, b);
	write(1, "pa\n", 3);
}

void	pb(t_node **b, t_node **a)
{
	if (a == NULL || *a == NULL)
		return ;
	push(b, a);
	write(1, "pb\n", 3);
}
