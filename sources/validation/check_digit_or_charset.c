/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_digit_or_charset.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akayle <akayle@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:56:02 by akayle            #+#    #+#             */
/*   Updated: 2022/11/03 16:57:28 by akayle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/utils.h"
#include "../../headers/validation.h"

void	check_digit_or_charset(char *str, char *charset)
{
	while (*str)
	{
		if (!ft_isdigit(*str) && !ft_strchr(charset, *str))
			exit_error("Invalid input: invalid charset");
		str++;
	}
}
