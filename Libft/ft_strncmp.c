/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaladin <gsaladin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 15:19:34 by gsaladin          #+#    #+#             */
/*   Updated: 2021/11/30 19:47:29 by gsaladin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	unsigned char	*s11;
	unsigned char	*s22;

	i = 0;
	s11 = (unsigned char *)s1;
	s22 = (unsigned char *)s2;
	while (i < n && (s11[i] != '\0' || s22[i] != '\0'))
	{
		if ((s11[i] - s22[i]) != 0)
			return (s11[i] - s22[i]);
		i++;
	}
	return (0);
}
