/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colorize_buffer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akayle <akayle@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:53:30 by akayle            #+#    #+#             */
/*   Updated: 2022/11/03 16:54:16 by akayle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/minirt.h"
#include "../../headers/ray.h"

void	colorize_buffer(t_img *buffer, t_ray **rays, t_screen *screen)
{
	register int	i;
	register int	j;

	i = 0;
	while (i < screen->heigth)
	{
		j = 0;
		while (j < screen->width)
		{
			my_mlx_pixel_put(buffer, j, i, vec_to_color(&rays[i][j].color));
			++j;
		}
		++i;
	}
}
