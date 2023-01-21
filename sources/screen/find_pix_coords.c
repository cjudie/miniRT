/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_pix_coords.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akayle <akayle@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:54:32 by akayle            #+#    #+#             */
/*   Updated: 2022/11/03 16:54:51 by akayle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/screen.h"

t_pix	find_pix_coords(int i, int j, t_screen *screen)
{
	t_pix	var;

	var.x = (2.0 * screen->density * (float)j) + screen->density - 1.0;
	var.y = (2.0 * screen->density * (float)i) \
									+ screen->density - screen->aspect_ratio;
	return (var);
}
