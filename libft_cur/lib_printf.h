/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_printf.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 10:57:47 by mnaqqad           #+#    #+#             */
/*   Updated: 2021/11/22 16:47:39 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_PRINTF_H
# define LIB_PRINTF_H

# include <unistd.h>
# include <stdlib.h>

//ft_printf
int		ft_printf(const char *pr, ...);

//help_functions
int		ft_puthex(unsigned int n, int i);
int		ft_linkhex(unsigned long long n, int i);
int		ft_putchar(char c);
int		ft_puthexmem(unsigned long long n, int i);
void	ft_putendl(char *s, int fd);
int		ft_putnbr(int nb);
int		ft_putu(unsigned int n);
int		ft_putstr(char *s);

#endif