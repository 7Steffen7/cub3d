/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sparth <sparth@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 10:24:34 by sparth            #+#    #+#             */
/*   Updated: 2023/10/11 19:59:54 by sparth           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*c_haystack;

	i = 0;
	c_haystack = (char *) haystack;
	if (needle[i] == '\0')
		return (c_haystack);
	while (c_haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (c_haystack[i + j] == needle [j] && i + j < len)
		{
			j++;
			if (needle [j] == '\0')
				return (c_haystack + i);
		}
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// int	main()
// {
// 	char	haystack [] = "whats go going o&";
// 	char	needle [] = "z";
// 	printf("%s", ft_strnstr(haystack, needle, 18));
// 	return (0);
// }