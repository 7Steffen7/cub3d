/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sparth <sparth@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:35:38 by sparth            #+#    #+#             */
/*   Updated: 2023/10/16 15:29:53 by sparth           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*string;
	char	check;

	i = 0;
	string = (char *) s;
	check = (char) c;
	while (string[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (string[i] == check)
			return (string + i);
		i--;
	}
	return (NULL);
}

// int	main()
// {
// 	char string[] = "Hello what ppapdpa pabfa";
// 	printf("%s", ft_strrchr(string, 's'));
// 	return (0);
// }