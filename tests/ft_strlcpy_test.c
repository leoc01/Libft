/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuscaro <lbuscaro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 13:24:42 by lbuscaro          #+#    #+#             */
/*   Updated: 2025/04/14 13:25:42 by lbuscaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftest.h"

int	ft_strlcpy_test(void)
{
	char	dest_o[9];
	char	dest_m[9];
	int		return_o;
	int		return_m;

	return_o = strlcpy(dest_o, "123456789", 9);
	return_m = ft_strlcpy(dest_m, "123456789", 9);
	if (return_o != return_m || strcmp(dest_o, dest_m) != 0)
		return (FAIL);
	return_o = strlcpy(dest_o, "12345678", 6);
	return_m = ft_strlcpy(dest_m, "12345678", 6);
	if (return_o != return_m || strcmp(dest_o, dest_m) != 0)
		return (FAIL);
	return_o = strlcpy(dest_o, "", 9);
	return_m = ft_strlcpy(dest_m, "", 9);
	if (return_o != return_m || strcmp(dest_o, dest_m) != 0)
		return (FAIL);
	return_o = strlcpy(dest_o, "12", 0);
	return_m = ft_strlcpy(dest_m, "12", 0);
	if (return_o != return_m)
		return (FAIL);
	return (OK);
}
