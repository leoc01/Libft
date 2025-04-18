/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuscaro <lbuscaro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 16:22:39 by lbuscaro          #+#    #+#             */
/*   Updated: 2025/04/15 16:23:12 by lbuscaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftest.h"

int	ft_strchr_test(void)
{
	char	str[13];

	ft_strlcpy(str, "A small test", 13);
	if (ft_strchr(str, 'A') != &str[0])
		return (FAIL);
	if (ft_strchr(str, 's') != &str[2])
		return (FAIL);
	if (ft_strchr(str, ' ') != &str[1])
		return (FAIL);
	if (ft_strchr(str, 'x') != NULL)
		return (FAIL);
	if (ft_strchr(str, '\0') != &str[12])
		return (FAIL);
	return (OK);
}
