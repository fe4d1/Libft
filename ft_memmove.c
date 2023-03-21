/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cidiaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 18:54:16 by cidiaz            #+#    #+#             */
/*   Updated: 2023/01/10 18:57:34 by cidiaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char			*char_dest;
	char			*char_src;
	unsigned long	i;

	if (dst < src)
		return (ft_memcpy(dst, src, n));
	char_dest = (char *) dst + n - 1;
	char_src = (char *) src + n - 1;
	i = n;
	while (i > 0)
	{
		*char_dest-- = *char_src--;
		i--;
	}
	return (dst);
}
