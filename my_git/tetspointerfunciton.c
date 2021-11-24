/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetspointerfunciton.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 19:07:22 by mnaqqad           #+#    #+#             */
/*   Updated: 2021/11/07 12:08:09 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int hellos(int c)
{
    if( c == 'A')
    {
    printf("character is valid");
    return 1;
    }
    else
    {
    printf("character is not valid");
    }
   return 0;
}
void hello(char *s,int(*hellos)(int))
{
    int i=0;
    int x=0;
    while(s[i] != '\0')
    {
        x=hellos(s[i]);
        printf("%d \n",x);
        printf("\n");
        i++;
    }
}
int main(void)
{
    /*void(*t)(char *s,int(*hellos)(int))=&hello;
    (*t)("helloA",hellos);*/
    hello("hello",hellos);

}