/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_num_of_fields.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akayle <akayle@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:56:16 by akayle            #+#    #+#             */
/*   Updated: 2022/11/03 16:57:25 by akayle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

#include "../../headers/utils.h"

void	check_num_of_fields(char **split, int num)
{
	int	count;

	if (split == NULL)
		exit_error("ft_split error");
	count = 0;
	while (*split)
	{
		split++;
		count++;
	}
	if (count != num)
		exit_error("Invalid input: invalid number of parameters in line");
}
