/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   myfirstboucle.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 22:18:10 by acresap           #+#    #+#             */
/*   Updated: 2015/12/08 23:04:14 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	h;
	int	i;
	int	j;
	int	k;

	h = 0;
	while (h <= 9)
	{
		while (i <= 9)
		{
			while (j <= 9)
			{
				while (k <= 9)
				{
					ft_putchar('k');
					k = k + 1;
				}
			}
		}
	}
}

int	main(void)
{
	ft_print_comb2(h, i, j, k);
	return (0);
}
