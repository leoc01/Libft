/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuscaro <lbuscaro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 17:28:14 by lbuscaro          #+#    #+#             */
/*   Updated: 2025/04/15 17:29:05 by lbuscaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftest.h"

int	ft_strrchr_test(void)
{
	char	str[13];

	ft_strlcpy(str, "A small test", 13);
	if (ft_strrchr(str, 'A') != &str[0])
		return (FAIL);
	if (ft_strrchr(str, 's') != &str[10])
		return (FAIL);
	if (ft_strrchr(str, ' ') != &str[7])
		return (FAIL);
	if (ft_strrchr(str, 'x') != NULL)
		return (FAIL);
	if (ft_strrchr(str, '\0') != &str[12])
		return (FAIL);
	return (OK);
}
