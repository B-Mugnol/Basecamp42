void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	acc;

	j = 0;
	while (j < size - 1)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i + 1] < tab[i])
			{
				acc = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = acc;
			}
			i++;
		}
		j++;
	}
}
