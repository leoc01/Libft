/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuscaro <lbuscaro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 16:02:18 by lbuscaro          #+#    #+#             */
/*   Updated: 2025/04/10 16:02:38 by lbuscaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftest.h"

int	ft_memmove_test(void)
{
	char	str_o[23];
	char	str_m[23];

	strcpy(str_o, "a simple and nice test\0");
	strcpy(str_m, "a simple and nice test\0");
	if (strcmp(str_o, str_m) != 0)
		return (FAIL);
	ft_memmove(str_o + 5, str_o + 2, 6);
	ft_memmove(str_m + 5, str_m + 2, 6);
	if (strcmp(str_o, str_m) != 0)
		return (FAIL);
	ft_memmove(str_o + 2, str_o + 5, 6);
	ft_memmove(str_m + 2, str_m + 5, 6);
	if (strcmp(str_o, str_m) != 0)
		return (FAIL);
	return (OK);
}
