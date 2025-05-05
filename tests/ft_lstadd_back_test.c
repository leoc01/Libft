/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_test.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuscaro <lbuscaro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 12:29:49 by lbuscaro          #+#    #+#             */
/*   Updated: 2025/04/30 12:30:22 by lbuscaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftest.h"

int	ft_lstadd_back_test(void)
{
	t_list	*lst;
	char	*str;

	ft_lstadd_back(&lst, ft_lstnew("test1"));
	ft_lstadd_back(&lst, ft_lstnew("test2"));
	ft_lstadd_back(&lst, ft_lstnew("final_test"));
	str = ft_lstlast(lst)->content;
	if (strcmp(str, "final_test") != 0)
		return (FAIL);
	return (OK);
}
