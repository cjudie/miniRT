/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_coords.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akayle <akayle@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:52:11 by akayle            #+#    #+#             */
/*   Updated: 2022/11/03 16:52:56 by akayle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/parsing.h"

void	parse_coords(char *line, t_vec *vec)
{
	char	**xyz;

	xyz = ft_split(line, ',');
	vec->x = ft_atof(xyz[0]);
	vec->y = ft_atof(xyz[1]);
	vec->z = ft_atof(xyz[2]);
	if (vec->z == 1.0F)
	{
		vec->x = 0;
		vec->y = 0.00174533;
		vec->z = 0.999998;
	}
	free(xyz[0]);
	free(xyz[1]);
	free(xyz[2]);
	free(xyz);
}
