/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuscaro <lbuscaro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 15:47:03 by lbuscaro          #+#    #+#             */
/*   Updated: 2025/04/30 15:47:04 by lbuscaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *ret_lst;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	while(lst != NULL)
	{
		ft_lstadd_back(&ret_lst, ft_lstnew(f(lst->content)));
		if (ft_lstlast(ret_lst) == NULL)
			ft_lstclear(&ret_lst, del);
		del(lst);
		lst = lst->next;
	}
	return (ret_lst);
}
