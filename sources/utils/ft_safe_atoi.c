/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_safe_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akayle <akayle@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:55:18 by akayle            #+#    #+#             */
/*   Updated: 2022/11/03 16:55:43 by akayle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/utils.h"
#include "../../libraries/libft/libft.h"

int	safe_atoi(const char *str)
{
	long	sum;
	long	lsum;
	int		sign;

	if (!str)
		exit_error("atoi: NULL input");
	sum = 0;
	sign = 1;
	while (((9 <= *str) && (*str <= 13)) || (*str == ' '))
		str++;
	if (*str == '-')
		sign = -1;
	if ((*str == '-') || (*str == '+'))
		str++;
	while (ft_isdigit(*str))
	{
		lsum = sum;
		sum = 10 * sum + *str - '0';
		if (sum < lsum)
			exit_error("atoi: long integer overflow");
		str++;
	}
	if ((sum * sign < -2147483648) || (sum * sign > 2147483647))
		exit_error("atoi: integer overflow");
	return (sum * sign);
}
