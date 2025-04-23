/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuscaro <lbuscaro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 13:56:55 by lbuscaro          #+#    #+#             */
/*   Updated: 2025/04/22 15:00:56 by lbuscaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <unistd.h>

static size_t	ft_countwords(char const *str, char *chr);
static int		ft_memallo(char **words, size_t word_count, size_t word_size);

char	**ft_split(char const *s, char c)
{
	char	**words;
	size_t	i;
	size_t	word_count;
	size_t	word_size;

	if (s == NULL)
		return (NULL);
	words = (char **)malloc((ft_countwords(s, &c) + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);
	i = 0;
	word_count = 0;
	while (i < ft_strlen(s))
	{
		if (s[i] == c && ++i)
			continue ;
		if (ft_strchr(&s[i], c) == NULL)
			c = '\0';
		word_size = ft_strchr(&s[i], c) - &s[i] + 1;
		if (ft_memallo(words, word_count, word_size))
			return (NULL);
		ft_strlcpy(words[word_count], &s[i], word_size);
		i += word_size;
		word_count++;
	}
	words[word_count] = NULL;
	return (words);
}

static int	ft_memallo(char **words, size_t word_count, size_t word_size)
{
	words[word_count] = (char *)malloc((word_size) * sizeof(char));
	if (words[word_count] == NULL)
	{
		while (word_count > 0)
		{
			free(words[--word_count]);
		}
		free(words);
		return (1);
	}
	return (0);
}

static size_t	ft_countwords(char const *str, char *chr)
{
	size_t	word_count;
	size_t	i;

	i = 0;
	word_count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == *chr && ++i)
		{
			continue ;
		}
		if (str[i + 1] == *chr || str[i + 1] == '\0')
		{
			word_count++;
		}
		i++;
	}
	return (word_count);
}
