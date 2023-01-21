/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_normal_ver.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akayle <akayle@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:57:54 by akayle            #+#    #+#             */
/*   Updated: 2022/11/03 16:58:59 by akayle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/vector.h"

inline t_vec	find_normal_ver(t_vec *vec)
{
	t_vec	var;

	var.x = vec->x * vec->z;
	var.y = vec->y * vec->z;
	var.z = -(vec->x * vec->x + vec->y * vec->y);
	return (unit_vector(var));
}
