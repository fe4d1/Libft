/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cidiaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 18:35:06 by cidiaz            #+#    #+#             */
/*   Updated: 2023/02/18 20:57:15 by cidiaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	int		len;
	int		i;
	char	*new_str;

	len = ft_strlen(str);
	new_str = (char *)malloc(len + 1);
	if (new_str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i <= len)
	{
		new_str[i] = str[i];
		i++;
	}
	return (new_str);
}
