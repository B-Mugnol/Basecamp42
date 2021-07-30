#include	<unistd.h>

int		ft_strlen(char *str);
int		is_valid_base(char *base, int length);
int		is_uniquely_composed(char *str, char to_find);
void	recursive_print(int nbr, char *base, int base_len);
void	ft_putnbr_base(int nbr, char *base);

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_len;

	base_len = ft_strlen(base);
	if (!is_valid_base(base, base_len))
		return ;
	recursive_print(nbr, base, base_len);
}

void	recursive_print(int nbr, char *base, int base_len)
{
	long long int	num;

	num = nbr;
	if (num < 0)
	{
		write(1, "-", 1);
		num *= -1;
	}
	if (num / base_len == 0)
		write(1, &base[num], 1);
	else
	{
		recursive_print(num / base_len, base, base_len);
		write(1, &base[num % base_len], 1);
	}
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	is_valid_base(char *base, int length)
{
	if (length <= 1)
		return (0);
	while (*base != '\0')
	{
		if (*base == '+' || *base == '-')
			return (0);
		if (*base < 32 || *base > 126)
			return (0);
		if (!is_uniquely_composed(base + 1, *base))
			return (0);
		base++;
	}
	return (1);
}

int	is_uniquely_composed(char *str, char to_find)
{
	int		i;

	i = 0;
	if (to_find == '\0')
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] == to_find)
			return (0);
		i++;
	}
	return (1);
}
