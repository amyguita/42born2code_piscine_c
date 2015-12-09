/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   myboucle1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 22:55:33 by acresap           #+#    #+#             */
/*   Updated: 2015/12/08 23:03:52 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_boucle(void)
{
	int	a;

	a = 0;
	while (a < 9)
	{
		ft_putchar(a);
	}
}

int	main(void)
{
	ft_boucle(a);
	return (0);
}
