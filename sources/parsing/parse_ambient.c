/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_ambient.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akayle <akayle@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:51:57 by akayle            #+#    #+#             */
/*   Updated: 2022/11/03 16:53:10 by akayle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/parsing.h"

void	parse_ambient(char *line, t_scene *scene)
{
	char	**params;

	params = ft_split(line, ' ');
	parse_rgb_light(params[1], &scene->ambient, ft_atof(params[0]));
	free(params[0]);
	free(params[1]);
	free(params);
}
