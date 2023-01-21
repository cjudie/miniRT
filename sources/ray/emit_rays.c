/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   emit_rays.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akayle <akayle@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:53:49 by akayle            #+#    #+#             */
/*   Updated: 2022/11/03 16:54:11 by akayle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/minirt.h"
#include "../../headers/ray.h"

void	emit_rays(t_screen *screen, t_cam *cam, int heigth, int width)
{
	register int	j;
	register int	i;
	t_vec			tmp;

	i = 0;
	while (i < heigth)
	{
		j = 0;
		while (j < width)
		{
			tmp = cam_to_pix_vec(cam, &screen->pixels[i][j], screen);
			screen->rays[i][j].origin = add_vecs(&cam->coords, &tmp);
			screen->rays[i][j].coords = unit_vector(tmp);
			++j;
		}
		++i;
	}
}
