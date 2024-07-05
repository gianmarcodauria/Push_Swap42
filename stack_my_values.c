/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_my_values.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-auria <gd-auria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 11:41:14 by gd-auria          #+#    #+#             */
/*   Updated: 2024/07/04 14:14:32 by gd-auria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*create_node(void)
{
	t_node	*node;

	node = malloc(sizeof(t_node));
	if (node == NULL)
		return (NULL);
	return (node);
}

t_node	*find_last(t_node *stack)
{
	if (stack == NULL)
		return (NULL);
	while (stack->next != NULL)
	{
		stack = stack->next;
	}
	return (stack);
}

t_node	*find_second_last(t_node *stack)
{
	if (stack == NULL)
		return (NULL);
	while (stack->next->next != NULL)
	{
		stack = stack->next;
	}
	return (stack);
}

void	append_node(t_node **stack, int n)
{
	t_node	*node;
	t_node	*last;

	if (stack == NULL)
		return ;
	node = create_node();
	node->next = NULL;
	node->value = n;
	if (*stack == NULL)
	{
		*stack = node;
		return ;
	}
	else
	{
		last = find_last(*stack);
		last->next = node;
	}
}

void	fill_stack(t_node **st, char **argv, char **split_res, int argc)
{
	int	i;
	int	n;

	if (argc == 2)
	{
		i = 0;
		while (split_res[i] != NULL)
		{
			n = ft_atoi(split_res[i]);
			append_node(st, n);
			i++;
		}
	}
	if (argc != 2)
	{
		i = 1;
		while (argv[i] != NULL)
		{
			n = ft_atoi(argv[i]);
			append_node(st, n);
			i++;
		}
	}
}
