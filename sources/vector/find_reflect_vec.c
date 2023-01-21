/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_reflect_vec.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akayle <akayle@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:57:59 by akayle            #+#    #+#             */
/*   Updated: 2022/11/03 16:58:57 by akayle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/vector.h"

t_vec	reflect_vec(t_vec ray, t_vec norm)
{
	float	kof;
	t_vec	reflect;

	kof = 2.0F * ((ray.x * norm.x) + (ray.y * norm.y) + (ray.z * norm.z)) / \
	((norm.x * norm.x) + (norm.y * norm.y) + (norm.z * norm.z));
	reflect.x = ray.x - kof * norm.x;
	reflect.y = ray.y - kof * norm.y;
	reflect.z = ray.z - kof * norm.z;
	return (reflect);
}
