void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	acc;

	i = 0;
	while (i < size / 2)
	{
		acc = tab[size - 1 - i];
		tab[size - 1 - i] = tab[i];
		tab[i] = acc;
		i++;
	}
}
