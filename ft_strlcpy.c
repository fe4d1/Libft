/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cidiaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 19:02:22 by cidiaz            #+#    #+#             */
/*   Updated: 2023/01/25 20:43:00 by cidiaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;
	size_t	copy_len;
	size_t	i;

	src_len = 0;
	i = 0;
	while (src[src_len] != '\0')
	{
		src_len++;
	}
	if (dstsize == 0)
		return (src_len);
	if (src_len < dstsize - 1)
		copy_len = src_len;
	if (src_len >= dstsize - 1)
	{	
		copy_len = dstsize - 1;
	}
	while (i < copy_len)
	{
		dst[i] = src[i];
		i++;
	}
	dst[copy_len] = '\0';
	return (src_len);
}
