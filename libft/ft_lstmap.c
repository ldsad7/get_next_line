/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsimonis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 23:51:29 by tsimonis          #+#    #+#             */
/*   Updated: 2019/01/04 21:59:45 by tsimonis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

static void	del(void *tmp, size_t size)
{
	free(tmp);
	tmp = NULL;
	size = 0;
}

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*result;
	t_list	*tmp;

	if (lst && f)
	{
		result = f(lst);
		if (lst->next)
		{
			tmp = ft_lstmap(lst->next, f);
			if (tmp)
				result->next = tmp;
			else
			{
				ft_lstdelone(&result, &del);
				return (NULL);
			}
		}
		return (result);
	}
	return (lst);
}
