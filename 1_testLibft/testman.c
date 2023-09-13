/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testman.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pphingkh <pphingkh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 18:31:55 by pphingkh          #+#    #+#             */
/*   Updated: 2023/09/13 20:39:05 by pphingkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <string.h>
#include <stdio.h>

int	strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	while (*s1 != 0 && *s2 != 0)
	{
		if (*s1 != *s2 || n == 1)
			return (*s1 - *s2);
		s1++;
		s2++;
		n--;
	}
	return (*s1 - *s2);
}


int	main(void)
{
	char str1[15];
   char str2[15];
   int ret;

   strcpy(str1, "aBCDEiop");
   strcpy(str2, "ABCkklk");

   ret = strncmp(str1, str2, 1);
    printf("%d\n",ret);
   if(ret < 0) {
      printf("str1 is less than str2");
   } else if(ret > 0) {
      printf("str2 is less than str1");
   } else {
      printf("str1 is equal to str2");
   }
}
