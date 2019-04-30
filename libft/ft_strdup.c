/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsimonis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 20:04:01 by tsimonis          #+#    #+#             */
/*   Updated: 2019/01/04 22:04:23 by tsimonis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	length;
	size_t	i;
	char	*s2;

	length = ft_strlen(s1);
	s2 = (char *)malloc(sizeof(*s2) * (length + 1));
	if (!s2)
		return (NULL);
	i = 0;
	while (i < length)
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
