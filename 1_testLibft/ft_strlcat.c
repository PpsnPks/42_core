/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pphingkh <pphingkh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 18:57:45 by pphingkh          #+#    #+#             */
/*   Updated: 2023/09/20 17:55:16 by pphingkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	i;
	size_t	j;

	i = 0;
	len_dst = 0;
	len_src = 0;
	while (dst[len_dst] && len_dst < dstsize)
		len_dst++;
	while (src[len_src])
		len_src++;
	if (dstsize == 0 || dstsize <= len_dst)
		return (len_src + dstsize);
	j = len_dst;
	while (src[i] && i < dstsize - len_dst - 1)
		dst[j++] = src[i++];
	dst[j] = '\0';
	return (len_src + len_dst);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	dest[30];
// 	char	*src = (char *)"AAAAAAAAA";

// 	memset (dest, 0, 30);
// 	dest[0] = 'B';
// 	printf("%zu",ft_strlcat(dest, src, 0) == strlen(src) && !strcmp(dest, "B"));

// }