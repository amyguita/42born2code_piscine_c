/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putresult33.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 09:33:42 by acresap           #+#    #+#             */
/*   Updated: 2015/12/08 16:49:35 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);

void	ft_putresult33(int k, int x, int y)
{
	char	xc;
	char	yc;
	char	kc;

	xc = x;
	yc = y;
	kc = k;
	ft_putstr("./colle0");
	ft_putstr(&kc);
	ft_putstr(" ");
	ft_putstr(&xc);
	ft_putstr(" ");
	ft_putstr(&yc);
	ft_putstr(" | ./colle-2/n[colle0");
	ft_putstr(&kc);
	ft_putstr(" ");
	ft_putstr(&xc);
	ft_putstr("] [");
	ft_putstr(&yc);
	ft_putstr("]/n");
}
