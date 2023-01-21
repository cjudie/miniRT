/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_num_of_char.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akayle <akayle@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:56:10 by akayle            #+#    #+#             */
/*   Updated: 2022/11/03 16:57:26 by akayle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/utils.h"

void	check_num_of_char(char *str, char ch, int num)
{
	int	count;

	count = 0;
	while (*str)
	{
		if (*str == ch)
			++count;
		str++;
	}
	if (count != num)
		exit_error("Invalid input: invalid number of char in line");
}
