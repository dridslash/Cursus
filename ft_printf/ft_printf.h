/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 17:50:32 by mnaqqad           #+#    #+#             */
/*   Updated: 2021/11/22 20:38:43 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

// ft_printf

int	ft_printf(const char *pr, ...);

//help_functions

int	ft_linkhex(unsigned long long n);
int	ft_putchar(char c);
int	ft_puthex(unsigned int n);
int	ft_puthexmem(unsigned long long n);
int	ft_putnbr(int n);
int	ft_putstr(char *s);
int	ft_putu(unsigned int n);
int	ft_puthexmaj(unsigned int n);

#endif