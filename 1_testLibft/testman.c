/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testman.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pphingkh <pphingkh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 18:31:55 by pphingkh          #+#    #+#             */
/*   Updated: 2023/09/12 18:22:26 by pphingkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <string.h>
#include <stdio.h>


void    *memset(void *b, int c, size_t len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		b = c;
		b++;
		i++;
	}
}

int	main(void)
{
	char	*strq;

	strq = "GoodBye";
	printf ("%c\n", strq[2]);
	memset(strq + 1, '+', 1 * sizeof(char));
	printf ("%s\n", strq);
	return (0);
}
