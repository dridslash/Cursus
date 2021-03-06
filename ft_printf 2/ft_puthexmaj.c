/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexmaj.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 20:28:18 by mnaqqad           #+#    #+#             */
/*   Updated: 2021/11/23 11:07:57 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	put(char c)
{
	write(1, &c, 1);
}

static int	ft_counter(unsigned int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / 16;
		i++;
	}
	return (i);
}

int	ft_puthexmaj(unsigned int n)
{
	if (n > 15)
		ft_puthexmaj(n / 16);
	if ((n % 16) > 9)
		put((n % 16) + 55);
	else if ((n % 16) <= 9)
		put((n % 16) + '0');
	return (ft_counter(n));
}
