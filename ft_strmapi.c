/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuhayrap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 13:14:57 by yuhayrap          #+#    #+#             */
/*   Updated: 2024/01/11 13:21:59 by yuhayrap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*ch;

	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	ch = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (ch == NULL)
		return (NULL);
	while (s[i])
	{
		ch[i] = (*f)(i, s[i]);
		i++;
	}
	ch[i] = '\0';
	return (ch);
}
