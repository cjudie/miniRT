/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_property.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akayle <akayle@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:55:28 by akayle            #+#    #+#             */
/*   Updated: 2022/11/03 16:55:41 by akayle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/minirt.h"
#include "../../headers/utils.h"
#include "../../libraries/libft/libft.h"

int	get_property(t_minirt *rt)
{
	char	*line;

	write(1, "insert command\n", 15);
	line = get_next_line(0);
	if (line && ft_strcmp(line, "cam\n") == 0)
		printf("cam position: %f,%f,%f\ncam direction: %f,%f,%f\n", \
		rt->scene.cam.coords.x, rt->scene.cam.coords.y, \
		rt->scene.cam.coords.z, \
		rt->scene.cam.direction.x, rt->scene.cam.direction.y, \
		rt->scene.cam.direction.z);
	free(line);
	write(1, "done\n", 5);
	return (0);
}
