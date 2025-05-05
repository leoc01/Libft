/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuscaro <lbuscaro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 15:46:19 by lbuscaro          #+#    #+#             */
/*   Updated: 2025/04/18 15:46:52 by lbuscaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftest.h"
#include "libft.h"
#include <stdio.h>

int	ft_memchr_test(void)
{
	char	str[12];
	char	*res_o;
	char	*res_m;

	strcpy(str, "A nice test\0");
	res_o = memchr(str, 's', sizeof(str));
	res_m = ft_memchr(str, 's', sizeof(str));
	if (*res_o != *res_m)
		return (FAIL);
	res_o = memchr(str, 'A', sizeof(str));
	res_m = ft_memchr(str, 'A', sizeof(str));
	if (*res_o != *res_m)
		return (FAIL);
	res_o = memchr(str, '\0', sizeof(str));
	res_m = ft_memchr(str, '\0', sizeof(str));
	if (*res_o != *res_m)
		return (FAIL);
	res_o = memchr(str, 'x', sizeof(str));
	res_m = ft_memchr(str, 'x', sizeof(str));
	if (res_o != NULL && res_m != NULL)
		return (FAIL);
	return (OK);
}
