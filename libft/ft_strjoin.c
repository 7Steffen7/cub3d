/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sparth <sparth@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 13:22:59 by sparth            #+#    #+#             */
/*   Updated: 2023/10/16 18:45:54 by sparth           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	count;
	size_t	offset;
	char	*glue;

	count = ft_strlen(s1) + ft_strlen(s2);
	glue = malloc((count + 1) * sizeof(char));
	if (!glue)
		return (NULL);
	count = 0;
	offset = 0;
	while (s1[count] != '\0')
	{
		glue[count] = s1[count];
		count++;
	}
	while (s2[offset] != '\0')
	{
		glue[count + offset] = s2[offset];
		offset++;
	}
	glue[offset + count] = '\0';
	return (glue);
}

// #include <stdio.h>
// int main()
// {
// 	char	string1 [] = "string";
// 	char	string2 [] = "join";
// 	printf("%s", ft_strjoin(string1, string2));
// 	return (0);
// }