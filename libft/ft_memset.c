/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sparth <sparth@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 15:17:36 by sparth            #+#    #+#             */
/*   Updated: 2023/10/11 10:42:42 by sparth           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*string;
	unsigned char	convert;
	unsigned long	i;

	string = (unsigned char *) b;
	convert = (unsigned char) c;
	i = 0;
	while (i < len)
	{
		string[i] = convert;
		i++;
	}
	return (string);
}

// #include <stdio.h>

// int	main()
// {
// 	char og_string [] = "world world";
// 	ft_memset(og_string + 6, 'g', 5 * sizeof(char));
// 	printf("%s\n", og_string); 
// 	return (0);
// }