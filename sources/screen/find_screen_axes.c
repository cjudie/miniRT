/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_screen_axes.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akayle <akayle@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:54:37 by akayle            #+#    #+#             */
/*   Updated: 2022/11/03 16:54:50 by akayle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/screen.h"

inline void	find_screen_axes(t_screen *screen, t_vec *direction)
{
	screen->hor_axis = find_normal_hor(direction);
	screen->ver_axis = find_normal_ver(direction);
}
