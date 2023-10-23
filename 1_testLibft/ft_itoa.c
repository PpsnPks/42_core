/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pphingkh <pphingkh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 21:59:45 by pphingkh          #+#    #+#             */
/*   Updated: 2023/10/24 00:43:42 by pphingkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <stdlib.h>

int	len_int(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	long	temp;
	int		len;

	len = len_int(n);
	i = len - 1;
	temp = n;
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (temp < 0)
	{
		str[0] = '-';
		temp *= -1;
		len--;
	}
	while (len - 1 >= 0)
	{
		str[i--] = (temp % 10) + '0';
		temp = temp / 10;
		len--;
	}
	return (str);
}
// #include <stdio.h>
// int	main(void)
// {
// 	char *res = ft_itoa(1);
// 	printf("word = %s\n",res);
// 	free(res);
// }