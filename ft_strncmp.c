/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuscaro <lbuscaro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 15:27:48 by lbuscaro          #+#    #+#             */
/*   Updated: 2025/04/16 15:29:18 by lbuscaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (s1 == NULL || s2 == NULL)
	{
		return (0);
	}
	while (s1[i] == s2[i] && i < n - 1 && s1[i])
	{
		i++;
		if (s1[i] != s2[i])
		{
			break ;
		}
	}
	return (s1[i] - s2[i]);
}
