/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuscaro <lbuscaro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 16:48:35 by lbuscaro          #+#    #+#             */
/*   Updated: 2025/04/14 16:49:28 by lbuscaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftest.h"

int	ft_strlcat_test(void)
{
	char	dest_o[10];
	char	dest_m[10];
	size_t	return_o;
	size_t	return_m;

	dest_o[0] = '\0';
	dest_m[0] = '\0';
	return_o = strlcat(dest_o, "", sizeof(dest_o));
	return_m = ft_strlcat(dest_m, "", sizeof(dest_m));
	if (return_m != return_o || strcmp(dest_o, dest_m) != 0)
		return (FAIL);
	return_o = strlcat(dest_o, "1234", sizeof(dest_o));
	return_m = ft_strlcat(dest_m, "1234", sizeof(dest_m));
	if (return_m != return_o || strcmp(dest_o, dest_m) != 0)
		return (FAIL);
	return_o = strlcat(dest_o, "56789", sizeof(dest_o));
	return_m = ft_strlcat(dest_m, "56789", sizeof(dest_m));
	if (return_m != return_o || strcmp(dest_o, dest_m) != 0)
		return (FAIL);
	return_o = strlcat(dest_o, "not", sizeof(dest_o));
	return_m = ft_strlcat(dest_m, "not", sizeof(dest_m));
	if (return_m != return_o || strcmp(dest_o, dest_m) != 0)
		return (FAIL);
	return (OK);
}
