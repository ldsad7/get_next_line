/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_array_of_strings.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsimonis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 15:38:36 by tsimonis          #+#    #+#             */
/*   Updated: 2019/01/04 22:01:35 by tsimonis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

void	ft_print_array_of_strings(char **s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		ft_putstr(s[i]);
		ft_putchar('\n');
		i++;
	}
}
