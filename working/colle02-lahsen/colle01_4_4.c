/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle01_4_4.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 11:28:30 by acresap           #+#    #+#             */
/*   Updated: 2015/12/07 11:36:44 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_putchar(char);

int colleXX(int x, int y)
{
	if ((x > 0) && (y > 0))
	{
		int i;
		i = 0;
		while (i < x)
		{
			int j;
			j = 0;
			while (j < y)
			{
				ft_putchar(j + '0');
				j++;	
			}
			ft_putchar ('\n');
			i++;
		}  
	}
	else
	{
		ft_putchar ('@');	
	}
	return 0;
}