/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_free.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akayle <akayle@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:55:08 by akayle            #+#    #+#             */
/*   Updated: 2022/11/03 16:55:46 by akayle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "../../headers/minirt.h"

static void	free_pixels(t_pix **pixs, int heigth)
{
	int	i;

	i = 0;
	while (i < heigth)
	{
		free(pixs[i]);
		i++;
	}
	free(pixs);
}

static void	free_rays(t_ray **rays, int heigth)
{
	int	i;

	i = 0;
	while (i < heigth)
	{
		free(rays[i]);
		i++;
	}
	free(rays);
}

static void	free_scene(t_scene *scene)
{
	free(scene->lights);
	free(scene->spheres);
	free(scene->planes);
	free(scene->polygons);
	free(scene->cylinders);
}

int	exit_free(t_minirt *rt)
{
	mlx_clear_window(rt->phong_rt.ptr, rt->phong_rt.win);
	mlx_destroy_window(rt->phong_rt.ptr, rt->phong_rt.win);
	mlx_destroy_image(rt->phong_rt.ptr, rt->buffer.ptr);
	free_scene(&rt->scene);
	free_pixels(rt->screen.pixels, rt->screen.heigth);
	free_rays(rt->screen.rays, rt->screen.heigth);
	mlx_destroy_mlx(rt->phong_rt.ptr);
	exit(EXIT_SUCCESS);
}
