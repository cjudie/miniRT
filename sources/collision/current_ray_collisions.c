/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   current_ray_collisions.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akayle <akayle@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:47:25 by akayle            #+#    #+#             */
/*   Updated: 2022/11/03 16:48:17 by akayle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/ray.h"
#include "../../headers/parsing.h"

int	current_ray_nearest_collision(t_ray *ray, t_scene *scene, int mode)
{
	int	num;

	num = -1;
	while (++num < scene->num_of.cylinders)
		if (collide_cylinder(ray, &scene->cylinders[num], mode) && mode == FAST)
			return (1);
	num = -1;
	while (++num < scene->num_of.polygons)
		if (collide_poly(ray, &scene->polygons[num], mode) && mode == FAST)
			return (1);
	num = -1;
	while (++num < scene->num_of.spheres)
	{
		if (mode == FAST && scene->spheres[num].type == BULB)
			continue ;
		if (collide_sphere(ray, &scene->spheres[num], mode) && mode == FAST)
			return (1);
	}
	num = -1;
	while (++num < scene->num_of.planes)
		if (collide_plane(ray, &scene->planes[num], mode) && mode == FAST)
			return (1);
	return (0);
}
