#include	<unistd.h>

int	char_is_printable(char c)
{
	if (!(c >= ' ' && c <= '~'))
		return (0);
	return (1);
}

// Prints <index> digits from a decimal number.
void	print_hex(unsigned int dec, int index)
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

void	ft_putstr_non_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!char_is_printable(str[i]))
		{
			write(1, "\\", 1);
			print_hex(str[i], 2);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
