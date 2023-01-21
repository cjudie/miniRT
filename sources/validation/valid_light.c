/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_light.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akayle <akayle@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:56:52 by akayle            #+#    #+#             */
/*   Updated: 2022/11/03 16:57:18 by akayle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/validation.h"

void	valid_light(char *line)
{
	char	**params;

	check_digit_or_charset(line, " .,-");
	check_num_of_char(line, ',', 4);
	params = ft_split(line, ' ');
	check_num_of_fields(params, 3);
	check_coords(params[0]);
	check_ratio(params[1]);
	check_rgb(params[2]);
	free(params[0]);
	free(params[1]);
	free(params[2]);
	free(params);
}
