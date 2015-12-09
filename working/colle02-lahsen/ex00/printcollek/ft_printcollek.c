/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printcollek.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 09:33:42 by acresap           #+#    #+#             */
/*   Updated: 2015/12/08 17:11:49 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putresult00(int x, int y);
void	ft_putresult01(int x, int y);
void	ft_putresult02(int x, int y);
void	ft_putresult03(int x, int y);
void	ft_putresult30(int x, int y);
void	ft_putresult33(int k, int x, int y);

void	ft_printcollek(int k, int x, int y)
{
	char	xc;
	char	yc;
	char	kc;

	xc = x;
	yc = y;
	kc = k;
	if (k == 0)
	{
		ft_putresult00(x, y);
	}
	if (k == 1)
	{
		ft_putresult01(x, y);
	}
	if (k > 1)
	{
		if ((x < 3) && (y < 3))
		{
			ft_putresult02(x, y);
		}	
		if ((x < y) && (y = 3))
		{
			ft_putresult03(x, y);
		}
		if ((x = 3) && (y < x))
		{
			ft_putresult30(x, y);
		}
		if (((x > 3) || (y > 3)) || ((x = 3) && (y = 3)))
		{
			ft_putresult33(k, x, y);
		}
	}
}
