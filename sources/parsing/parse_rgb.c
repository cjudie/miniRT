/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_rgb.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akayle <akayle@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:52:38 by akayle            #+#    #+#             */
/*   Updated: 2022/11/03 16:52:51 by akayle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/parsing.h"

void	parse_rgb_object(char *line, t_color *color)
{
	char	**rgb;

	rgb = ft_split(line, ',');
	color->r = (float)safe_atoi(rgb[0]) / 255.0F;
	color->g = (float)safe_atoi(rgb[1]) / 255.0F;
	color->b = (float)safe_atoi(rgb[2]) / 255.0F;
	free(rgb[0]);
	free(rgb[1]);
	free(rgb[2]);
	free(rgb);
}

void	parse_rgb_light(char *line, t_color *color, float ratio)
{
	char	**rgb;

	rgb = ft_split(line, ',');
	color->r = (float)safe_atoi(rgb[0]) * ratio;
	color->g = (float)safe_atoi(rgb[1]) * ratio;
	color->b = (float)safe_atoi(rgb[2]) * ratio;
	free(rgb[0]);
	free(rgb[1]);
	free(rgb[2]);
	free(rgb);
}
