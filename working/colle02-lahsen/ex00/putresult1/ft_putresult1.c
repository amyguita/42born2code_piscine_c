/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putresult1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 09:33:42 by acresap           #+#    #+#             */
/*   Updated: 2015/12/08 12:23:00 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);
int		ft_inttostr(x);

void	ft_putresult1(int k, int x, int y)
{
	if (k == 0)
	{
		ft_putstr("./colle00 ");
		ft_putstr(ft_inttostr(x));
		ft_putstr(" ");
		ft_putstr(&y);
		ft_putstr(" | ./colle-2/n");
		ft_putstr("[colle00] [");
		ft_putstr(&x);
		ft_putstr("] [");
		ft_putstr(&y);
		ft_putstr("]/n");
	}
/*	if (k = 1)
		{
			ft_putstr("./colle01 " + x + " " + y + " | ./colle-2/n");
			ft_putstr("[colle01] [" + x + "] [" + y + "]/n");
		}
	if (k > 1)
	{
		if ((x < 3) && (y < 3))
		{
			ft_putstr("./colle0u " + x + " " + y + " | ./colle-2/n");
			ft_putstr("[colle02] [" + x + "] [" + y + "] || ");
			ft_putstr("[colle03] [" + x + "] [" + y + "] || ");
			ft_putstr("[colle04] [" + x + "] [" + y + "]/n");
		}
		if ((x < y) && (y = 3))
		{
			ft_putstr("./colle0u " + x + " " + y + " | ./colle-2/n");
			ft_putstr("[colle02] [" + x + "] [" + y + "] || ");
			ft_putstr("[colle04] [" + x + "] [" + y + "]/n");    
		}
		if ((x = 3) && (y < x))
		{
			ft_putstr("./colle0u " + x + " " + y + " | ./colle-2/n");
			ft_putstr("[colle03] [" + x + "] [" + y + "] || ");
			ft_putstr("[colle04] [" + x + "] [" + y + "]/n");
		}
		if (((x > 3) || (y > 3)) || ((x = 3) && (y = 3)))
		{
			ft_putstr("./colle0" + k + " " + x + " " + y + " | ./colle-2/n");
			ft_putstr("[colle0" + k + "] [" + x + "] [" + y + "]/n");
		}
		*/
}
