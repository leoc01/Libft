/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuscaro <lbuscaro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 15:32:46 by lbuscaro          #+#    #+#             */
/*   Updated: 2025/04/15 15:33:14 by lbuscaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftest.h"

int	ft_tolower_test(void)
{
	int		i;

	i = 0;
	while (i <= 127)
	{
		if (tolower(i) != ft_tolower(i))
			return (FAIL);
		i++;
	}
	return (OK);
}
