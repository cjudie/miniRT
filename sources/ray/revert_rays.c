/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revert_rays.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akayle <akayle@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:53:58 by akayle            #+#    #+#             */
/*   Updated: 2022/11/03 16:54:09 by akayle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/ray.h"
#include "../../headers/parsing.h"

void	revert_rays(t_ray **rays, int heigth, int width)
{
	register int	i;
	register int	j;
	t_vec			tmp;

	i = 0;
	while (i < heigth)
	{
		j = 0;
		while (j < width)
		{
			if (rays[i][j].collis.surface != NULL \
										&& rays[i][j].collis.surf_type != BULB)
			{
				tmp = rays[i][j].coords;
				tmp = vec_multiply_nbr(&tmp, rays[i][j].collis.distance);
				rays[i][j].origin = add_vecs(&rays[i][j].origin, &tmp);
				rays[i][j].beam = (t_vec){-tmp.x, -tmp.y, -tmp.z};
				rays[i][j].collis.surf_normal = unit_vector(\
												rays[i][j].collis.surf_normal);
			}
			++j;
		}
		++i;
	}
}
