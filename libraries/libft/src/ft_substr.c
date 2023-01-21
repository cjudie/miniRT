/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akayle <akayle@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:45:05 by akayle            #+#    #+#             */
/*   Updated: 2022/11/03 16:45:22 by akayle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	slen;
	size_t	sel;
	size_t	i;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (len <= slen - start)
		sel = len + 1;
	if (len > slen - start)
		sel = slen - start + 1;
	if (start >= slen)
		sel = 1;
	sub = (char *)malloc(sizeof(char) * sel);
	if (!sub)
		return (NULL);
	i = 0;
	while (i < sel - 1)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
