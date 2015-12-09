/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 15:22:15 by mleblond          #+#    #+#             */
/*   Updated: 2015/11/24 19:41:32 by mleblond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		ft_print_line(char first_col, char middle_col, char last_col, int x)
{
	int		i;

	i = x;
	ft_putchar(first_col);
	while (i > 2)
	{
		ft_putchar(middle_col);
		i -= 1;
	}
	while (i > 1)
	{
		ft_putchar(last_col);
		i -= 1;
	}
	ft_putchar('\n');
	return (0);
}


int		colle(int x, int y, int k)
{
	int		i;

	char cl[5][11] =
	{
		{ '0', 'o', '-', 'o', '|', ' ', '|', 'o', '-', 'o', '\0'},
		{ '1', '/', '*', '\\', '*', ' ', '*', '\\', '*', '/', '\0'},
		{ '2', 'A', 'B', 'A', 'B', ' ', 'B', 'C', 'B', 'C', '\0'},
		{ '3', 'A', 'B', 'C', 'B', ' ', 'B', 'A', 'B', 'C', '\0'},
		{ '4', 'A', 'B', 'A', 'B', ' ', 'B', 'C', 'B', 'C', '\0'}
	};
 
	i = y;
	ft_print_line(cl[k][1], cl[k][2], cl[k][3], x);
	while (i > 2)
	{
		ft_print_line(cl[k][4], cl[k][5], cl[k][6], x);
		i -= 1;
	}
	while (i > 1)
	{
		ft_print_line(cl[k][7], cl[k][8], cl[k][9], x);
		i -= 1;
	}
	return (0);
}
