/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsimonis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 00:51:38 by tsimonis          #+#    #+#             */
/*   Updated: 2019/01/04 21:59:53 by tsimonis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new;
	void	*str;

	new = (t_list *)malloc(sizeof(*new));
	if (new == NULL)
		return (new);
	if (content == 0)
	{
		new->content = NULL;
		new->content_size = 0;
	}
	else
	{
		str = (void *)malloc(sizeof(*content) * content_size);
		if (str == NULL)
		{
			free(new);
			return (str);
		}
		str = ft_memmove(str, content, content_size);
		new->content = str;
		new->content_size = content_size;
	}
	new->next = NULL;
	return (new);
}
