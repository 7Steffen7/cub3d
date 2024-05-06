/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sparth <sparth@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:51:02 by sparth            #+#    #+#             */
/*   Updated: 2023/10/17 18:55:06 by sparth           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*head;

	head = malloc(sizeof(t_list));
	if (!head)
		return (NULL);
	head->content = content;
	head->next = NULL;
	return (head);
}

// #include <stdio.h>
// int	main()
// {
// 	char string [] = "Hello";
// 	t_list *check1 = ft_lstnew(string);
// 	printf("OG String: %p\n", string);
// 	printf("Node:%p\n", check1);
// 	printf("Node Data:%p\n", check1->content);
// 	printf("Node link: %p\n", check1->next);
// 	return (0);
// }