/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sparth <sparth@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 13:35:00 by sparth            #+#    #+#             */
/*   Updated: 2023/10/20 12:07:10 by sparth           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*buffer;

	buffer = malloc(count * size);
	if (!buffer)
		return (NULL);
	ft_bzero(buffer, count * size);
	return (buffer);
}

// int	main()
// {
// 	int *array;
// 	int i;
// 	array = ft_calloc (10, sizeof(int));
// 	i = 0;
// 	while (i < 10)
// 	{
// 		printf("%d\n", array[i]);
// 		i++;
// 	}
// 	free(array);
// 	return (0);
// }