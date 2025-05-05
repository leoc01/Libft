/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuscaro <lbuscaro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 12:45:05 by lbuscaro          #+#    #+#             */
/*   Updated: 2025/04/22 12:45:42 by lbuscaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftest.h"

int	ft_strjoin_test(void)
{
	char	*str;

	str = ft_strjoin("", " Pey");
	if (strcmp(str, " Pey") != 0)
		return (FAIL);
	free(str);
	str = ft_strjoin("Pimba", " Pey");
	if (strcmp(str, "Pimba Pey") != 0)
		return (FAIL);
	free(str);
	str = ft_strjoin("", "");
	if (strcmp(str, "") != 0)
		return (FAIL);
	free(str);
	str = ft_strjoin("A little longer sentence", ", may also work");
	if (strcmp(str, "A little longer sentence, may also work") != 0)
		return (FAIL);
	free(str);
	return (OK);
}
