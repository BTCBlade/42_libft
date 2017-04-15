/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpop.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/24 16:10:42 by tochen            #+#    #+#             */
/*   Updated: 2017/03/24 16:41:50 by tochen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list			*ft_lstpop(t_list **alst)
{
	t_list		*head;
	t_list		*next;
	if (!alst || !(*alst))
		return (0);
	head = *alst;
	next = (*alst)->next;
	*alst = next;

	return (head);
}

int		main(void)
{
	t_list		*node_test1;
	t_list		*node_test2;
	char		str[15] = "Hello World";
	char		str2[15] = "2nd node";
	node_test1 = (t_list *)malloc(sizeof(t_list));
	node_test2 = (t_list *)malloc(sizeof(t_list));
	node_test1->content = (void *)str;
	node_test1->next = node_test2;
	node_test2->content = (void *)str2;

	printf("%s\n", (char *)(node_test1->content));
	printf("%s\n", (char *)(node_test1->next->content));
	return (0);
}

