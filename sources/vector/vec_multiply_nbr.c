/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_multiply_nbr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akayle <akayle@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:58:41 by akayle            #+#    #+#             */
/*   Updated: 2022/11/03 16:58:49 by akayle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/vector.h"

inline t_vec	vec_multiply_nbr(t_vec *vec, float nbr)
{
	return ((t_vec){vec->x * nbr, vec->y * nbr, vec->z * nbr});
}
