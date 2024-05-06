/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sparth <sparth@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:37:57 by sparth            #+#    #+#             */
/*   Updated: 2023/10/24 18:42:28 by sparth           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*string;
	int		i;
	char	check;

	string = (char *) s;
	check = (char) c;
	i = 0;
	while (string[i] != '\0')
	{
		if (string[i] == check)
			return (string + i);
		i++;
	}
	if (string[i] == check)
		return (string + i);
	return (NULL);
}

// #include <stdio.h>
// int	main()
// {
// 	char string[] = "hello";
// 	printf("%s\n", ft_strchr(string, 'l'));
// 	return (0);
// }