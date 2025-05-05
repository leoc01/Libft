/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuscaro <lbuscaro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 20:31:29 by lbuscaro          #+#    #+#             */
/*   Updated: 2025/04/29 20:31:46 by lbuscaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftest.h"

int	ft_lstsize_test(void)
{
	t_list	*lst;
	size_t	size;

	lst = NULL;
	ft_lstadd_front(&lst, NULL);
	ft_lstadd_front(&lst, ft_lstnew("oi"));
	ft_lstadd_front(&lst, ft_lstnew("oi"));
	ft_lstadd_front(&lst, ft_lstnew("oi"));
	ft_lstadd_front(&lst, ft_lstnew("oi"));
	size = ft_lstsize(lst);
	if (size != 4)
		return (FAIL);
	return (OK);
}
