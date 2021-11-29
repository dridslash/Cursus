/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   statictest.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 11:46:54 by mnaqqad           #+#    #+#             */
/*   Updated: 2021/11/27 12:39:17 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>




int main (void)
{
   
     char *k=malloc(sizeof(char));
     
       k = "hello";
       char **p = &k;
       printf("%c\n",*(p)[0]);

     
}