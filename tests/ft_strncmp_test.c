/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuscaro <lbuscaro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 15:29:29 by lbuscaro          #+#    #+#             */
/*   Updated: 2025/04/16 15:30:51 by lbuscaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftest.h"

static int	test(char *s1, char *s2, size_t n)
{
	int	m;
	int	o;

	m = ft_strncmp(s1, s2, n);
	o = strncmp(s1, s2, n);
	if (!(m > 0 && o > 0) && !(m < 0 && o < 0) && !(m == o))
	{
		return (FAIL);
	}
	return (OK);
}

int	ft_strncmp_test(void)
{
	if (test("12345", "12345", 6) == 0)
		return (FAIL);
	if (test("12345", "12345", 0) == 0)
		return (FAIL);
	if (test("12345", "12345", 3) == 0)
		return (FAIL);
	if (test("12345", "12345", 8) == 0)
		return (FAIL);
	if (test("", "", 0) == 0)
		return (FAIL);
	if (test("home", "house", 6) == 0)
		return (FAIL);
	if (test("house2", "house", 7) == 0)
		return (FAIL);
	if (test("42", "43", 1) == 0)
		return (FAIL);
	if (test("", "", 6) == 0)
		return (FAIL);
	return (OK);
}
