/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   missing_ft_split.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cidiaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 20:53:07 by cidiaz            #+#    #+#             */
/*   Updated: 2023/02/18 20:39:48 by cidiaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *str, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i] != c && str[i] != '\0')
			count++;
		while (str[i] != c && str[i] != '\0')
			i++;
	}
	return (count);
}

static int	ft_word_len(char const *str, char c)
{
	int	len;

	len = 0;
	while (str[len] && str[len] != c)
		len++;
	return (len);
}

static void	*check_null(const void *ptr)
{
	if (!ptr)
		return (NULL);
	return ((void *)ptr);
}

static void	check_nullf(void **ptr, int i)
{
	if (!ptr[i])
	{
		while (--i >= 0)
		{
			free(ptr[i]);
		}
	}
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**result;

	check_null(s);
	result = (char **)malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	check_nullf((void **)result, ft_count_words(s, c));
	i = -1;
	j = 0;
	while (++i < ft_count_words(s, c))
	{
		k = 0;
		result[i] = (char *)malloc(sizeof(char) * (ft_word_len(&s[j], c) + 1));
		check_nullf((void **)result[i], ft_word_len(&s[j], c));
		while (s[j] == c)
			j++;
		while (s[j] != c && s[j])
			result[i][k++] = s[j++];
		result[i][k] = '\0';
	}
	result[i] = 0;
	return (result);
}
