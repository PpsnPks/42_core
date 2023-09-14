/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testman.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pphingkh <pphingkh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 18:31:55 by pphingkh          #+#    #+#             */
/*   Updated: 2023/09/14 19:42:38 by pphingkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <string.h>
#include <stdio.h>

void  *ft_memchr(const void *s, int c, size_t n)
{
   size_t i;

   i = 0;
   while (i < n)
	{
		if (*(unsigned char *) s == (unsigned char)c || *(unsigned char *) s = 0)
			return ((void *)s);
	   i++;
		s++;
	}
	return (0);
}

int	main(void)
{
	char  str1[15];
   char  str2[10];
   char  str3[10];
   char  str4[15];

   strcpy (str1, "1234567890");
   strcpy (str2, "ABCkklk");
   strcpy (str3, "123456789");
   strcpy (str4, "ABCkklk");

   printf ("%s\n",ft_memchr (str1,'0',3));
   printf ("%s\n",ft_memchr (str1,'a',16));
   printf ("%s\n",ft_memchr (str1,'1',3));
   printf ("%s\n",ft_memchr (str2,'C',3));
   printf ("%s\n",ft_memchr (str2,'C',2));
   printf("----------------\n");
   printf ("%s\n",memchr (str1,'0',3));
   printf ("%s\n",memchr (str1,'a',16));
   printf ("%s\n",memchr (str1,'1',3));
   printf ("%s\n",memchr (str2,'C',3));
   printf ("%s\n",memchr (str2,'C',2));
}
