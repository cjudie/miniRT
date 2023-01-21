/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_normal_hor.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akayle <akayle@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:57:49 by akayle            #+#    #+#             */
/*   Updated: 2022/11/03 16:59:00 by akayle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/vector.h"

inline t_vec	find_normal_hor(t_vec *vec)
{
	t_vec	tmp;

	tmp = (t_vec){vec->y, -vec->x, 0};
	return (unit_vector(tmp));
}
