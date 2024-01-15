/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuhayrap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:16:59 by yuhayrap          #+#    #+#             */
/*   Updated: 2024/01/11 16:00:48 by yuhayrap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char const ch, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == ch)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s, char const *set)
{
	char	*ch;
	int		i;
	int		len;

	if (s == NULL)
		return (NULL);
	i = 0;
	while (s[i] && is_in_set(s[i], set))
		i++;
	len = ft_strlen(s) - 1;
	while (len > 0 && is_in_set(s[len], set))
		len--;
	if (len <= i)
	{
		ch = (char *)malloc(1);
		ch[0] = '\0';
		return (ch);
	}
	ch = (char *)malloc(sizeof(char) * (len - i + 2));
	if (ch == NULL)
		return (NULL);
	ft_strlcpy(ch, &s[i], len - i + 2);
	return (ch);
}
