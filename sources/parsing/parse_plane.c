/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_plane.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akayle <akayle@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:52:27 by akayle            #+#    #+#             */
/*   Updated: 2022/11/03 16:52:53 by akayle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/parsing.h"

void	parse_plane(char *line, t_scene *scene)
{
	static int	num;
	char		**params;

	params = ft_split(line, ' ');
	parse_coords(params[0], &scene->planes[num].coords);
	parse_coords(params[1], &scene->planes[num].normal);
	parse_rgb_object(params[2], &scene->planes[num].color);
	free(params[0]);
	free(params[1]);
	free(params[2]);
	free(params);
	num++;
}
