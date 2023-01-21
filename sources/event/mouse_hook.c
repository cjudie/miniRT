/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouse_hook.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akayle <akayle@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:49:30 by akayle            #+#    #+#             */
/*   Updated: 2022/11/03 16:49:58 by akayle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/event.h"

int	mouse_hook(int x2, int y2, t_minirt *rt)
{
	static int	flag;
	static int	x1;
	static int	y1;

	if (flag)
	{
		rt->controls.d_fi = (x1 - x2) * rt->screen.density \
												* 2.0F * rt->controls.velocity;
		rt->controls.d_teta = (y1 - y2) * rt->screen.density \
												* 2.0F * rt->controls.velocity;
	}
	x1 = x2;
	y1 = y2;
	flag = 1;
	return (0);
}
