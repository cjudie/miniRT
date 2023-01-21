/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_ratio.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akayle <akayle@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:56:21 by akayle            #+#    #+#             */
/*   Updated: 2022/11/03 16:57:24 by akayle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/utils.h"
#include "../../headers/validation.h"

void	check_ratio(char *line)
{
	float	ratio;

	check_digit_or_charset(line, ".");
	if (count_char(line, '.') > 1)
		exit_error("Invalid input: invalid ratio");
	ratio = ft_atof(line);
	if (ratio > 1.0F)
		exit_error("Invalid input: invalid ratio (must be positive)");
}
