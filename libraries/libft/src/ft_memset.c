/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akayle <akayle@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:43:19 by akayle            #+#    #+#             */
/*   Updated: 2022/11/03 16:45:59 by akayle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memset(void *dest, int ch, size_t count)
{
	void	*ptr;

	ptr = dest;
	while (count)
	{
		*((unsigned char *)dest) = ch;
		++dest;
		--count;
	}
	return (ptr);
}
