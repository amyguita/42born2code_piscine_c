/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putresult02.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 09:33:42 by acresap           #+#    #+#             */
/*   Updated: 2015/12/08 16:47:41 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);

void	ft_putresult02(int x, int y)
{
	char	xc;
	char	yc;

	xc = x;
	yc = y;
	ft_putstr("./colle0u ");
	ft_putstr(&xc);
	ft_putstr(" ");
	ft_putstr(&yc);
	ft_putstr(" | ./colle-2/n[colle02] [");
	ft_putstr(&xc);
	ft_putstr("] [");
	ft_putstr(&yc);
	ft_putstr("] || [colle03] [");
	ft_putstr(&xc);
	ft_putstr("] [");
	ft_putstr(&yc);
	ft_putstr("] || [colle04] [");
	ft_putstr(&xc);
	ft_putstr("] [");
	ft_putstr(&yc);
	ft_putstr("]/n");
}
