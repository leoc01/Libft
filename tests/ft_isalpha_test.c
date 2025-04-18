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

int	ft_isalpha_test(void)
{
	int	sub;
	int	o;
	int	m;

	sub = -1;
	while (sub < 128)
	{
		o = isalpha(sub);
		m = ft_isalpha(sub);
		if (!(o == 0 && m == 0) && !(o != 0 && m != 0))
			return (FAIL);
		sub++;
	}
	return (OK);
}
