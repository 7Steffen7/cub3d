/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sparth <sparth@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:25:28 by sparth            #+#    #+#             */
/*   Updated: 2023/12/10 19:04:55 by sparth           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	str_count(char const *s, char c)
{
	size_t	nstring;
	size_t	i;

	nstring = 0;
	i = 0;
	while (s[i])
	{
		if ((s[i] != c && s[i + 1] == c) || (s[i] != c && s[i + 1] == '\0'))
			nstring++;
		i++;
	}
	return (nstring + 1);
}

static void	*fillarr(char *str, char const *s, size_t k, size_t i)
{
	size_t	j;

	j = 0;
	while (k--)
		str[j++] = s[i - k];
	str[j] = '\0';
	return (str);
}

static char	**freenull(char **strarr, long i)
{
	while (i >= 0)
		free(strarr[i--]);
	free(strarr);
	return (NULL);
}

static char	**allo_n_fill(char const *s, char c, char **strarr)
{
	size_t	i;
	long	j;
	size_t	k;

	i = 0;
	j = 0;
	k = 0;
	while (s[i])
	{
		if (s[i] != c)
			k++;
		if ((s[i] != c && s[i + 1] == c) || (s[i] != c && s[i + 1] == '\0'))
		{
			strarr[j] = malloc((++k) * sizeof(char));
			if (!(strarr[j]))
				return (freenull(strarr, j));
			fillarr(strarr[j++], s, --k, i);
			k = 0;
		}
		i++;
	}
	strarr[j] = NULL;
	return (strarr);
}

char	**ft_split(char const *s, char c)
{
	char	**strarr;

	strarr = malloc(str_count(s, c) * sizeof(char *));
	if (!strarr)
		return (NULL);
	return (allo_n_fill(s, c, strarr));
}

// #include <stdio.h>
// int main()
// {
// 	char string [] = ",,111,,22,333,,";
// 	char split = ',';
// 	char **strarr;
// 	strarr = ft_split(string, split);
// 	printf("%p\n", &strarr[0][0]);
// 	printf("testend :%s\n", strarr[0]);
// 	return (0);
// }