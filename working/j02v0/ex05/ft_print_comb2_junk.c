/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/06 16:26:07 by acresap           #+#    #+#             */
/*   Updated: 2015/12/08 22:16:36 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb2(char c)
{
	char	n1d1;
	char	n1d2;
	char	n2d1;
	char	n2d2;

	n1d1 = '0' -1;
	while (n1d1 <= '9')
	{
		n1d2 = n1d1 + 1;
		while (n1d2 <= '8')
		{
			n2d1 = n1d2 + 1;
			while (n2d1 <= '9')
			{
				ft_putchar(n1d1);
				ft_putchar(n1d2);
				ft_putchar(n2d1);
				ft_putchar(n2d2);
				if (n1d1 != '7')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				n2d2++;
			}
			n2d1++;
		}
		n1d2++;
	}
}
