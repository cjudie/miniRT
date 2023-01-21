/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_ambient.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akayle <akayle@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:56:36 by akayle            #+#    #+#             */
/*   Updated: 2022/11/03 16:57:21 by akayle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/validation.h"

void	valid_ambient(char *line)
{
	char	**params;

	check_digit_or_charset(line, " .,-");
	check_num_of_char(line, ',', 2);
	params = ft_split(line, ' ');
	check_num_of_fields(params, 2);
	check_ratio(params[0]);
	check_rgb(params[1]);
	free(params[0]);
	free(params[1]);
	free(params);
}
