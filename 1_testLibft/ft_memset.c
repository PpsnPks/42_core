/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pphingkh <pphingkh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 18:05:13 by pphingkh          #+#    #+#             */
/*   Updated: 2023/09/15 23:45:37 by pphingkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The memset() function writes n bytes of value c 
//(converted to an **	unsigned char) to the string s.
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t		i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = c;
		i++;
	}
	return (b); 
}
// Because func is void * so it must return;*/
