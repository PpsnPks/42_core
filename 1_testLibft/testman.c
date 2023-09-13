/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testman.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pphingkh <pphingkh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 18:31:55 by pphingkh          #+#    #+#             */
/*   Updated: 2023/09/13 17:12:03 by pphingkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <string.h>
#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t		i;
	char		*temp;

	i = 0;
	temp = b;
	while (i < len)
	{
		temp[i] = c;
		i++;
	}
	return (temp);
}

int	main(void)
{
	char	strq[30];

	ft_memset(strq, '0', sizeof(char) * 30);
	ft_memset(strq + 1, 43, 3 * sizeof(unsigned char));
	printf ("%s\n", strq);
	return (0);
}
