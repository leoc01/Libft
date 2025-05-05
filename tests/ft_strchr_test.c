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
	char	str[50];

	ft_strlcpy(str, "\x80\xFF Hello, teste!\x00", 50);
	if (ft_strchr(str, 'A') != strchr(str, 'A'))
		return (FAIL);
	if (ft_strchr(str, 's') != strchr(str, 's'))
		return (FAIL);
	if (ft_strchr(str, ' ') != strchr(str, ' '))
		return (FAIL);
	if (ft_strchr(str, 'x') != strchr(str, 'x'))
		return (FAIL);
	if (ft_strchr(str, '\0') != strchr(str, '\0'))
		return (FAIL);
	if (ft_strchr(str, 0xFF) != strchr(str, 0xFF))
		return (FAIL);
	return (OK);
}
