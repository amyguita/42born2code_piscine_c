/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 17:17:48 by acresap           #+#    #+#             */
/*   Updated: 2015/11/24 18:58:55 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

char	defchar(int col, int endcol, int lin, int endlin)
{
	char c;

	c = '*';
	if (lin == 1)
	{
		if (col == 1)
			c = '/';
		else if (col == endcol)
			c = '\\';
	}
	if (lin == endlin && lin != 1)
	{
		if (col == 1)
			c = '\\';
		else if (col == endcol)
			c = '/';
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
