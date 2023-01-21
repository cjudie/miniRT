/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color_to_vec.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akayle <akayle@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:48:30 by akayle            #+#    #+#             */
/*   Updated: 2022/11/03 16:48:47 by akayle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/color.h"

t_color	color_to_vec(unsigned int color)
{
	t_color		pix;

	pix.r = color / 0x010000;
	color = color - pix.r;
	pix.g = color / 0x000100;
	pix.b = color - pix.g;
	return (pix);
}
