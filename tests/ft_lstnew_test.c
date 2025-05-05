/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuscaro <lbuscaro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 12:58:32 by lbuscaro          #+#    #+#             */
/*   Updated: 2025/04/29 12:59:21 by lbuscaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftest.h"

int	ft_lstnew_test(void)
{
	t_list	*node0;
	char	*str;

	node0 = ft_lstnew("teste");
	str = node0 -> content;
	free(node0);
	if (strcmp(str, "teste") != 0)
		return (FAIL);
	return (OK);
}
