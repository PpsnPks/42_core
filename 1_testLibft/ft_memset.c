/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pphingkh <pphingkh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 18:05:13 by pphingkh          #+#    #+#             */
/*   Updated: 2023/09/12 18:33:04 by pphingkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The memset() function writes n bytes of value c 
//(converted to an **	unsigned char) to the string s.
void	*ft_memset(void *b, int c, size_t len)
{
	int			i;
	char		*temp;

	i = 0;
	temp = b;
	while (i < len)
	{
		temp[i] = c;
		i++;
	}
}
