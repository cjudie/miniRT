/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unit_vector.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akayle <akayle@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:58:35 by akayle            #+#    #+#             */
/*   Updated: 2022/11/03 16:58:50 by akayle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/vector.h"

inline t_vec	unit_vector(t_vec vec)
{
	float	norm;

	norm = 1.0F / vector_len(&vec);
	return ((t_vec){vec.x * norm, vec.y * norm, vec.z * norm});
}
