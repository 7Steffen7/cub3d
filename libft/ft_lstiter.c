/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sparth <sparth@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 14:23:20 by sparth            #+#    #+#             */
/*   Updated: 2023/10/23 08:47:50 by sparth           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*temp;

	temp = lst;
	while (temp)
	{
		f(temp->content);
		temp = temp->next;
	}
}

// static void	helper(void *content)
//
// 	char *c;

// 	c = "ha";
// 	ft_strlcpy(content, c, sizeof(c));
// }

// #include <stdio.h>
// int	main()
// {
// 	char string1 [] = "Hello";
// 	char string2 [] = "byebbbye";
// 	char string3 [] = "cucucuc";
// 	t_list *header = ft_lstnew(string1); 
// 	t_list *ptr1 = ft_lstnew(string2); 
// 	t_list *ptr2 = ft_lstnew(string3); 
// 	ft_lstadd_back(&header, ptr1);
// 	ft_lstadd_back(&header, ptr2);
// 	t_list *temp = header;
// 	while (temp)
// 	{
// 			printf("%s\n", temp->content);
// 			temp = temp->next;
// 	}
// 	temp = header;
// 	ft_lstiter(header, helper);
// 	while (header)
// 	{
// 			printf("%s\n", header->content);
// 			header = header->next;
// 	}
// }