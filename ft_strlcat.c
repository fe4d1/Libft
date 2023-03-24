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
	size_t	i;
	size_t	dst_len;
	size_t	src_len;
	size_t	res;

	dst_len = 0;
	while (dst[dst_len] && dstsize > 0)
	{
		dst_len++;
		dstsize--;
	}
	src_len = ft_strlen(src);
	res = dst_len + src_len;
	if (dstsize == 0)
		return (res);
	i = dst_len;
	while (*src && i < dstsize - 1)
	{
		dst[i] = *src++;
		i++;
	}
	dst[i] = '\0';
	return (res);
}
