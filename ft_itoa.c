/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cidiaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 20:03:11 by cidiaz            #+#    #+#             */
/*   Updated: 2023/02/18 20:49:35 by cidiaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(long n, int len)
{
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	long_n;
	char	*result;
	int		len;
	int		sign;

	long_n = n;
	if (long_n < 0)
	{
		sign = -1;
		long_n = long_n * -1;
		len = 1;
	}
	else
		len = 0;
	len = ft_len(long_n, len);
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (result == NULL)
		return (NULL);
	result[len] = '\0';
	while (len--)
	{
		result[len] = (long_n % 10) + '0';
		long_n /= 10;
	}
	if (sign == -1)
		result[0] = '-';
	return (result);
}
