/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb_1st_try.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/06 14:57:05 by acresap           #+#    #+#             */
/*   Updated: 2015/12/06 15:20:47 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* This is a test that SHOULD work!! */

void	ft_print_comb(void)
{
	char	n1;
	char	n2;
	char	n3;
	char	i;

	n1 = 0;
	n2 = 0;
	n3 = 0;
	i = 0;
	while (i <= 9)
	{
		while (n1 < n2 && n2 < n3)
			ft_putchar(n1 && n2 && n3);
		i++;
		ft_putchar(i);
	}
}
