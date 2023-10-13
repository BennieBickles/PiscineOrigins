/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 21:15:30 by marvin            #+#    #+#             */
/*   Updated: 2022/07/07 09:23:45 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	y = 1;
	while (x < 99)
	{
		ft_putchar(x / 10 + '0');
		ft_putchar(x % 10 + '0');
		ft_putchar(' ');
		ft_putchar(y / 10 + '0');
		ft_putchar(y % 10 + '0');
		if (x < 98)
			write (1, ", ", 2);
		if (++y > 99)
		y = ++x + 1;
	}
}
