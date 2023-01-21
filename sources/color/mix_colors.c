/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mix_colors.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akayle <akayle@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:48:37 by akayle            #+#    #+#             */
/*   Updated: 2022/11/03 16:48:46 by akayle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/color.h"

inline t_color	mix_colors(t_color *koef, t_color *base)
{
	return ((t_color){base->r * koef->r, base->g * koef->g, base->b * koef->b});
}
