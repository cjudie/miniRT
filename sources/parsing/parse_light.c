/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_light.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akayle <akayle@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:52:22 by akayle            #+#    #+#             */
/*   Updated: 2022/11/03 16:52:54 by akayle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/parsing.h"
#include "../../headers/minirt.h"

void	parse_light(char *line, t_scene *scene)
{
	static int	light_num;
	char		**params;

	params = ft_split(line, ' ');
	parse_coords(params[0], &scene->lights[light_num].coords);
	parse_rgb_light(params[2], &scene->lights[light_num].color, \
															ft_atof(params[1]));
	free(params[0]);
	free(params[1]);
	free(params[2]);
	free(params);
	light_num++;
}
