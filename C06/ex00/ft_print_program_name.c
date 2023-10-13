/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 16:00:40 by marvin            #+#    #+#             */
/*   Updated: 2022/07/20 16:14:09 by mtortrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	a;

	a = 0;
	if (argc > 0)
	{
		while (argv[0][a] != '\0' && argc)
		{
			ft_putchar(argv[0][a]);
			a++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
