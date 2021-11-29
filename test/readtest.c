/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readtest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:44:20 by mnaqqad           #+#    #+#             */
/*   Updated: 2021/11/28 09:56:38 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>


int main(void)
{
	int s=1;
	char *k = malloc(s+1 * sizeof(char));
    int fd = open ("hello.txt",O_RDONLY);
	read(fd,k,s);
	read(fd,k,s);
	read(fd,k,s);
	read(fd,k,s);
	read(fd,k,s);
    printf("%s\n",k);
}