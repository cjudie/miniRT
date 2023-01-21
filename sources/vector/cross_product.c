/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cross_product.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akayle <akayle@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:57:41 by akayle            #+#    #+#             */
/*   Updated: 2022/11/03 16:59:02 by akayle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/vector.h"

inline t_vec	cross_product(t_vec *vec1, t_vec *vec2)
{
	t_vec	prod;

	prod.x = -vec1->y * vec2->z + vec1->z * vec2->y;
	prod.y = -vec1->z * vec2->x + vec1->x * vec2->z;
	prod.z = -vec1->x * vec2->y + vec1->y * vec2->x;
	return (prod);
}
