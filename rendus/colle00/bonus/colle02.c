/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 19:16:03 by acresap           #+#    #+#             */
/*   Updated: 2015/11/24 19:22:14 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

char	defchar(int col, int endcol, int lin, int endlin)
{
	char c;

	c = 'B';
	if (lin == 1)
	{
		if (col == 1)
			c = 'A';
		else if (col == endcol)
			c = 'A';
	}
	if (lin == endlin && lin != 1)
	{
		if (col == 1 || col == endcol) 
			c = 'C';
	}
	if (lin != 1 && lin != endlin)
	{
		if (col != 1 && col != endcol)
			c = ' ';
	}
	return (c);
}

void	colle(int nbcolumns, int nblines)
{
	int		line;
	int		column;
	char	c;

	line = 1;
	while (line <= nblines)
	{
		column = 1;
		while (column <= nbcolumns)
		{
			c = defchar(column, nbcolumns, line, nblines);
			ft_putchar(c);
			column++;
		}
		ft_putchar('\n');
		line++;
	}
}
