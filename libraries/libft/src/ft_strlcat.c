/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akayle <akayle@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:44:23 by akayle            #+#    #+#             */
/*   Updated: 2022/11/03 16:45:31 by akayle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	i;
	size_t	destlen;
	size_t	srclen;

	srclen = ft_strlen(src);
	destlen = 0;
	while (dest[destlen] && destlen < destsize)
		destlen++;
	if (destlen == destsize)
		return (srclen + destsize);
	i = 0;
	while ((destlen + i + 1 < destsize) && src[i])
	{
		dest[destlen + i] = src[i];
		++i;
	}
	dest[destlen + i] = '\0';
	return (srclen + destlen);
}
