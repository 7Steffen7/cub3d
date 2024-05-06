/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sparth <sparth@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 17:59:14 by sparth            #+#    #+#             */
/*   Updated: 2023/10/11 10:42:06 by sparth           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*string;
	size_t	i;

	string = (char *) s;
	i = 0;
	while (i < n)
	{
		string[i] = '\0';
		i++;
	}
}

// #include <stdio.h>

// int	main()
// {
// 	char string [] = "hello guys";
// 	ft_bzero(string + 5, 6);
// 	printf("%s\n", string);
// 	return (0);
// }