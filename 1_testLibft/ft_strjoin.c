/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pphingkh <pphingkh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 18:45:05 by pphingkh          #+#    #+#             */
/*   Updated: 2023/09/21 19:13:33 by pphingkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s_join;
	int		i;
	int		j;

	i = 0;
	j = 0;
	s_join = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!s_join)
		return (0);
	while (s1[i])
	{
		s_join[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		s_join[i] = s2[j];
		i++;
		j++;
	}
	s_join[i] = 0;
	return (s_join);
}
