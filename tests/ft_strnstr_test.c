/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuscaro <lbuscaro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 17:53:57 by lbuscaro          #+#    #+#             */
/*   Updated: 2025/04/18 17:55:25 by lbuscaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftest.h"

static int	runtest(const char *big, const char *little, size_t n);

int	ft_strnstr_test(void)
{
	if (!runtest("a nice test", "test", 30))
		return (FAIL);
	if (!runtest("a nice test", "test", 0))
		return (FAIL);
	if (!runtest("a nice test", "oi", 30))
		return (FAIL);
	if (!runtest("a nice test", "A n", 30))
		return (FAIL);
	if (!runtest("a nice test", "", 30))
		return (FAIL);
	if (!runtest("", "test", 30))
		return (FAIL);
	return (OK);
}

static int	runtest(const char *big, const char *little, size_t n)
{
	char	*res_o;
	char	*res_m;

	res_o = strnstr(big, little, n);
	res_m = ft_strnstr(big, little, n);
	if (res_o != res_m)
	{
		return (FAIL);
	}
	return (OK);
}
