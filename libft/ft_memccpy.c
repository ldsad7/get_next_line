/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsimonis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 19:14:25 by tsimonis          #+#    #+#             */
/*   Updated: 2019/01/04 22:00:13 by tsimonis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;

	i = 0;
	if (!dst && !src && !n)
		return (dst);
	else
	{
		while (i < n && ((const unsigned char *)src)[i] != (unsigned char)c)
		{
			((unsigned char *)dst)[i] = ((const unsigned char *)src)[i];
			i++;
		}
		if (i == n)
			return (NULL);
		((unsigned char *)dst)[i] = ((const unsigned char *)src)[i];
		return (dst + i + 1);
	}
}
