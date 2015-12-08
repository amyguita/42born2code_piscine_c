/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle-2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 11:53:20 by acresap           #+#    #+#             */
/*   Updated: 2015/12/07 12:57:59 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int colle_2(int argc, char **argv)
{
	int n;
	char buf[255];
	n = read(0, buf, 255);
	printf("%d\n", n);
	printf("%s\n", buf);
	int count = 0;
	while (count < argc)
	{
		printf("%s\n", argv[count]);
		count++;
	}
	return(0);
}

int	main(int argc, char **argv)
{
	colle_2(argc, argv);
	return (0);
}
