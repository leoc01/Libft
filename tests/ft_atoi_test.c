/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuscaro <lbuscaro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 16:13:13 by lbuscaro          #+#    #+#             */
/*   Updated: 2025/04/21 16:13:52 by lbuscaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftest.h"

int	ft_atoi_test(void)
{
	if (ft_atoi("2147483647") != atoi("2147483647"))
		return (FAIL);
	if (ft_atoi("0") != atoi("0"))
		return (FAIL);
	if (ft_atoi("-0") != atoi("-0"))
		return (FAIL);
	if (ft_atoi(" - 02") != atoi(" - 02"))
		return (FAIL);
	if (ft_atoi(" -23k0") != atoi(" -23k0"))
		return (FAIL);
	if (ft_atoi("+-31") != atoi("+-31"))
		return (FAIL);
	if (ft_atoi("+45") != atoi("+45"))
		return (FAIL);
	if (ft_atoi("-2147483648") != atoi("-2147483648"))
		return (FAIL);
	if (ft_atoi("49") != atoi("49"))
		return (FAIL);
	if (ft_atoi("2147483648") != atoi("2147483648"))
		return (FAIL);
	return (OK);
}
