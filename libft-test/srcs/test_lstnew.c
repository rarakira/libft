/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstnew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaela <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 11:14:10 by lbaela            #+#    #+#             */
/*   Updated: 2021/04/28 14:34:52 by lbaela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test1_lstnew()
{
	t_list	*ptr;

	printf("\n\t***** Test 1: Lstnew *****\n\n");
	
	ptr = ft_lstnew("Hello World!");
	if (ptr)
		printf("New list created:\nContent: %s\n", ptr->content);
	else
	{
		printf("New list was not created");
	}
	free(ptr);
	printf("\n\t***** *********** *****\n\n");
}

void	test2_lstadd_front()
{
	t_list	*ptr;
	t_list	*ptr2;
	t_list	**start = NULL;

	printf("\n\t***** Test 2: lstadd_front *****\n\n");
	
	start = (t_list **)malloc(sizeof(t_list *));
	if (!start)
	{
		printf("\nError\n");
		return ;
	}
	
	ptr = ft_lstnew("Hello World!");
	if (ptr)
		printf("New list 1 created:\nContent: %s\n", ptr->content);
	else
	{
		printf("New list 1 was not created");
	}

	*start = ptr;
	printf("start ptr is %p\n", *start);
	ptr2 = ft_lstnew("123456");
	if (ptr)
		printf("New list 2 created:\nContent: %s\n", ptr->content);
	else
	{
		printf("New list 2 was not created");
	}
	printf("ptr content was: %s\n", (*start)->content);
	ft_lstadd_front(start, ptr2);
	printf("ptr content is: %s\n", (*start)->content);

	free(start);
	free(ptr);
	printf("\n\t***** *********** *****\n\n");
}

void	test3_lstsize()
{
	t_list	*ptr;
	t_list	*ptr2;
	t_list	**start = NULL;
	t_list	*temp = NULL;

	printf("\n\t***** Test 3: lstadd_front *****\n\n");
	
	start = (t_list **)malloc(sizeof(t_list *));
	if (!start)
	{
		printf("\nError\n");
		return ;
	}
	
	ptr = ft_lstnew("Hello World!");
	if (!ptr)
	{
		printf("\nError\n");
		return ;
	}

	*start = ptr;
	ptr2 = ft_lstnew("123456");
	if (!ptr2)
	{
		printf("\nError\n");
		return ;
	}
	ft_lstadd_front(start, ptr2);
	ptr2 = ft_lstnew("Bye Bye");
	if (!ptr2)
	{
		printf("\nError\n");
		return ;
	}
	ft_lstadd_front(start, ptr2);
	printf("The list contains %d items\n", ft_lstsize(*start));

	while (*start)
	{
		temp = *start;
		*start = (*start)->next;
		free(temp);
		printf("freed ptr\n");
	}
	free(start);
	printf("\n\t***** *********** *****\n\n");
}

void	test4_lstlast()
{
	t_list	*ptr;
	t_list	*ptr2;
	t_list	**start = NULL;
	t_list	*temp = NULL;

	printf("\n\t***** Test 4: lstlast *****\n\n");
	
	start = (t_list **)malloc(sizeof(t_list *));
	if (!start)
	{
		printf("\nError\n");
		return ;
	}
	
	ptr = ft_lstnew("Hello World!");
	if (!ptr)
	{
		printf("\nError\n");
		return ;
	}

	*start = ptr;
	ptr2 = ft_lstnew("123456");
	if (!ptr2)
	{
		printf("\nError\n");
		return ;
	}
	ft_lstadd_front(start, ptr2);
	ptr2 = ft_lstnew("Bye Bye");
	if (!ptr2)
	{
		printf("\nError\n");
		return ;
	}
	ft_lstadd_front(start, ptr2);
	printf("The last item's content is %s\n", (ft_lstlast(*start))->content);

	while (*start)
	{
		temp = *start;
		*start = (*start)->next;
		free(temp);
		printf("freed ptr\n");
	}
	free(start);
	printf("\n\t***** *********** *****\n\n");
}

void	test5_lstadd_back()
{
	t_list	*ptr;
	t_list	*ptr2;
	t_list	**start = NULL;
	t_list	*temp = NULL;

	printf("\n\t***** Test 5: lstadd_back *****\n\n");
	
	start = (t_list **)malloc(sizeof(t_list *));
	if (!start)
	{
		printf("\nError\n");
		return ;
	}
	
	ptr = ft_lstnew("Hello World!");
	if (!ptr)
	{
		printf("\nError\n");
		return ;
	}

	*start = ptr;
	ptr2 = ft_lstnew("123456");
	if (!ptr2)
	{
		printf("\nError\n");
		return ;
	}
	ft_lstadd_front(start, ptr2);
	ptr2 = ft_lstnew("Bye Bye");
	if (!ptr2)
	{
		printf("\nError\n");
		return ;
	}
	ft_lstadd_back(start, ptr2);
	printf("The last item's content is %s\n", (ft_lstlast(*start))->content);

	while (*start)
	{
		temp = *start;
		*start = (*start)->next;
		free(temp);
		printf("freed ptr\n");
	}
	free(start);
	printf("\n\t***** *********** *****\n\n");
}

void	test_lstnew()
{
	//test1_lstnew();
    //test2_lstadd_front();
	//test3_lstsize();
	//test4_lstlast();
	test5_lstadd_back();
}
