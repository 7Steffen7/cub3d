/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sparth <sparth@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 08:54:40 by sparth            #+#    #+#             */
/*   Updated: 2023/10/16 11:00:05 by sparth           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	unsigned int	i;
	char			*string;

	i = 0;
	string = malloc(sizeof(char) * ((ft_strlen(s)) + 1));
	if (!(string))
		return (NULL);
	while (s[i])
	{
		string[i] = f(i, s[i]);
		i++;
	}
	string[i] = '\0';
	return (string);
}
// static char	ft_toupperfake(unsigned int i, char c)
// {
// 	if (c >= 'a' && c <= 'z')
// 		return (c - 32);
// 	return (c);
// }
// #include <stdio.h>
// int	main()
// {
// 	char str[] = "hello hello hello";
// 	printf("%s", ft_strmapi(str, ft_toupperfake));
// 	return(0);
// }