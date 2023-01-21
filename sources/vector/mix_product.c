/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mix_product.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akayle <akayle@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:58:21 by akayle            #+#    #+#             */
/*   Updated: 2022/11/03 16:58:53 by akayle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/vector.h"

inline float	mix_product(t_vec *vec1, t_vec *vec2, t_vec *vec3)
{
	t_vec	tmp;

	tmp = cross_product(vec2, vec3);
	return (dot_product(*vec1, tmp));
}
