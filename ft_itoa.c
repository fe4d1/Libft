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

static int	get_num_len(int n)
{
	int	len;

	len = 0;
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		len++;
		n = -n;
	}
	while (n > 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

static void	reverse_str(char *str, int len)
{
	int	i;
	int	j;
	char	tmp;

	i = 0;
	j = len - 1;
	while (i < j)
	{
		tmp = str[i];
		str[i++] = str[j];
		str[j--] = tmp;
	}
}

char	*ft_itoa(int n)
{
	int	sign;
	int	len;
	char	*str;
	int	i;

	len = get_num_len(n);
	str = malloc(len + 1);
	i = 0;
	if (n < 0)
		sign = -1;
		n = -n;
	else
		sign = 1;
	if (!str)
		return (NULL);
	while (n != 0)
	{
		str[i++] = (n % 10) * sign + '0';
		n /= 10;
	}
	if (sign == -1)
		str[i++] = '-';
	str[i] = '\0';
	reverse_str(str, i);
	return (str);
}
