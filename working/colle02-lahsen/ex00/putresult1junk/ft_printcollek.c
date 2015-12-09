/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printcollek.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 09:33:42 by acresap           #+#    #+#             */
/*   Updated: 2015/12/08 16:18:13 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_printcollek(int k, int x, int y)
{
	char	xc;
	char	yc;

	xc = x;
	yc = y;
	if (k == 0)
	{
		ft_putresult00(int k, int x, int y);
	}
	if (k == 1)
	{
		ft_putresult01(int k, int x, int y);
	}
	if (k > 1)
	{
		if ((x < 3) && (y < 3))
		{
			ft_putresult02(int k, int x, int y);
		}	
		if ((x < y) && (y = 3))
		{
			ft_putresult03(int k, int x, int y);
		}
		if ((x = 3) && (y < x))
		{
			ft_putresult30(int k, int x, int y);
		}
		if (((x > 3) || (y > 3)) || ((x = 3) && (y = 3)))
		{
			ft_putresult33(int k, int x, int y);
		}
	}
}
