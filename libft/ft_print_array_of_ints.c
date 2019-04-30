/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_array_of_ints.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsimonis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 16:21:22 by tsimonis          #+#    #+#             */
/*   Updated: 2019/01/04 22:01:26 by tsimonis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

void	ft_print_array_of_ints(int *arr, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		ft_putnbr(arr[i]);
		ft_putchar('\n');
		i++;
	}
}
