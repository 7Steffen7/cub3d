/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sparth <sparth@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:31:16 by sparth            #+#    #+#             */
/*   Updated: 2023/11/09 19:58:30 by sparth           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	temp = *lst;
	if (!lst)
		return ;
	while (*lst)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
}

// #include <stdio.h>
// static void	helper(void *content)
// {
// 	free(content);
// }

// int	main()
// {
// 	t_list *head = ft_lstnew(ft_strdup("Hello"));
// 	t_list *node2 = ft_lstnew(ft_strdup("cucu"));
// 	t_list *node3 = ft_lstnew(ft_strdup("byebye"));
// 	ft_lstadd_back(&head, node2);
// 	ft_lstadd_back(&head, node3);
// 	// printf("%s\n", node1->content);
// 	// printf("%s\n", ft_lstlast(node1)->content);
// 	ft_lstclear(&head, helper);
// 	// printf("%s\n", node1->content);
// 	if(head == NULL)
// 		printf("Head == 0");

// }