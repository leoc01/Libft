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

	lst = ft_lstnew(NULL);
	write(1, "1", 1);
	write(1, "\n", 1);
	ft_lstadd_front(&lst, ft_lstnew(NULL));
	write(1, "1", 1);
	write(1, "\n", 1);
	ft_lstadd_front(&lst, ft_lstnew(NULL));
	write(1, "1", 1);
	write(1, "\n", 1);
	ft_lstadd_front(&lst, ft_lstnew(NULL));
	write(1, "1", 1);
	write(1, "\n", 1);
	ft_lstadd_front(&lst, ft_lstnew(NULL));
	write(1, "1", 1);
	write(1, "\n", 1);
	printf("%d\n", ft_lstsize(lst));
	return (FAIL);
}
