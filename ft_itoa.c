/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrosset <mrosset@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 09:23:18 by mrosset           #+#    #+#             */
/*   Updated: 2024/10/25 12:53:27 by mrosset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*dest;
	size_t	len;
	int		temp;

	len = 0;
	temp = n;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	while (temp)
	{
		temp /= 10;
		len++;
	}
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (dest == NULL)
		return (NULL);
	if (n < 0)
	{
		dest[0] = '-';
		n = -n;
	}
	while (n)
	{
		dest[--len] = (n % 10) + '0';
		n /= 10;
	}
	return (dest);
}
/*
if (n == 0)
	return (ft_strdup("0"));
if (n == -2147483648)
	return (ft_strdup("-2147483648"));*/
/*converti un entier(int) en chaine de caracteres(char *)*/
