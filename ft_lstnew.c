/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 14:27:26 by tochen            #+#    #+#             */
/*   Updated: 2017/03/14 15:02:35 by tochen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list		*node_ret;

	node_ret = (t_list *)malloc(sizeof(t_list));
	if (!node_ret)
		return (0);
	node_ret->content = malloc(content_size);
	if (node_ret->content == 0)
		return (0);
	if (!content)
	{
		node_ret->content = 0;
		node_ret->content_size = 0;
	}
	else
	{
		ft_memcpy(node_ret->content, content, content_size);
		node_ret->content_size = content_size;
	}
	node_ret->next = 0;
	return (node_ret);
}
