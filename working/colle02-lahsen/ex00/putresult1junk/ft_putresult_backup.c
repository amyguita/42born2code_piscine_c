/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putresult1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 09:33:42 by acresap           #+#    #+#             */
/*   Updated: 2015/12/08 15:01:17 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);

void	ft_putresult1(int k, int x, int y)
{
	char	xc;
	char	yc;

	xc = x;
	yc = y;
	if (k == 0)
	{
		ft_putstr("./colle00 ");
		ft_putstr(&xc);
		ft_putstr(" ");
		ft_putstr(&yc);
		ft_putstr(" | ./colle-2/n");
		ft_putstr("[colle00] [");
		ft_putstr(&xc);
		ft_putstr("] [");
		ft_putstr(&yc);
		ft_putstr("]/n");
	}
	if (k == 1)
	{
		ft_putstr("./colle01 ");
		ft_putstr(&xc);
		ft_putstr(" ");
		ft_putstr(&yc);
		ft_putstr(" | ./colle-2/n");
		ft_putstr("[colle01] [");
		ft_putstr(&xc);
		ft_putstr("] [");
		ft_putstr(&yc);
		ft_putstr("]/n");
	}
	if (k > 1)
	{
		if ((x < 3) && (y < 3))
		{
			ft_putstr("./colle0u ");
			ft_putstr(&xc);
			ft_putstr(" ");
			ft_putstr(&yc);
			ft_putstr(" | ./colle-2/n");
			ft_putstr("[colle02] [");
			ft_putstr(&xc);
			ft_putstr("] [");
			ft_putstr(&yc);
			ft_putstr("] || ");
			ft_putstr("[colle03] [");
			ft_putstr(&xc);
			ft_putstr("] [");
			ft_putstr(&yc);
			ft_putstr("] || ");
			ft_putstr("[colle04] [");
			ft_putstr(&xc);
			ft_putstr("] [");
			ft_putstr(&yc);
			ft_putstr("]/n");
		}	
		if ((x < y) && (y = 3))
		{
			ft_putstr("./colle0u ");
			ft_putstr(&xc);
			ft_putstr(" ");
			ft_putstr(&yc);
			ft_putstr(" | ./colle-2/n");
			ft_putstr("[colle02] [");
			ft_putstr(&xc);
			ft_putstr("] [");
			ft_putstr(&yc);
			ft_putstr("] || ");
			ft_putstr("[colle04] [");
			ft_putstr(&xc);
			ft_putstr("] [");
			ft_putstr(&yc);
			ft_putstr("]/n");
		}
		if ((x = 3) && (y < x))
		{
			ft_putstr("./colle0u ");
			ft_putstr(&xc);
			ft_putstr(" ");
			ft_putstr(&yc);
			ft_putstr(" | ./colle-2/n");
			ft_putstr("[colle03] [");
			ft_putstr(&xc);
			ft_putstr("] [");
			ft_putstr(&yc);
			ft_putstr("] || ");
			ft_putstr("[colle04] [");
			ft_putstr(&xc);
			ft_putstr("] [");
			ft_putstr(&yc);
			ft_putstr("]/n");
		}
		if (((x > 3) || (y > 3)) || ((x = 3) && (y = 3)))
		{
			ft_putstr("./colle0");
			ft_putstr(&kc);
			ft_putstr(" ");
			ft_putstr(&xc);
			ft_putstr(" ");
			ft_putstr(&yc);
			ft_putstr(" | ./colle-2/n");
			ft_putstr("[colle0");
			ft_putstr(&kc);
			ft_putstr(" ");
			ft_putstr(&xc);
			ft_putstr("] [");
			ft_putstr(&yc);
			ft_putstr("]/n");
		}
	}
}
