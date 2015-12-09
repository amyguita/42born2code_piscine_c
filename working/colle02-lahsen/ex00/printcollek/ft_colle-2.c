/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_colle-2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 17:01:39 by acresap           #+#    #+#             */
/*   Updated: 2015/12/08 18:12:36 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

void	ft_printcollek(int, int, int);

int 	ft_colle_2()
{
	int		x;
	int 	y;
	int		k;
	char	buf[6481];
	int		n;
	int		t;

	n = read(0, buf, 6481);
	char char_cour;
	k = 0;
	t = 0;
	char_cour = buf[t];
	while (char_cour != '\n')
	{
		t++;
		char_cour = buf[t];
	}
	x = t;
	while (char_cour != '\0')
	{
		t++;
		char_cour = buf[t];
	}
	y = t;

	char_cour = buf[0];
	if (char_cour == 'o')
	{
		k = 0;
	}
	else
	{
		if (char_cour == '/') 
		{
			k = 1;
		}
		else
			if (char_cour == 'A')
			{
				k = 9; /* inconnue 2, 3 ou 4 */
			}
	}
	getchar();
	ft_printcollek(k, x, y);
	return(0);
}
