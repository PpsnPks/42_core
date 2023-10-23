/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pphingkh <pphingkh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 17:41:35 by pphingkh          #+#    #+#             */
/*   Updated: 2023/10/24 01:08:11 by pphingkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <unistd.h>
// #include <stdlib.h>
// #include <stdio.h>

void	ft_putnbr_fd(int n, int fd)
{
	long	i;
	char	c;

	i = n;
	if (i < 0)
	{
		write(fd, "-", 1);
		i *= -1;
	}
	if (i >= 10)
	{
		ft_putnbr_fd(i / 10, fd);
		c = (i % 10) + '0';
		write(fd, &c, 1);
	}
	else
	{
		c = i + '0';
		write(fd, &c, 1);
	}
}
// int main()
// {
// 	ft_putnbr_fd(0,1);
// 	ft_putnbr_fd(10,1);
// }
