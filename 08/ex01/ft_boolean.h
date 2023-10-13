/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtortrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 09:28:12 by mtortrot          #+#    #+#             */
/*   Updated: 2022/07/27 14:42:58 by mtortrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

typedef _Bool	t_bool;
enum			e_bool
{
	false = 0,
	true = 1
};

# define FALSE false
# define TRUE true
# define EVEN(number) (number % 2 == 0)
# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an odd message of arguments.\n"
# define SUCCESS 0
#endif
