/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_error.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akayle <akayle@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:55:04 by akayle            #+#    #+#             */
/*   Updated: 2022/11/03 16:55:47 by akayle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "../../libraries/libft/libft.h"

void	exit_error(char *str)
{
	ft_putstr_fd("Error", 1);
	if (str != NULL)
	{
		ft_putstr_fd(". ", 1);
		ft_putstr_fd(str, 1);
	}
	ft_putstr_fd("\n", 1);
	exit(EXIT_FAILURE);
}
