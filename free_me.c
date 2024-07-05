/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_me.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-auria <gd-auria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 15:15:53 by gd-auria          #+#    #+#             */
/*   Updated: 2024/07/05 14:32:42 by gd-auria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_split(char **split_res, int split_len)
{
	int	i;

	i = 0;
	if (split_res != NULL)
	{
		while (i < split_len)
		{
			free(split_res[i]);
			i++;
		}
		free(split_res);
	}
}

void	free_node(t_node **stack)
{
	t_node	*tmp;

	if (stack == NULL || *stack == NULL)
		return ;
	tmp = *stack;
	while (*stack != NULL)
	{
		tmp = (*stack)->next;
		free(*stack);
		*stack = tmp;
	}
}
