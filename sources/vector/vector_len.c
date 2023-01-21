/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_len.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akayle <akayle@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:58:46 by akayle            #+#    #+#             */
/*   Updated: 2022/11/03 16:58:48 by akayle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>

#include "../../headers/vector.h"

inline float	vector_len(t_vec *vec)
{
	return (sqrtf(dot_product(*vec, *vec)));
}
