/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuhayrap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 14:34:06 by yuhayrap          #+#    #+#             */
/*   Updated: 2024/01/12 14:34:08 by yuhayrap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*node;
	t_list	*next;

	node = *lst;
	if (!lst || !del || !(*lst))
		return ;
	while (node)
	{
		next = node->next;
		(*del)(node->content);
		free(node);
		node = next;
	}
	*lst = NULL;
}
