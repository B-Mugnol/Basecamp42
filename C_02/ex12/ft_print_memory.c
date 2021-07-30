#include	<unistd.h>

int		ft_pow(int x, int y);
void	print_hex(unsigned long long int dec, int index);
void	print_2nd_column(char *str);
char	*print_3rd_column(char *str);

void	*ft_print_memory(void *addr, unsigned int size)
{
	char					*str;
	unsigned long long int	*p;

	if (size == 0)
		return (addr);
	str = addr;
	while (*str != '\0')
	{
		p = (unsigned long long int *)(&str);
		print_hex(*p, 15);
		write(1, ": ", 2);
		print_2nd_column(str);
		str = print_3rd_column(str);
		write(1, "\n", 1);
	}
	return (addr);
}

void	print_2nd_column(char *str)
{
	int	i;

	i = 0;
	while (i < 16 && str[i] != '\0')
	{
		print_hex(str[i], 2);
		i++;
		if (str[i] != '\0')
			print_hex(str[i], 2);
		else
		{
			write(1, "00 ", 3);
			break ;
		}
		write(1, " ", 1);
		i++;
	}
}

char	*print_3rd_column(char *str)
{
	int	i;

	i = 0;
	while (i < 16)
	{
		if (str[i] == '\0')
			break ;
		if (str[i] >= ' ' && str[i] <= '~')
			write(1, &str[i], 1);
		else
			write(1, ".", 1);
		i++;
	}
	i = 0;
	while (i < 16)
	{
		str++;
		if (*str == '\0')
			return (str);
		i++;
	}
	return (str);
}

// Prints <index> digits from a decimal number
void	print_hex(unsigned long long int dec, int index)
{
	char	hex;

	if (index == 0)
		return ;
	index--;
	print_hex(dec / 16, index);
	if (dec % 16 >= 10)
		hex = dec % 16 % 10 + 'a';
	else
		hex = dec % 16 + '0';
	write(1, &hex, 1);
	return ;
}
