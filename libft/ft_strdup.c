/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sparth <sparth@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:44:36 by sparth            #+#    #+#             */
/*   Updated: 2023/10/16 18:47:05 by sparth           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	size_t	k;
	char	*copy;

	i = 0;
	k = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	i += 1;
	copy = malloc(i * sizeof(char));
	if (!copy)
		return (NULL);
	while (k < i)
	{
		copy[k] = s1[k];
		k++;
	}
	return (copy);
}

// int	main()
// {
// 	char string [] = "53";
// 	char *copy;
// 	copy = ft_strdup(string);
// 	printf("%s", copy);
// 	free(copy);
// 	return (0);
// }