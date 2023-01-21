/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   diffuse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akayle <akayle@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:53:44 by akayle            #+#    #+#             */
/*   Updated: 2022/11/03 16:54:12 by akayle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/ray.h"
#include "../../headers/utils.h"
#include "../../headers/parsing.h"

void	add_diffuse_component(t_ray **rays, t_screen *screen, t_scene *sc)
{
	register int	i;
	register int	j;
	t_color			diffuse;

	i = 0;
	while (i < screen->heigth)
	{
		j = 0;
		while (j < screen->width)
		{
			if (rays[i][j].collis.surface != NULL \
										&& rays[i][j].collis.surf_type != BULB)
			{
				diffuse = current_ray_diffuse(&rays[i][j], sc);
				rays[i][j].color = add_colors(rays[i][j].color, diffuse);
			}
			++j;
		}
		++i;
	}
}
