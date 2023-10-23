/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pphingkh <pphingkh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:37:22 by pphingkh          #+#    #+#             */
/*   Updated: 2023/10/24 00:28:07 by pphingkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*s;
	size_t	all_size;
	size_t	i;

	i = 0;
	all_size = count * size;
	if (size && count && count >= 4294967295 / size)
		return (0);
	s = (void *)malloc(all_size);
	if (!s)
		return (0);
	while (i < all_size)
		((unsigned char *)s)[i++] = 0;
	return (s);
}

// #include <stdio.h>
// int main(void)
// {
// 	printf("%d",calloc(-2147483648, -2147483648) == NULL);
// 	//printf("%d\n",ft_calloc(-2147483648, -2147483648) == NULL);
// }
