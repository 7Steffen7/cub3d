/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sparth <sparth@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:01:12 by sparth            #+#    #+#             */
/*   Updated: 2023/10/11 10:42:51 by sparth           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;
	size_t	dst_len;
	size_t	i;

	src_len = 0;
	dst_len = 0;
	i = 0;
	while (src[src_len] != '\0')
		src_len++;
	while (dst[dst_len] != '\0')
		dst_len++;
	while (dstsize - i > dst_len + 1 && src[i] != '\0')
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	if (dstsize > dst_len)
		return (src_len + dst_len);
	else
		return (src_len + dstsize);
}

// int	main()
// {
// 	char dst[20] = "012345";
// 	char src[] = "6789";
// 	printf("%lu\n", ft_strlcat(dst, src, 5));
// 	printf("%s\n", dst);
// 	return (0);
// }