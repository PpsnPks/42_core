/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pphingkh <pphingkh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:18:29 by pphingkh          #+#    #+#             */
/*   Updated: 2023/09/21 22:29:50 by pphingkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	find_end(char const *s1, char const *set)
{
	int	end;
	int	i;
	int	check;

	end = ft_strlen(s1);
	while (end > 0)
	{
		i = 0;
		check = 0;
		while (set[i])
		{
			if (s1[end - 1] == set[i])
				check = 1;
			i++;
		}
		if (check == 1)
			end--;
		else
			break ;
	}
	return (end);
}

int	find_start(char const *s1, char const *set)
{
	int	start;
	int	i;
	int	check;

	start = 0;
	while (s1[start])
	{
		i = 0;
		check = 0;
		while (set[i])
		{
			if (s1[start] == set[i])
				check = 1;
			i++;
		}
		if (check == 1)
			start++;
		else
			break ;
	}
	return (start);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		i;
	char	*result;

	i = 0;
	start = find_start(s1, set);
	end = find_end(s1, set);
	if (end > start)
		result = malloc(sizeof(char) * (end - start + 1));
	else
		result = malloc(sizeof(char) * 1);
	if (!result)
		return (0);
	while (start + i < end)
	{
		result[i] = s1[start + i];
		i++;
	}
	result[i] = 0;
	return (result);
}
// #include <string.h>
// #include <stdio.h>
// int main(void)
// {
// 	char *s = ft_strtrim("   xxxtripouille", " x");
// 	printf("%d",s[11]);
// }