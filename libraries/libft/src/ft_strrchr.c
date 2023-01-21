/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akayle <akayle@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:44:54 by akayle            #+#    #+#             */
/*   Updated: 2022/11/03 16:45:24 by akayle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;

	while (c >= 0)
		c = c - 256;
	c = c + 256;
	ptr = NULL;
	while (*s != '\0')
	{
		if (*s == c)
			ptr = (char *)s;
		s++;
	}
	if ((*s == '\0') && (c == '\0'))
		return ((char *)s);
	return (ptr);
}
