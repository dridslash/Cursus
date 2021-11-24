/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_linkhex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 17:48:41 by mnaqqad           #+#    #+#             */
/*   Updated: 2021/11/23 10:19:48 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_linkhex(unsigned long long n)
{
	int	c;

	c = 0;
	c += ft_putstr("0x");
	c += ft_puthexmem(n);
	return (c);
}
