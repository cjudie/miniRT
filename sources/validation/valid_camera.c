/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_camera.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akayle <akayle@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:56:42 by akayle            #+#    #+#             */
/*   Updated: 2022/11/03 16:57:20 by akayle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/validation.h"

static void	check_field_of_view(char *line)
{
	float	fov;

	check_digit_or_charset(line, ".");
	if (count_char(line, '.') > 1)
		exit_error("Invalid input: camera: field of view: invalid format");
	fov = ft_atof(line);
	if (fov < 0.0F || fov > 180.0F)
		exit_error("Invalid input: camera: field of view: invalid value");
}

void	valid_camera(char *line)
{
	char	**params;

	check_digit_or_charset(line, " .,-");
	check_num_of_char(line, ',', 4);
	params = ft_split(line, ' ');
	check_num_of_fields(params, 3);
	check_coords(params[0]);
	check_normal_vect(params[1]);
	check_field_of_view(params[2]);
	free(params[0]);
	free(params[1]);
	free(params[2]);
	free(params);
}
