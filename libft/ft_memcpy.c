/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sparth <sparth@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 19:13:05 by sparth            #+#    #+#             */
/*   Updated: 2023/10/16 20:06:29 by sparth           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*destination;
	char	*source;
	size_t	i;

	destination = (char *) dst;
	source = (char *) src;
	i = 0;
	if (!destination && !source)
		return (NULL);
	while (i < n)
	{
		destination[i] = source[i];
		i++;
	}
	return (dst);
}

// #include <stdio.h>
// int	main()
// {
// 	char dst [] = "whatwhat";
// 	char src [] = "what";
// 	ft_memcpy(dst + 1, src, 4);
// 	printf("%s", dst);
// 	return (0);
// }