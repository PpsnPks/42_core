/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pphingkh <pphingkh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 16:11:11 by pphingkh          #+#    #+#             */
/*   Updated: 2023/09/15 16:44:02 by pphingkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = -1;
	if (src == 0 && dst == 0)
		return (0);
	if (src > dst)
		while (++i < len)
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
	else if (src < dst)
	{
		i = len;
		while (--i >= 0)
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
	}
	return (dst);
}
