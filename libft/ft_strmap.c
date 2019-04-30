/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsimonis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 02:33:11 by tsimonis          #+#    #+#             */
/*   Updated: 2019/01/04 22:05:59 by tsimonis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*fresh;
	size_t	i;

	if (s && f)
	{
		if (ft_strlen(s) == (size_t)(-1))
			return (NULL);
		fresh = (char *)malloc(sizeof(*fresh) * (ft_strlen(s) + 1));
		if (!fresh)
			return (NULL);
		i = 0;
		while (s[i])
		{
			fresh[i] = f(s[i]);
			i++;
		}
		fresh[i] = '\0';
		return (fresh);
	}
	return ((char *)s);
}
