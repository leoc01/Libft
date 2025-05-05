/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuscaro <lbuscaro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 16:56:44 by lbuscaro          #+#    #+#             */
/*   Updated: 2025/04/18 16:57:05 by lbuscaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftest.h"

static int	runtest(const void *s1, const void *s2, size_t n);

int	ft_memcmp_test(void)
{
	if (runtest("test", "test", 5) == FAIL)
		return (FAIL);
	if (runtest("testa", "testc", 6) == FAIL)
		return (FAIL);
	if (runtest("test", "test", 0) == FAIL)
		return (FAIL);
	if (runtest("", "", 2) == FAIL)
		return (FAIL);
	if (runtest("testa", "testc", 4) == FAIL)
		return (FAIL);
	if (runtest("testa", "testc", 5) == FAIL)
		return (FAIL);
	return (OK);
}

static int	runtest(const void *s1, const void *s2, size_t n)
{
	int	res_o;
	int	res_m;

	res_o = memcmp(s1, s2, n);
	res_m = ft_memcmp(s1, s2, n);
	if (!(res_o == 0 && res_m == 0)
		&& !(res_o > 0 && res_m > 0)
		&& !(res_o < 0 && res_m < 0))
	{
		return (FAIL);
	}
	return (OK);
}
