/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 17:23:22 by marvin            #+#    #+#             */
/*   Updated: 2022/07/16 09:05:34 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	a;
	unsigned int	b;

	if (*to_find == '\0')
		return (str);
	a = 0;
	while (str[a] != '\0')
	{
		b = 0;
		while (to_find[b] != '\0' && str[a + b] == to_find[b])
			++b;
		if (to_find[b] == '\0')
			return (&str[a]);
		++a;
	}
	return (0);
}
