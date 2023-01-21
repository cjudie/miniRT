/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akayle <akayle@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:44:48 by akayle            #+#    #+#             */
/*   Updated: 2022/11/03 16:45:25 by akayle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needlen;
	size_t	j;

	needlen = ft_strlen(needle);
	j = 0;
	if (ft_strlen(haystack) < len)
		len = ft_strlen(haystack);
	while (j + needlen <= len)
	{
		if (ft_strncmp((haystack + j), needle, needlen) != 0)
			++j;
		else
			return ((char *)haystack + j);
	}
	return (NULL);
}
