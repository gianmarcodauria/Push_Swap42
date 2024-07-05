/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_two.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-auria <gd-auria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 16:39:43 by gd-auria          #+#    #+#             */
/*   Updated: 2024/07/04 13:32:46 by gd-auria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_strdup(const char *src)
{
	char	*copy;
	size_t	len;
	size_t	i;

	i = 0;
	len = ft_strlen(src);
	copy = (char *)malloc(sizeof(char) * (len + 1));
	if (copy == NULL)
		return (NULL);
	while (src[i] != '\0')
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

void	*ft_memset(void *b, int c, size_t len)
{
	char	*p;

	p = (char *)b;
	while (len > 0)
	{
		p[len - 1] = c;
		len--;
	}
	return (b);
}

void	ft_bzero(void *ptr, size_t n)
{
	ft_memset(ptr, 0, n);
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	len;

	len = count * size;
	if (count && size && count > (4294967295U / size))
		return (NULL);
	ptr = (void *)malloc(len);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, len);
	return (ptr);
}

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*u_dest;
	unsigned char		*u_src;

	u_dest = (unsigned char *)dest;
	u_src = (unsigned char *)src;
	if (!u_dest && !u_src)
		return (NULL);
	while (n--)
	{
		*u_dest++ = *u_src++;
	}
	return (dest);
}
