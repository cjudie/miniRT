/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_nearest_colisions.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akayle <akayle@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:47:38 by akayle            #+#    #+#             */
/*   Updated: 2022/11/03 16:48:15 by akayle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/collision.h"
#include "../../headers/minirt.h"
#include "../../headers/ray.h"

void	get_first_collisions(t_ray **ray, t_scene *scene, int heigth, int width)
{
	register int	i;
	register int	j;

	i = 0;
	while (i < heigth)
	{
		j = 0;
		while (j < width)
		{
			current_ray_nearest_collision(&ray[i][j], scene, FULL);
			++j;
		}
		++i;
	}
}
