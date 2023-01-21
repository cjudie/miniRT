/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sphere_collision.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akayle <akayle@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:48:00 by akayle            #+#    #+#             */
/*   Updated: 2022/11/03 16:48:11 by akayle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/ray.h"
#include "../../headers/parsing.h"

static int	update_collision(t_ray *ray, t_sphere *sphere, float distance)
{
	t_vec	tmp;

	ray->collis.surface = (void *)sphere;
	ray->collis.distance = distance;
	tmp = vec_multiply_nbr(&ray->coords, distance);
	tmp = add_vecs(&ray->origin, &tmp);
	ray->collis.surf_normal = subtract_vecs(&tmp, &sphere->center);
	if (sphere->type == BULB)
		ray->collis.surf_type = BULB;
	else
		ray->collis.surf_type = 0;
	return (1);
}

int	collide_sphere(t_ray *ray, t_sphere *sphere, int mode)
{
	float	coeffs[3];
	float	d;
	float	t[2];
	t_vec	co;

	co = subtract_vecs(&ray->origin, &sphere->center);
	coeffs[0] = dot_product(ray->coords, ray->coords);
	coeffs[1] = 2 * dot_product(ray->coords, co);
	coeffs[2] = dot_product(co, co) - (sphere->radius * sphere->radius);
	d = (coeffs[1] * coeffs[1]) - (4 * coeffs[0] * coeffs[2]);
	if (d < 0)
		return (0);
	d = sqrt(d);
	coeffs[0] = 1 / (2.0 * coeffs[0]);
	t[0] = (-coeffs[1] + d) * coeffs[0];
	t[1] = (-coeffs[1] - d) * coeffs[0];
	if (t[0] <= 0 && t[1] <= 0)
		return (0);
	if (t[0] <= 0 || (t[1] > 0 && t[0] >= t[1]))
		t[0] = t[1];
	if (t[0] - EPSILON >= ray->collis.distance)
		return (0);
	if (mode == FAST || update_collision(ray, sphere, t[0] - EPSILON))
		return (1);
	return (1);
}
