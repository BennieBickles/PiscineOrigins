/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 15:01:04 by marvin            #+#    #+#             */
/*   Updated: 2022/07/09 08:48:58 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	tamp;

	a = 0;
	while (a < (size / 2))
	{
		tamp = tab[a];
		tab[a] = tab[size - 1 - a];
		tab[size - 1 - a] = tamp;
		a++;
	}
}
