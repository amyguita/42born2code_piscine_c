
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb()
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
		(n1 < n2 && n2 < n3)
			ft_putchar(n1 && n2 && n3);
			i++;
			ft_putchar(i);
	}
}
