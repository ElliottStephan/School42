/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 14:34:08 by estephan          #+#    #+#             */
/*   Updated: 2016/11/16 11:40:48 by estephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*lst;
	t_list	*nextlst;

	lst = *alst;
	while (lst)
	{
		nextlst = lst->next;
		del(lst->content, lst->content_size);
		free(lst);
		lst = nextlst;
	}
	*alst = NULL;
}
