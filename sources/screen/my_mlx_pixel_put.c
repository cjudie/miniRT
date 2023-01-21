/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_mlx_pixel_put.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akayle <akayle@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:54:41 by akayle            #+#    #+#             */
/*   Updated: 2022/11/03 16:54:49 by akayle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/screen.h"

void	my_mlx_pixel_put(t_img *pic, int x, int y, unsigned int color)
{
	char	*dst;

	dst = pic->addr + (y * pic->len + x * (pic->depth / 8));
	*(unsigned int *)dst = color;
}
