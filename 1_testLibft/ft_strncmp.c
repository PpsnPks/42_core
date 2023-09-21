/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pphingkh <pphingkh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 20:14:23 by pphingkh          #+#    #+#             */
/*   Updated: 2023/09/20 20:55:21 by pphingkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
	// if (n == 0)
	// 	return (0);
	// while (*s1 != 0 && *s2 != 0)
	// {
	// 	if (*s1 != *s2 || n == 1)
	// 		return (*s1 - *s2);
	// 	s1++;
	// 	s2++;
	// 	n--;
	// }
	// return (*s1 - *s2); psointer