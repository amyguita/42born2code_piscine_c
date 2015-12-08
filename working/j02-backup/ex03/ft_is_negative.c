/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 14:39:11 by acresap           #+#    #+#             */
/*   Updated: 2015/11/27 12:15:20 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_is_negative(int n)
{
	if (n < 0)
		ft_putchar('N');
	else if (n >= 0)
		ft_putchar('P');
	ft_putchar('\n');
	return (0);
}

int		main(void)
{
	ft_is_negative(1);
	return (0);
}
