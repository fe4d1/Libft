/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cidiaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 19:34:54 by cidiaz            #+#    #+#             */
/*   Updated: 2023/01/10 19:38:49 by cidiaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t  lsize;
	size_t  dsize;

	lsize = 0;
	dsize = ft_strlen(dst);
	while (*dst && dstsize > 0 && dstsize--)
	{
		dst++;
		lsize++;
	}
	while (*src && dstsize > 1 && dstsize--)
	{
		*dst++ = *src++;
	}
	if (dstsize == 1)
	{
		*dst = '\0';
	}
	return (dsize + lsize);
}
