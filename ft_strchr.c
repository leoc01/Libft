/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuscaro <lbuscaro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 16:13:57 by lbuscaro          #+#    #+#             */
/*   Updated: 2025/04/15 16:17:16 by lbuscaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while ((unsigned char)s[i] != (unsigned char)c && s[i] != '\0')
	{
		i++;
	}
	if ((unsigned char)c == (unsigned char)s[i])
		return ((char *)&s[i]);
	return (NULL);
}
