/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle00.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/21 16:33:17 by acresap           #+#    #+#             */
/*   Updated: 2015/11/24 13:52:42 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_draw_line(char a, char b, char c, int x)
{
	int	count;

	count = 1;
	while (count <= x)
	{
		if (count == 1)
			ft_putchar(a);
		else if (count == x)
			ft_putchar(c);
		else
			ft_putchar(b);
		count++;
	}
	ft_putchar('\n');
}

void	colle(int x, int y)
{
	int		countline;

	countline = 1;
	while (countline <= y)
	{
		if (countline == 1)
			ft_draw_line('o', '-', 'o', x);
		else if (countline == y)
			ft_draw_line('o', '-', 'o', x);
		else
			ft_draw_line('|', ' ', '|', x);
		countline++;
	}
}
