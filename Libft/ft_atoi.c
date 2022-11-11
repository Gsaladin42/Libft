/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaladin <gsaladin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 13:17:13 by gsaladin          #+#    #+#             */
/*   Updated: 2021/12/01 00:10:22 by gsaladin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t				index;
	int					negative;
	unsigned long int	result;

	index = 0;
	negative = 1;
	result = 0;
	while (ft_isspace(str[index]) == 1)
		index++;
	if (str[index] == '+' || str[index] == '-')
		if (str[index++] == '-')
			negative *= -1;
	while (ft_isdigit(str[index]))
	{
		result *= 10;
		result += str[index] - '0';
		index++;
	}
	return (result * negative);
}
