/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cidiaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:39:39 by cidiaz            #+#    #+#             */
/*   Updated: 2023/01/12 15:51:33 by cidiaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*res;
	
	res = NULL;
	if (s == NULL)
	{
		return (NULL);
	}
	while (*s != '\0')
	{
		if (*s == (char) c)
		{
			res = ((char *) s);
		}
		s++;
	}
	return (res);
}
