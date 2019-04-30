/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsimonis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 00:26:05 by tsimonis          #+#    #+#             */
/*   Updated: 2019/01/04 22:02:57 by tsimonis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

void	ft_putstr(char const *s)
{
	size_t	i;

	i = 0;
	if (s)
	{
		while (s[i])
			ft_putchar(s[i++]);
	}
}
