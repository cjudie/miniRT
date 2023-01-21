/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   refresh_rays.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akayle <akayle@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:53:54 by akayle            #+#    #+#             */
/*   Updated: 2022/11/03 16:54:10 by akayle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/validation.h"

void	refresh_rays(t_ray **rays, int heigth, int width)
{
	register int	i;
	register int	j;

	i = 0;
	while (i < heigth)
	{
		j = 0;
		while (j < width)
		{
			rays[i][j].collis.surface = NULL;
			rays[i][j].collis.distance = 3.402823e+38;
			rays[i][j].color = (t_color){0.0F, 0.0F, 0.0F};
			rays[i][j].collis.surf_normal = (t_vec){0};
			rays[i][j].collis.surf_type = 0;
			++j;
		}
		++i;
	}
}
