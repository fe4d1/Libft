/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cidiaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 18:28:11 by cidiaz            #+#    #+#             */
/*   Updated: 2023/02/18 21:00:03 by cidiaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc_overflow(size_t nmemb, size_t size)
{
	size_t	total_size;
	size_t	num_elems;
	void	*ptr;

	total_size = nmemb * size;
	num_elems = nmemb;
	if (num_elems != 0 && total_size / num_elems != size)
	{
		return (NULL);
	}
	ptr = malloc(total_size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	ft_bzero(ptr, total_size);
	return (ptr);
}
