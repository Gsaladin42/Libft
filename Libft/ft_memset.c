/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaladin <gsaladin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 11:00:07 by gsaladin          #+#    #+#             */
/*   Updated: 2021/11/30 19:57:12 by gsaladin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*start;
	size_t	i;

	start = (char *)s;
	i = 0;
	while (i < n)
	{
		start[i] = (char)c;
		i++;
	}
	return (s);
}
