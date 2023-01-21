/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akayle <akayle@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:43:13 by akayle            #+#    #+#             */
/*   Updated: 2022/11/03 16:46:00 by akayle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	m;

	if (dest > src)
	{
		++n;
		while (--n)
			((unsigned char *)dest)[n - 1] = ((unsigned char *)src)[n - 1];
		return (dest);
	}
	else if (dest < src)
	{
		m = 0;
		while (m < n)
		{
			((unsigned char *)dest)[m] = ((unsigned char *)src)[m];
			m++;
		}
		return (dest);
	}
	else
		return (dest);
}
