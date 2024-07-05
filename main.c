/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-auria <gd-auria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 14:15:04 by gd-auria          #+#    #+#             */
/*   Updated: 2024/07/04 17:41:27 by gd-auria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "time.h"

int	arg_check(int argc, char **argv, char ***split_res, int *split_len)
{
	if (argc == 2)
	{
		*split_res = ft_split(argv[1], ' ');
		*split_len = ft_strlen_split(*split_res);
		if (!check_argv(*split_len, *split_res))
		{
			free_split(*split_res, *split_len);
			return (1);
		}
	}
	if (argc != 2)
	{
		if (!check_argv(argc - 1, argv + 1))
			return (1);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	char	**split_res;
	int		split_len;
	t_node	*a_stack;
	t_node	*b_stack;

	a_stack = NULL;
	b_stack = NULL;
	split_res = NULL;
	if (arg_check(argc, argv, &split_res, &split_len))
		return (1);
	fill_stack(&a_stack, argv, split_res, argc);
	if (is_it_sorted(a_stack))
	{
		free_split(split_res, split_len);
		free_node(&a_stack);
		return (1);
	}
	else if (len_st(a_stack) == 3)
		three_sort(&a_stack);
	else if (len_st(a_stack) == 5)
		five_sort(&a_stack, &b_stack);
	else
		my_cases(&a_stack, &b_stack);
	free_split(split_res, split_len);
	free_node(&a_stack);
}
