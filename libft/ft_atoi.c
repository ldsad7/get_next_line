/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsimonis <tsimonis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 15:38:38 by tsimonis          #+#    #+#             */
/*   Updated: 2019/01/04 21:49:57 by tsimonis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

static long long int	get_number(const char *str, int i, int fl1)
{
	long long int	t;
	long long int	result;
	int				fl2;

	fl2 = 0;
	t = -922337203685477580;
	result = (str[i++] - '0') * fl1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (result < t || (result == t && str[i] == '9'))
			return (0);
		else if (result > -t || (result == -t && (str[i] == '8' \
						|| str[i] == '9')))
			return (-1);
		else
			result = 10 * result + (str[i] - '0') * fl1;
		i++;
	}
	return (result);
}

int						ft_atoi(const char *str)
{
	int				i;
	int				fl;
	long long int	result;

	result = 0;
	i = 0;
	while (str[i] == ' ' || (str[i] > 8 && str[i] < 14))
		i++;
	fl = 1;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			fl = -1;
	}
	if (str[i] >= '0' && str[i] <= '9')
		result = get_number(str, i, fl);
	return (result);
}
