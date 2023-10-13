/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 16:39:24 by marvin            #+#    #+#             */
/*   Updated: 2022/07/14 11:52:26 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_cap(char c)
{
	int	cap;

	cap = 1;
	cap += 0;
	if (c >= 32 && c <= 47)
		cap = 1;
	if (c >= 58 && c <= 63)
		cap = 1;
	if (c >= 48 && c <= 57)
		cap = 0;
	if (c >= 65 && c <= 90)
		cap = 0;
	if (c >= 97 && c <= 122)
		cap = 0;
	return (cap);
}

char	*ft_strcapitalize(char *str)
{
	int		a;
	int		cap;
	char	*tmp;

	a = 0;
	tmp = str;
	cap = 1;
	while (tmp[a] != '\0')
	{
		if (tmp[a] >= 97 && tmp[a] <= 122 && cap)
		{
			tmp[a] -= 32;
			cap = 0;
		}
		else if (tmp[a] >= 65 && tmp[a] <= 90 && !cap)
		{
			tmp[a] += 32;
		}
		cap = ft_is_cap(str[a]);
		a++;
	}
	return (tmp);
}
