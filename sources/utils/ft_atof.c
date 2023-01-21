/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akayle <akayle@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:55:14 by akayle            #+#    #+#             */
/*   Updated: 2022/11/03 16:55:45 by akayle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libraries/libft/libft.h"

double	ft_atof(const char *str)
{
	double	a;
	int		e;
	char	*sign;

	a = 0.0;
	e = 0;
	sign = (char *)str;
	if (*str == '-')
		str++;
	while (*str != '\0' && ft_isdigit(*str))
		a = a * 10.0 + (*str++ - '0');
	if (*str != '.' && *sign != '-')
		return (a);
	if (*str != '.' && *sign == '-')
		return (-a);
	while ((*str++ != '\0') && ft_isdigit(*str))
	{
		a = a * 10.0 + (*str - '0');
		e -= 1;
	}
	while (e++ < 0)
		a *= 0.1;
	if (*sign == '-')
		return (-a);
	return (a);
}
