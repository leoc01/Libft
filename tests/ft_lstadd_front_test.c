/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_test.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuscaro <lbuscaro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 16:17:04 by lbuscaro          #+#    #+#             */
/*   Updated: 2025/04/29 16:40:17 by lbuscaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftest.h"

int	ft_lstadd_front_test(void)
{
	t_list	*lst;

	lst = ft_lstnew(NULL);
	ft_lstadd_front(&lst, ft_lstnew("test"));
	if (strcmp(lst -> content, "test") != 0)
		return (FAIL);
	if (lst -> next -> content != NULL)
		return (FAIL);
	return (OK);
}
