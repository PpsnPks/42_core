/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pphingkh <pphingkh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 19:21:00 by pphingkh          #+#    #+#             */
/*   Updated: 2023/09/21 14:51:25 by pphingkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*cpy;
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (s1[len])
		len++;
	cpy = malloc(sizeof(*s1) * (len + 1));
	while (i < len)
	{
		*(cpy + i) = *(s1 + i);
		i++;
	}
	*(cpy + i) = '\0';
	return (cpy);
}
