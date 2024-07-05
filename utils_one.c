/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_one.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-auria <gd-auria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 14:37:44 by gd-auria          #+#    #+#             */
/*   Updated: 2024/07/04 14:56:57 by gd-auria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

long int	ft_atoi(const char *str)
{
	long int	res;
	long int	sign;

	sign = 1;
	res = 0;
	while ((*str >= '\t' && *str <= '\r')
		|| *str == ' ')
		++str;
	if (*str == '+' || *str == '-')
		if (*(str++) == '-')
			sign *= -1;
	while (isdigit(*str))
	{
		res = res * 10;
		res += (*str++ - '0');
	}
	return (sign * res);
}

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

size_t	ft_strlen_split(char **str)
{
	size_t	i;

	i = 0;
	while (str[i] != NULL)
		i++;
	return (i);
}

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t		i;
	size_t		j;
	char		*s2;

	i = 0;
	j = 0;
	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len + start > ft_strlen(s))
		len = ft_strlen(s + start);
	s2 = (char *)ft_calloc(sizeof(char), (len + 1));
	if (s2 == NULL)
		return (NULL);
	while (s[i])
	{
		if (i >= start && j < len && s[i])
			s2[j++] = s[i];
		i++;
	}
	s2[j] = '\0';
	return (s2);
}
