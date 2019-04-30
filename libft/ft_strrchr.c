/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsimonis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 22:45:37 by tsimonis          #+#    #+#             */
/*   Updated: 2019/01/04 22:07:21 by tsimonis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	size_t	last;

	i = 0;
	last = -1;
	while (s[i])
	{
		if (s[i] == (char)c)
			last = i;
		i++;
	}
	if ((char)c == '\0')
		return ((char *)s + i);
	if (last == (size_t)(-1))
		return (NULL);
	return ((char *)s + last);
}
