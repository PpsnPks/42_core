/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pphingkh <pphingkh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 18:57:45 by pphingkh          #+#    #+#             */
/*   Updated: 2023/09/15 23:54:08 by pphingkh         ###   ########.fr       */
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
	if (dstsize == 0 || dstsize <= len_dst)
		return (len_src + dstsize);
	while (dst[len_dst])
		len_dst++;
	while (dst[len_src])
		len_src++;
	j = len_dst;
	while (src[i] && i < dstsize - len_dst - 1)
		dst[j++] = src[i++];
	dst[j] = '\0';
	return (len_src + len_dst);
}
