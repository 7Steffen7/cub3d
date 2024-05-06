/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sparth <sparth@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 19:29:22 by sparth            #+#    #+#             */
/*   Updated: 2023/10/16 18:30:55 by sparth           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*string;

	i = 0;
	j = ft_strlen(s1);
	string = 0;
	if (s1 && set)
	{
		while (s1[i] != '\0' && ft_strchr(set, s1[i]))
			i++;
		while (j > i && s1[j - 1] && ft_strchr(set, s1[j - 1]))
			j--;
		string = malloc(sizeof(char) * (j - i + 1));
		if (string)
			ft_strlcpy(string, &s1[i], j - i + 1);
	}
	return (string);
}

// #include <stdio.h>
// int	main()
// {
// 	char string [] = "abcddabdcbab";
// 	char trim [] = "ab";
// 	printf("%s", ft_strtrim(string, trim));
// 	return (0);
// }