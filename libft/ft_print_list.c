/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsimonis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 17:22:30 by tsimonis          #+#    #+#             */
/*   Updated: 2019/01/04 22:01:45 by tsimonis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

void	ft_print_list(t_list *lst)
{
	while (lst->next)
	{
		ft_putstr(lst->content);
		ft_putchar('\n');
		lst = lst->next;
	}
	ft_putstr(lst->content);
	ft_putchar('\n');
}
