/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minirt.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akayle <akayle@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:39:53 by akayle            #+#    #+#             */
/*   Updated: 2022/11/03 16:41:02 by akayle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINIRT_H
# define MINIRT_H

# include <stdio.h>

# include "scene.h"
# include "screen.h"
# include "controls.h"
# include "../libraries/libmlx/headers/mlx.h"

typedef struct s_ctrl	t_ctrl;
typedef struct s_scene	t_scene;
typedef struct s_screen	t_screen;

typedef struct s_minirt
{
	int			insert_mode;
	t_mlx		phong_rt;
	t_img		buffer;
	t_scene		scene;
	t_ctrl		controls;
	t_screen	screen;
}	t_minirt;

#endif