/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sparth <sparth@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 16:32:41 by sparth            #+#    #+#             */
/*   Updated: 2023/10/16 11:38:34 by sparth           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len(long *input, int *isneg, long *decimal)
{
	int	size;

	size = 1;
	if (*input < 0)
	{
		size++;
		*isneg = -1;
		*input *= -1;
	}
	while (*decimal <= *input)
	{
		*decimal *= 10;
		size++;
	}
	size++;
	return (size);
}

char	*ft_itoa(int n)
{
	char	*convert;
	long	decimal;
	long	input;
	int		i;
	int		isneg;

	decimal = 10;
	i = 0;
	isneg = 0;
	input = (long) n;
	convert = malloc(len(&input, &isneg, &decimal) * sizeof(char));
	if (!(convert))
		return (NULL);
	if (isneg == -1)
		convert[i++] = '-';
	while (decimal >= 10)
	{
		decimal /= 10;
		convert[i++] = (input / decimal) + 48;
		input = input % decimal;
	}
	convert[i] = '\0';
	return (convert);
}

// #include <stdio.h>
// int main()
// {
//     int number;

//     number = -2147483648;
//     printf("%s", ft_itoa(number));
//     return (0);
// }