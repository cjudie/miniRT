/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akayle <akayle@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:44:06 by akayle            #+#    #+#             */
/*   Updated: 2022/11/03 16:45:34 by akayle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	size_t	lens;

	lens = ft_strlen(s1);
	ptr = malloc(lens + 1);
	if (ptr == NULL)
		return (NULL);
	ptr[lens] = '\0';
	ft_strlcpy(ptr, s1, lens + 1);
	return (ptr);
}
