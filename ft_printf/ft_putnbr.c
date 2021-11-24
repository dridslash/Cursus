/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 17:32:42 by mnaqqad           #+#    #+#             */
/*   Updated: 2021/11/23 10:18:00 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	put(char c)
{
	write(1, &c, 1);
	return (1);
}

static int	ft_counter(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

int	ft_putnbr(int n)
{
	unsigned int	d;
	int				count;

	d = 0;
	count = 0;
	if (n < 0)
	{
		count += put('-');
		d = (n * -1);
	}
	else
		d = n;
	if (d > 9)
	{
		ft_putnbr(d / 10);
		ft_putnbr(d % 10);
	}
	else
		put(d % 10 + '0');
	return (ft_counter(n) + count);
}

// int main(int argc, char const *argv[])
// {
// 	int k = ft_putnbr(-100);
// 	printf("\n");
// 	printf ("%d\n",k);
// 	return 0;
// }
