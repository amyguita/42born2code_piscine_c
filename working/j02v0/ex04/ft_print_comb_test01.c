/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb_test01.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/06 12:47:39 by acresap           #+#    #+#             */
/*   Updated: 2015/12/06 15:20:56 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* This is a test that didn't work. */

void	ft_putchar(char c);

void	ft_print_comb(char c)
{
	char	d1;
	char	d2;
	char	d3;

	d1 = '0' - 1;
	while (d1++ <= '9')
	{
		d2 = d1 + 1;
		while (d2++ <= '9')
		{
			d3 = d2 + 1;
			while (d3++ <= '9')
			{
				ft_putchar(d1);
				ft_putchar(d2);
				ft_putchar(d3 + 1);
				if (d1 != '7')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
		d2++;
	}
}
