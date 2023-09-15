/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pphingkh <pphingkh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 20:33:01 by pphingkh          #+#    #+#             */
/*   Updated: 2023/09/15 23:46:17 by pphingkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	need_len;

	i = 0;
	need_len = 0;
	if (!*needle)
		return ((char *)haystack);
	while (needle[need_len])
		need_len++;
	while (haystack[i] != '\0' && i + need_len <= len)
	{
		j = 0;
		if (haystack[i] == needle[j])
			while (needle[j] != '\0' && haystack[i + j] == needle[j])
				j++;
		if (j == need_len)
			return ((char *)haystack + i);
		i++;
	}
	return (0);
}
