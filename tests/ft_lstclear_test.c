/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_test.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuscaro <lbuscaro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 13:33:06 by lbuscaro          #+#    #+#             */
/*   Updated: 2025/05/02 13:33:38 by lbuscaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftest.h"

static void	ft_del(void *content);

int	ft_lstclear_test(void)
{
	t_list	*numbers;
	int		*content;
	size_t	i;

	numbers = NULL;
	i = 0;
	while (i < 5)
	{
		content = malloc(sizeof(int));
		if (content == NULL)
		{
			ft_lstclear(&numbers, ft_del);
			break ;
		}
		*content = i;
		ft_lstadd_back(&numbers, ft_lstnew(content));
		i++;
	}
	ft_lstclear(&numbers, ft_del);
	if (numbers != NULL)
		return (FAIL);
	return (OK);
}

static void	ft_del(void *content)
{
	free(content);
}
