/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 11:09:06 by marvin            #+#    #+#             */
/*   Updated: 2022/07/14 11:19:12 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_puthexa(unsigned char c)
{
	char	*b;

	b = "0123456789abcdef";
	ft_putchar(b[c / 16]);
	ft_putchar(b[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (*str < ' ' || *str == 127)
		{
			ft_putchar('\\');
			ft_puthexa(*str);
		}
		else
			ft_putchar(*str);
		str++;
	}
}
