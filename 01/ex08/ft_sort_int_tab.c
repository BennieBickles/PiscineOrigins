/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 15:01:34 by marvin            #+#    #+#             */
/*   Updated: 2022/07/09 08:33:28 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	tamp;

	tamp = *a;
	*a = *b;
	*b = tamp;
}

void	ft_sort_in_tab(int *tab, int size)
{
	int	a;
	int	b;

	a = 0;
	while (a < size - 1)
	{
		b = a + 1;
		while (b < size)
		{
			if (tab[a] > tab[b])
				ft_swap(&tab[a], &tab[b]);
			b++;
		}
		a++;
	}
}
