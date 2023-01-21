/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akayle <akayle@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:44:00 by akayle            #+#    #+#             */
/*   Updated: 2022/11/03 16:45:35 by akayle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	size_t	i;
	int		dif;

	i = 0;
	dif = 0;
	while (dif == 0 && (s1[i] != 0 || s2[i] != 0))
	{
		dif = (unsigned char)s1[i] - (unsigned char)s2[i];
		++i;
	}
	return (dif);
}
