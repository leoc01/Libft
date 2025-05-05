/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuscaro <lbuscaro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 13:59:20 by lbuscaro          #+#    #+#             */
/*   Updated: 2025/04/15 14:00:37 by lbuscaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftest.h"

int	ft_toupper_test(void)
{
	int		i;

	i = 0;
	while (i <= 127)
	{
		if (toupper(i) != ft_toupper(i))
			return (FAIL);
		i++;
	}
	return (OK);
}
