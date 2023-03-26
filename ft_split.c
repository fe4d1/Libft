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


static char	*ft_place_words(char const *s, char c, int *newi)
{
	int     i;
	char    *word;
	int     begin;

	i = 0;
	while (s[*newi] == c && s[*newi])
		(*newi)++;
	begin = *newi;
	while (s[*newi] != c && s[*newi])
		(*newi)++;
	if (!(word = malloc(*newi - begin + 1)))
		return (NULL);
	i = 0;
	while (begin < *newi)
	{
		word[i] = s[begin];
		i++;
		begin++;
	}
	word[i] = '\0';
	return (word);
}

char		**ft_split(char const *s, char c)
{
	char	**strings;
	int		i;
	int		count;
	int		k;

	k = 0;
	count = 0;
	i = 0;
	if (!s || !c)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			count++;
		i++;
	}
	i = 0;
	strings = (char **)malloc((count + 1) * sizeof(char *));
	if (!strings)
		return (NULL);
	while (i < count)
		strings[i++] = ft_place_words(s, c, &k);
	strings[i] = 0;
	return (strings);
}
