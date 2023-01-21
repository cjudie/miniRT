/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rays_initialization.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akayle <akayle@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:50:48 by akayle            #+#    #+#             */
/*   Updated: 2022/11/03 16:51:00 by akayle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "../../headers/validation.h"

void	init_rays(t_minirt *rt)
{
	int	i;
	int	j;

	rt->screen.rays = safe_malloc(sizeof(*rt->screen.rays) * rt->screen.heigth);
	i = 0;
	while (i < rt->screen.heigth)
	{
		rt->screen.rays[i] = safe_malloc(sizeof(**rt->screen.rays) \
															* rt->screen.width);
		j = 0;
		while (j < rt->screen.width)
		{
			rt->screen.rays[i][j] = (t_ray){0};
			j++;
		}
		i++;
	}
}
