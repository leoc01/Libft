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

int	ft_memcpy_test(void)
{
	char	src[SIZE];
	char	dest[SIZE];

	strcpy(src, "1234567890\0");
	ft_memcpy(dest, src, SIZE);
	if (strncmp(dest, src, SIZE) != 0)
		return (FAIL);
	strcpy(src, "9876543210\0");
	ft_memcpy(dest, src, (SIZE - 3));
	if (strncmp(dest, src, SIZE) == 0)
		return (FAIL);
	return (OK);
}
