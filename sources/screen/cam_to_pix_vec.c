/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cam_to_pix_vec.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akayle <akayle@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:54:26 by akayle            #+#    #+#             */
/*   Updated: 2022/11/03 16:54:52 by akayle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/screen.h"

t_vec	cam_to_pix_vec(t_cam *cam, t_pix *pix_coords, t_screen *screen)
{
	t_vec	hor_axis;
	t_vec	ver_axis;
	t_vec	sum;

	hor_axis = vec_multiply_nbr(&screen->hor_axis, pix_coords->x);
	ver_axis = vec_multiply_nbr(&screen->ver_axis, pix_coords->y);
	sum = vec_multiply_nbr(&cam->direction, cam->focal);
	sum = add_vecs(&sum, &hor_axis);
	sum = add_vecs(&sum, &ver_axis);
	return (sum);
}
