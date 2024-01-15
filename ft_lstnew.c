/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuhayrap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 16:55:24 by yuhayrap          #+#    #+#             */
/*   Updated: 2024/01/11 17:10:16 by yuhayrap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content)
{
	t_list	*res;

	res = (t_list *)malloc(sizeof(t_list));
	if (res == NULL)
		return (NULL);
	if (content == NULL)
		res->content = NULL;
	else
	{
		res->content = malloc(sizeof(content));
		if (res->content == NULL)
			return (NULL);
		res->content = (void *)content;
	}
	res->next = NULL;
	return (res);
}
