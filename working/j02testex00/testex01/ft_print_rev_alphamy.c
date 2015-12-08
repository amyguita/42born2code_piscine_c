/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_rev_alphamy.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 20:34:36 by acresap           #+#    #+#             */
/*   Updated: 2015/12/07 20:59:40 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_reverse_alphabet(void)
{
	char	i;
	
	i = 'z';
	while (i >= 'a')
		ft_putchar(i);
		i = i - 1;
}

int		main(void)
{
	ft_print_reverse_alphabet(char c)
	return (0);
}
