/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sparth <sparth@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 19:32:56 by sparth            #+#    #+#             */
/*   Updated: 2023/10/18 09:41:06 by sparth           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}

// #include <stdio.h>
// int	main()
// {
// 	char str1 [] = "ssss";
// 	char str2 [] = "hhhhh";
// 	char str3 [] = "bbb";
// 	char str4 [] = "8888";
// 	t_list *list1 = ft_lstnew(str1);
// 	t_list *list2 = ft_lstnew(str2);
// 	t_list *list3 = ft_lstnew(str3);
// 	t_list *list4 = ft_lstnew(str4);
// 	ft_lstadd_front(&list1, list2);
// 	ft_lstadd_front(&list1, list3);
// 	ft_lstadd_front(&list1, list4);
// 	printf("%d", ft_lstsize(list1));
// }