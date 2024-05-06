/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sparth <sparth@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 15:17:25 by sparth            #+#    #+#             */
/*   Updated: 2023/11/09 14:44:34 by sparth           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*ptr;

	head = NULL;
	if (!lst || !f)
		return (NULL);
	while (lst)
	{
		ptr = ft_lstnew(f(lst->content));
		if (!ptr)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		ft_lstadd_back(&head, ptr);
		lst = lst->next;
	}
	return (head);
}

// void	delete(void *content)
// {
// 	free(content);
// }

// void	*overwrite(void *content)
// {
// 	ft_strdup("HAllO");
// }

// #include <stdio.h>
// int	main()
// {
// 	char string1 [] = "Helll";
// 	char string2 [] = "belll";
// 	char string3 [] = "selll";
// 	t_list *head = ft_lstnew(string1);
// 	t_list *node1 = ft_lstnew(string2);
// 	t_list *node2 = ft_lstnew(string3);
// 	ft_lstadd_back(&head, node1);
// 	ft_lstadd_back(&head, node2);
// 	t_list *overwritten = ft_lstmap(head, delete, overwrite);
// 	while (overwritten)
// 	{
// 		printf("%s",overwritten->content);
// 		overwritten = overwritten->next;
// 	}
// }