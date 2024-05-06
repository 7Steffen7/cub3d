/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sparth <sparth@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 09:41:04 by sparth            #+#    #+#             */
/*   Updated: 2023/10/16 11:00:56 by sparth           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
}
// static void	ft_toupperfake(unsigned int i, char *c)
// {
// 	if (*c >= 'a' && *c <= 'z')
// 		*c = *c - 32;
// 	else
// 		*c = *c;
// }
// #include <stdio.h>
// int main()
// {
// 	char str [] = "Hello Hello Hello";
// 	ft_striteri(str, ft_toupperfake);
// 	printf("%s", str);
// 	return (0);
// }