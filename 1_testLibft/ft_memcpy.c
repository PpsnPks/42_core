/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pphingkh <pphingkh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 20:04:32 by pphingkh          #+#    #+#             */
/*   Updated: 2023/09/15 23:45:26 by pphingkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)dst)[i] = ((const char *)src)[i];
		i++;
	}
	return (dst);
}
//*((char *)dst + i) = *((const char *)src + i);
/* #include <stdio.h>
int main()
{
    char str1[] = "Geeks";
    char str2[] = "Quiz";
 
    puts("str1 before memcpy ");
    puts(str1);
 
    // Copies contents of str2 to str1
    ft_memcpy(str1, str2, sizeof(str2));
 
    puts("\nstr1 after memcpy ");
    puts(str1);
 
    return 0;
}
*/
