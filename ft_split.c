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

static size_t	count_words(char const *s, char c);
static void		change_delimiter(char *s, char c);

char	**ft_split(char const *s, char c)
{
	char	**words;
	size_t	word_count;
	char	*s_cpy;
	size_t	i;
	size_t	w;

	if (s == NULL)
		return (NULL);
	word_count = count_words(s, c);
	words = (char **)malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);
	i = 0;
	w = 0;
	s_cpy = ft_strdup(s);
	change_delimiter(s_cpy, c);
	while (i < ft_strlen(s))
	{
		if (s[i] != c && (i == 0 || (i > 0 && s[i - 1] == c)))
			words[w++] = ft_strdup(&s_cpy[i]);
		i++;
	}
	free(s_cpy);
	return (words);
}

static void	change_delimiter(char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			s[i] = '\0';
		}
		i++;
	}
}

static size_t	count_words(char const *s, char c)
{
	size_t	word_count;
	size_t	i;

	i = 0;
	word_count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			word_count++;
		i++;
	}
	return (word_count);
}
