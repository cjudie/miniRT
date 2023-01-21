/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hadam_product.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akayle <akayle@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:58:08 by akayle            #+#    #+#             */
/*   Updated: 2022/11/03 16:58:55 by akayle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/vector.h"

t_vec	hadam_product(t_vec v1, t_vec v2)
{
	v1.x *= v2.x;
	v1.y *= v2.y;
	v1.z *= v2.z;
	return (v1);
}