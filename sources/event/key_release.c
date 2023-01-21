/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_release.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akayle <akayle@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:49:25 by akayle            #+#    #+#             */
/*   Updated: 2022/11/03 16:50:08 by akayle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/event.h"

int	key_release(int keycode, t_minirt *rt)
{
	if (keycode == KEY_D || keycode == KEY_A || keycode == KEY_W || \
		keycode == KEY_S || keycode == KEY_E || keycode == KEY_Q || \
		keycode == KEY_PLUS || keycode == KEY_MINUS || keycode == KEY_R || \
		keycode == KEY_ESC)
		rt->controls.motion--;
	if (keycode == KEY_D)
		rt->controls.hor_shift--;
	else if (keycode == KEY_A)
		rt->controls.hor_shift++;
	else if (keycode == KEY_W)
		rt->controls.zoom--;
	else if (keycode == KEY_S)
		rt->controls.zoom++;
	else if (keycode == KEY_E)
		rt->controls.ver_shift--;
	else if (keycode == KEY_Q)
		rt->controls.ver_shift++;
	if (keycode == KEY_I)
		rt->insert_mode = 0;
	return (0);
}
