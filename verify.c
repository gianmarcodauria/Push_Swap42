/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-auria <gd-auria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 16:01:00 by gd-auria          #+#    #+#             */
/*   Updated: 2024/07/04 16:02:27 by gd-auria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_aldig(int c)
{
	return (c >= '0' && c <= '9');
}

int	is_number(char *arg)
{
	int	x;

	x = 0;
	if ((arg[x] == '-' || arg[x] == '+') && arg[x + 1] != '\0')
		x++;
	while (arg[x] != '\0')
	{
		if (!check_aldig(arg[x]))
			return (0);
		x++;
	}
	return (1);
}

int	same_n(int argc, char **argv)
{
	int			i;
	int			j;
	long int	atret;

	i = 0;
	while (i < argc)
	{
		j = i + 1;
		atret = ft_atoi(argv[i]);
		while (j < argc)
		{
			if (atret < INT_MIN || atret > INT_MAX || atret == ft_atoi(argv[j]))
			{
				write (1, "Not MAX/MIN Int\n", 17);
				return (0);
			}
			j++;
		}
		i++;
	}
	if (ft_atoi(argv[argc - 1]) > INT_MAX || ft_atoi(argv[argc - 1]) < INT_MIN)
		return (0);
	return (1);
}

int	clean_argv(int argc)
{
	return (argc >= 1);
}

int	check_argv(int argc, char **argv)
{
	int	x;

	if (!clean_argv(argc))
	{
		write(2, "Empty argc\n", 11);
		return (0);
	}
	x = 0;
	while (x < argc)
	{
		if (!is_number(argv[x]))
		{
			write(2, "Not a number\n", 13);
			return (0);
		}
		x++;
	}
	if (!same_n(argc, argv))
	{
		write(2, "INT-MAX/MIN or Same number found\n", 18);
		return (0);
	}
	return (1);
}
