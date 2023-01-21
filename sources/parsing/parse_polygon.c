/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_polygon.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akayle <akayle@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:52:33 by akayle            #+#    #+#             */
/*   Updated: 2022/11/03 16:52:52 by akayle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/parsing.h"
#include "../../headers/minirt.h"

void	parse_polygon(char *line, t_scene *scene)
{
	static int	num;
	char		**params;

	params = ft_split(line, ' ');
	parse_coords(params[0], &scene->polygons[num].peak1);
	parse_coords(params[1], &scene->polygons[num].peak2);
	parse_coords(params[2], &scene->polygons[num].peak3);
	parse_rgb_object(params[3], &scene->polygons[num].color);
	free(params[0]);
	free(params[1]);
	free(params[2]);
	free(params[3]);
	free(params);
	num++;
}
