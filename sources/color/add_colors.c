/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_colors.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akayle <akayle@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:48:24 by akayle            #+#    #+#             */
/*   Updated: 2022/11/03 16:48:48 by akayle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/color.h"
#include <math.h>

t_color	add_colors(t_color col1, t_color col2)
{
	col2.r = fminf(col2.r + col1.r, 255.0F);
	col2.g = fminf(col2.g + col1.g, 255.0F);
	col2.b = fminf(col2.b + col1.b, 255.0F);
	return (col2);
}
