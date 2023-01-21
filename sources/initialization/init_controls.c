/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_controls.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akayle <akayle@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:50:21 by akayle            #+#    #+#             */
/*   Updated: 2022/11/03 16:51:07 by akayle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/initialization.h"

void	init_controls(t_minirt *rt)
{
	rt->controls = (t_ctrl){0, 0, 0, 1.0F, 0, 0, 0, 0};
	rt->insert_mode = 0;
}
