/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_vecs.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akayle <akayle@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:57:37 by akayle            #+#    #+#             */
/*   Updated: 2022/11/03 16:59:03 by akayle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/vector.h"

inline t_vec	add_vecs(t_vec *vec1, t_vec *vec2)
{
	return ((t_vec){vec1->x + vec2->x, vec1->y + vec2->y, vec1->z + vec2->z});
}
