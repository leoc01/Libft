/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuscaro <lbuscaro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 17:23:30 by lbuscaro          #+#    #+#             */
/*   Updated: 2025/04/15 17:26:57 by lbuscaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	if (s == NULL)
	{
		return (NULL);
	}
	i = ft_strlen((char *)s);
	while (i > 0 && s[i] != c)
	{
		i--;
	}
	if (s[i] == c)
	{
		return (&((char *)s)[i]);
	}
	return (NULL);
}
