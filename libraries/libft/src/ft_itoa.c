/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akayle <akayle@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:42:47 by akayle            #+#    #+#             */
/*   Updated: 2022/11/03 16:46:09 by akayle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static	size_t	dlen(int n)
{
	size_t	len;

	len = 0;
	if (!n)
		return (1);
	while (n)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	len;

	len = dlen(n);
	str = (char *)malloc(sizeof(char) * (len + 1 + (n < 0)));
	if (str == NULL)
		return (str);
	str[len + (n < 0)] = '\0';
	if (n == 0)
		str[0] = '0';
	if (n < 0)
		str[0] = '-';
	while (n)
	{
		str[len - 1 + (n < 0)] = (char)((1 - 2 * (n < 0)) * (n % 10) + 48);
		n = n / 10;
		len--;
	}
	return (str);
}
