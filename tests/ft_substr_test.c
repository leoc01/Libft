/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuscaro <lbuscaro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 12:05:15 by lbuscaro          #+#    #+#             */
/*   Updated: 2025/04/22 12:32:43 by lbuscaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftest.h"

int	ft_substr_test(void)
{
	char	*str;

	str = ft_substr("A nice", 3, 0);
	if (str[0] != '\0')
		return (FAIL);
	str = ft_substr("A nice test", 7, 3);
	if (strcmp(str, "tes") != 0)
		return (FAIL);
	str = ft_substr("A nice test", 7, 4);
	if (strcmp(str, "test") != 0)
		return (FAIL);
	str = ft_substr("A nice test", 7, 5);
	if (strcmp(str, "test") != 0)
		return (FAIL);
	str = ft_substr("L", 7, 4);
	if (str[0] != '\0')
		return (FAIL);
	free(str);
	return (OK);
}
