/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testman.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pphingkh <pphingkh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 18:31:55 by pphingkh          #+#    #+#             */
/*   Updated: 2023/09/15 21:53:38 by pphingkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int	ft_atoi(const char *str)
{
	long	sum;
	int		sign;
	int		i;

	sum = 0;
	i = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		sum = (sum * 10) + (str[i] - '0');
		i++;
	}
	return (sum * sign);
}

int main() {
   
   // char  *str1 = "This is a long sentence.";
   // char  *str2 = "This is a long sentence.";
   // char  *str3 = "i";
   // char  *str4 = "i";
   // char *ans = "answer";


   printf ("%d\n",atoi("12 345"));
   printf ("%d\n",atoi("            12345"));
   printf ("%d\n",atoi("++12345"));
   printf ("%d\n",atoi("\t+12345"));
   printf ("--------------------------------\n");
   printf ("%d\n",ft_atoi("12 345"));
   printf ("%d\n",ft_atoi("            12345"));
   printf ("%d\n",ft_atoi("++12345"));
   printf ("%d\n",ft_atoi("\t+12345"));
}
