/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuscaro <lbuscaro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 15:10:17 by lbuscaro          #+#    #+#             */
/*   Updated: 2025/04/10 15:10:48 by lbuscaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#define SIZE 11

#include "libftest.h"

int	runtest(void *dest, const void *src, size_t n);

int	ft_memcpy_test(void)
{
	char	dest[SIZE];

	runtest(dest, "0123456789\0", SIZE);
	runtest(dest, "9876543210\0", (SIZE - 3));
	return (OK);
}

int	runtest(void *dest, const void *src, size_t n)
{
	ft_memcpy(dest, src, n);
	if (strncmp(dest, src, SIZE) != 0)
		return (FAIL);
	return (OK);
}
