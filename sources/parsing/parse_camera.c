/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_camera.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akayle <akayle@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:52:02 by akayle            #+#    #+#             */
/*   Updated: 2022/11/03 16:53:09 by akayle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include "../../headers/parsing.h"

void	parse_camera(char *line, t_scene *scene)
{
	char	**params;

	params = ft_split(line, ' ');
	parse_coords(params[0], &scene->cam.coords);
	parse_coords(params[1], &scene->cam.direction);
	if (scene->cam.direction.z == 1.0F)
		scene->cam.direction = (t_vec){0.000001F, 0.0F, 0.999999F};
	scene->cam.fov = ft_atof(params[2]);
	free(params[0]);
	free(params[1]);
	free(params[2]);
	free(params);
	scene->cam.focal = 1.0F / tanf(scene->cam.fov * M_PI / 360.0F);
	scene->cam_default = scene->cam;
}
