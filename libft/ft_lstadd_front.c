/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sparth <sparth@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:13:44 by sparth            #+#    #+#             */
/*   Updated: 2023/12/09 16:15:40 by sparth           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

// #include <stdio.h>
// int	main()
// {
// 	char string1 [] = "Hello";
// 	char string2 [] = "jo";
// 	t_list *check1 = ft_lstnew(string1);
// 	t_list *check2 = ft_lstnew(string2);
// 	printf("%p\n", check1);
// 	printf("%p\n", check2);
// 	printf("list1:%s\n", check1->content);
// 	ft_lstadd_front(&check1, check2);
// 	printf("list1:%s\n", check1->content);
// 	printf("list2 + added list 1:%s\n", check2->next->content);
// }