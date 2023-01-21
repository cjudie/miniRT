/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize_minirt.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akayle <akayle@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:50:38 by akayle            #+#    #+#             */
/*   Updated: 2022/11/03 16:51:02 by akayle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/initialization.h"

void	initialize_raytracing(t_minirt *rt)
{
	init_window_and_buffers(rt);
	init_controls(rt);
	init_pixels(rt);
	init_rays(rt);
	init_scene(rt);
}
