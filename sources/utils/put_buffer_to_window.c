/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_buffer_to_window.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akayle <akayle@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:55:33 by akayle            #+#    #+#             */
/*   Updated: 2022/11/03 16:55:40 by akayle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/minirt.h"
#include "../../headers/utils.h"

void	put_buffer_to_window(t_minirt *rt, t_img *buf)
{
	if (mlx_put_image_to_window(rt->phong_rt.ptr, rt->phong_rt.win, \
																buf->ptr, 0, 0))
		exit_error("Cannot put image to window");
}
