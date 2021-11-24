/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 17:29:03 by mnaqqad           #+#    #+#             */
/*   Updated: 2021/11/23 09:57:27 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "ft_printf.h"

static int	ft_casecheck(const char *str, va_list p, int i, int j)
{
	while (str[i])
	{
		if (str[i] != '%')
			j += ft_putchar(str[i]);
		else if (str[++i] == 's')
			j += ft_putstr((char *)va_arg(p, char *));
		else if (str[i] == 'c')
			j += ft_putchar((char)va_arg(p, int));
		else if (str[i] == 'd' || str[i] == 'i')
			j += ft_putnbr(va_arg(p, int));
		else if (str[i] == 'X')
			j += ft_puthexmaj((unsigned int)va_arg(p, unsigned int));
		else if (str[i] == 'x')
			j += ft_puthex((unsigned int)va_arg(p, unsigned int));
		else if (str[i] == 'p')
			j += ft_linkhex(va_arg(p, unsigned long long));
		else if (str[i] == 'u')
			j += ft_putu((unsigned int)va_arg(p, unsigned int));
		else if (str[i] == '%')
			j += ft_putchar('%');
		i++;
	}
	return (j);
}

int	ft_printf(const char *pr, ...)
{
	va_list	arg_ptr;
	int		i;
	int		j;

	i = 0;
	j = 0;
	va_start(arg_ptr, pr);
	i = ft_casecheck(pr, arg_ptr, i, j);
	va_end(arg_ptr);
	return (i);
}

// int main()
// {
//     unsigned int  a = 4294967295;
// 	char *d="hello";
//    // char c='';
//    int w = 123;
//     unsigned int k=-10;
// 	int n1=1;
// 	int n2=2;
//     //printf("0");
//     ///
//     //printf("758578message %c a %s  a %p \n",'a',"hello",&a);
// 	int l = ft_printf("%d",012);
// 	printf("\n");
// 	int l2 = printf("%d ",012);
// 	//printf("%p\n",&d);
// 	printf("\nft_printf >> %d",l);
// 	printf("\nprintf >>    %d\n",l2);
// 	//printf("%d\n",n2);
//    //ft_printf("%%%   abc\n");
//   // printf("%%%   abc");
//   //unsigned int k=4294967295-(12 - 1);
//   //printf("%d\n",k);
//   //printf("%u\n",-12);
//   //printf("%u\n",k);
//     return 0;
// }