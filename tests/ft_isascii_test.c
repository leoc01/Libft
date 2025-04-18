/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuscaro <lbuscaro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 14:23:16 by lbuscaro          #+#    #+#             */
/*   Updated: 2025/04/09 14:24:14 by lbuscaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftest.h"

int	ft_isascii_test(void)
{
	int	sub;

	sub = -2;
	while (sub < 130)
	{
		if (ft_isascii(sub) != isascii(sub))
			return (FAIL);
		sub++;
	}
	return (OK);
}
