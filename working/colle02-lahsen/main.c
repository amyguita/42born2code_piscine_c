/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 11:40:42 by acresap           #+#    #+#             */
/*   Updated: 2015/12/07 11:42:45 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	colleXX(int, int);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	colleXX(5,5);
	return (0);
}