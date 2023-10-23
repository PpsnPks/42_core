/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pphingkh <pphingkh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 22:43:09 by pphingkh          #+#    #+#             */
/*   Updated: 2023/10/01 21:50:41 by pphingkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_word(char const *s, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

int	count_sub(char const *s, char c, int *i)
{
	int		count;

	count = 0;
	if (s[*i])
	{
		while (s[*i] && s[*i] == c)
			*i += 1;
		while (s[*i] && s[*i] != c)
		{
			count++;
			*i += 1;
		}
	}
	return (count);
}

void	ft_free_all(char **ans)
{
	int	i;

	i = 0;
	while (ans[i])
		free(ans[i++]);
	free(ans);
}

void	ft_set_zero(int *i0, int *i1, int *i2)
{
	*i0 = 0;
	*i1 = 0;
	*i2 = 0;
}
//i[0] --index for s
//i[1] --row for ans
//i[2] --index in s for check count_sub

char	**ft_split(char const *s, char c)
{
	int		i[3];
	int		j;
	char	**ans;

	ft_set_zero(&i[0], &i[1], &i[2]);
	j = 0;
	ans = (char **)malloc(sizeof(char *) * (count_word(s, c) + 1));
	if (!ans)
		return (free(ans), NULL);
	while (i[1] < count_word(s, c))
	{
		ans[i[1]] = (char *)malloc(sizeof(char) * (count_sub(s, c, &i[2]) + 1));
		if (!ans[i[1]])
			return (ft_free_all(ans), NULL);
		j = 0;
		while (s[i[0]] && s[i[0]] == c)
			i[0]++;
		while (s[i[0]] && s[i[0]] != c)
			ans[i[1]][j++] = s[i[0]++];
		ans[i[1]][j] = '\0';
		i[1]++;
	}
	ans[i[1]] = NULL;
	return (ans);
}

/*
int	main(void)
{
	char s[99] = "a cat eat fish";
	char **kk = ft_split(s, ' ');
	int word_count = count_word(s, ' ');

	for (int i = 0 ; i < word_count + 1; i++)
	{
		printf("\nword = ");
		printchars(kk[i]); printf("\n");
		// printf("\nword = %s\n", kk[i]);
		// free(kk[i]);
	}
	// free(kk[count_word(s,'p')]);
	// free(kk);
	ft_free_all(kk);
	// free(kk[word_count]);
	return (0);
}
*/
/*
void printchars(char *s)
{
	if (!s)
	{
		printf("(null)\n");
		return ;
	}
	while (*s)
	{
		if (*s == 0)
			printf("\\0 ");
		else
			printf("%c ", *(s++));
	}
	if (*s == 0)
		printf("\\0 ");
}
*/
/*
	int word_size_test = (count_sub(s, c, &j));
	printf("ans[%d] = %d + 1\n", i[0], word_size_test);
	ans[i[0]] = (char *)malloc(sizeof(char) * (word_size_test + 1));
*/

// char	**ft_split(char const *s, char c)
// {
// 	int		i[3];
// 	int		j;
// 	char	**ans;

// 	i[0] = 0;
// 	j = 0;
// 	i[2] = count_word(s, c);
// 	ans = (char **)malloc(sizeof(char *) * (i[2] + 1));
// 	while (i[0] <= i[2])
// 		ans[i[0]++] = (char *)malloc(sizeof(char) * (count_sub(s, c, &j) + 1));
// 	i[0] = 0;
// 	i[1] = 0;
// 	while (i[1] < i[2])
// 	{
// 		j = 0;
// 		while (s[i[0]] && s[i[0]] == c)
// 			i[0]++;
// 		while (s[i[0]] && s[i[0]] != c)
// 			ans[i[1]][j++] = s[i[0]++];
// 		ans[i[1]][j] = '\0';
// 		i[1]++;
// 	}
// 	ans[i[1]] = 0;
// 	return (ans);
// }
/*
void	ft_split_ing(char **ans, char const *s, char c, int word)
{
	int	j;

	i[0] = 0;
	i[1] = 0;
	while (i[1] < word)
	{
		j = 0;
		while (s[i[0]] && s[i[0]] == c)
			i[0]++;
		while (s[i[0]] && s[i[0]] != c)
			ans[i[1]][j++] = s[i[0]++];
		ans[i[1]][j] = '\0';
		i[1]++;
	}
	ans[i[1]] = NULL;
}
*/