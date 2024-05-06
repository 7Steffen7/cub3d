/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sparth <sparth@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 09:19:12 by sparth            #+#    #+#             */
/*   Updated: 2023/10/16 15:58:00 by sparth           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	check;
	unsigned char	*string;
	void			*conv;

	i = 0;
	check = (unsigned char) c;
	string = (unsigned char *) s;
	while (i < n)
	{
		if (string[i] == check)
		{
			conv = (void *) string;
			return (conv + i);
		}
		i++;
	}
	return (NULL);
}

// int	main()
// {
// 	char string [] = "JFDKFLsl";
// 	printf("%s\n", ft_memchr(string, 'K', 4));
// 	return (0);
// }