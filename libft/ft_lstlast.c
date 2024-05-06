/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sparth <sparth@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 09:34:15 by sparth            #+#    #+#             */
/*   Updated: 2023/10/18 10:40:54 by sparth           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

// #include <stdio.h>
// int	main()
// {
// 	char string1 [] = "Hello";
// 	char string2 [] = "whats";
// 	char string3 [] = "good";
// 	t_list *node1 = ft_lstnew(string1);
// 	t_list *node2 = ft_lstnew(string2);
// 	t_list *node3 = ft_lstnew(string3);
// 	ft_lstadd_front(&node1, node3);
// 	ft_lstadd_front(&node3, node2);
// 	t_list *check = ft_lstlast(node3);
// 	printf("list last:%s\n", check->content);
// 	return (0);
// }