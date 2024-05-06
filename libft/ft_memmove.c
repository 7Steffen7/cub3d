/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sparth <sparth@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 19:38:13 by sparth            #+#    #+#             */
/*   Updated: 2023/10/16 19:08:01 by sparth           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			count;
	unsigned char	*destination;
	unsigned char	*source;

	count = 0;
	destination = (unsigned char *) dst;
	source = (unsigned char *) src;
	if (!dst && !src)
		return (NULL);
	if (source < destination)
	{
		while (len--)
			destination[len] = source[len];
	}
	else
	{
		while (count < len)
		{
			destination[count] = source[count];
			count++;
		}
	}
	return (dst);
}

// int	main()
// {
// 	char dst [] = "whatwhat";
// 	char src [] = "bhatbhat";
// 	ft_memmove(dst, src, 9);
// 	printf("%s\n", dst);
// 	return (0);
// }