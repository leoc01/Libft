/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuscaro <lbuscaro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 14:40:19 by lbuscaro          #+#    #+#             */
/*   Updated: 2025/04/06 14:40:52 by lbuscaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTEST_H
# define LIBFTEST_H

# define OK 1
# define FAIL 0

# include <stdlib.h>
# include <ctype.h>
# include <stdio.h>
//# include <string.h>
# include <bsd/string.h>
# include <malloc.h>
# include "libft.h"

int		ft_isalpha_test(void);
int		ft_isdigit_test(void);
int		ft_isalnum_test(void);
int		ft_isascii_test(void);
int		ft_isprint_test(void);
int		ft_strlen_test(void);
int		ft_memset_test(void);
int		ft_bzero_test(void);
int		ft_memcpy_test(void);
int		ft_memmove_test(void);
int		ft_strlcpy_test(void);
int		ft_strlcat_test(void);
int		ft_toupper_test(void);
int		ft_tolower_test(void);
int		ft_strchr_test(void);
int		ft_strrchr_test(void);
int		ft_strncmp_test(void);
int		ft_memchr_test(void);
int		ft_memcmp_test(void);
int		ft_strnstr_test(void);
int		ft_atoi_test(void);
int		ft_calloc_test(void);
int		ft_strdup_test(void);
int		ft_substr_test(void);
int		ft_strjoin_test(void);
int		ft_strtrim_test(void);
int		ft_split_test(void);
int		ft_strmapi_test(void);

#endif
