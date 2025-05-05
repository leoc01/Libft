/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuscaro <lbuscaro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 13:39:43 by lbuscaro          #+#    #+#             */
/*   Updated: 2025/04/22 13:40:12 by lbuscaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftest.h"

int	ft_strtrim_test(void)
{
	char	*str;

	str = ft_strtrim("aa.Teste.ab", "ab.");
	if (strcmp(str, "Teste") != 0)
		return (FAIL);
	free(str);
	str = ft_strtrim(" aa.Teste.ab", "ab.");
	if (strcmp(str, " aa.Teste") != 0)
		return (FAIL);
	free(str);
	str = ft_strtrim("\taa.Teste.ab", "ab.");
	if (strcmp(str, "\taa.Teste") != 0)
		return (FAIL);
	free(str);
	str = ft_strtrim("", "ab.");
	if (strcmp(str, "") != 0)
		return (FAIL);
	free(str);
	str = ft_strtrim("Lala", "");
	if (strcmp(str, "Lala") != 0)
		return (FAIL);
	free(str);
	return (OK);
}
