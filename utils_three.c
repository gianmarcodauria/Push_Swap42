/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_three.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-auria <gd-auria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 14:38:24 by gd-auria          #+#    #+#             */
/*   Updated: 2024/07/04 17:41:18 by gd-auria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	len_st(t_node *stack)
{
	int	i;

	i = 0;
	if (stack == NULL)
		return (0);
	while (stack != NULL)
	{
		i++;
		stack = stack->next;
	}
	return (i);
}

void	print_stacks(t_node *a_stack, t_node *b_stack)
{
	while (a_stack != NULL)
	{
		a_stack = a_stack->next;
	}
	while (b_stack != NULL)
		b_stack = b_stack->next;
}

void	print_one_stack(t_node *a_stack)
{
	while (a_stack != NULL)
	{
		a_stack = a_stack->next;
	}
}
