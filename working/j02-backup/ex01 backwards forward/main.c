/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/06 11:06:29 by acresap           #+#    #+#             */
/*   Updated: 2015/12/06 11:29:02 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(void)
{
	char	i;

	i = 'a';
	while (i <= 'z')
	{
		ft_putchar('\n');
		i++;
	}
		ft_putchar('\n');

	i = 'z';
	while (i >= 'a')
	{
		ft_putchar(i);
		i--;
	}
	ft_putchar('\n');
	return (0);
}
