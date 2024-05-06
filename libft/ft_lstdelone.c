/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sparth <sparth@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:15:12 by sparth            #+#    #+#             */
/*   Updated: 2023/10/19 18:47:34 by sparth           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL)
		return ;
	del(lst->content);
	free(lst);
}

// static void	helper(void *content)
// {
// 	free(content);
// }

// #include <stdio.h>
// int	main()
// {
// 	char string1 [] = "Hello";
// 	char string2 [] = "jo";
// 	t_list *node1 = ft_lstnew(ft_strdup(string1));
// 	t_list *node2 = ft_lstnew(ft_strdup(string2));
// 	ft_lstadd_back(&node1, node2);
// 	printf("%s\n",node1->content);
// 	printf("%s\n",ft_lstlast(node1)->content);
// 	ft_lstdelone(node1, helper);
// 	printf("%s\n",node1->content);
// 	printf("%s\n",ft_lstlast(node1)->content);
// 	return (0);
// }
