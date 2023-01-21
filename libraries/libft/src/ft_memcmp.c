/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akayle <akayle@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:43:01 by akayle            #+#    #+#             */
/*   Updated: 2022/11/03 16:46:02 by akayle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;
	int				s;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	s = 0;
	while ((i < n) && !s)
	{
		s = (int)(str1[i] - str2[i]);
		i++;
	}
	return (s);
}
