/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostrik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 19:18:00 by akostrik          #+#    #+#             */
/*   Updated: 2022/07/10 14:14:22 by amouhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int		i;
	char	j;

	i = 0;
	while (++i <= y)
	{
		j = 0;
		while (++j <= x)
		{
			if (i == 1 && j == 1)
				ft_putchar ('A');
			else if (i == 1 && j == x)
				ft_putchar ('C');
			else if (i == y && j == 1)
				ft_putchar ('A');
			else if (i == y && j == x)
				ft_putchar ('C');
			else if (y == 1 || x == 1 || i == 1 || i == y || j == 1 || j == x)
				ft_putchar ('B');
			else
				ft_putchar (' ');
			if (j == x)
				ft_putchar ('\n');
		}
	}
}
