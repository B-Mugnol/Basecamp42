#include	<unistd.h>

void	print_int_array(int *array, int array_size);
void	recursive_digit_increase(int *array, int array_size, int index);
void	ft_print_combn(int n);

void	print_int_array(int *array, int array_size)
{
	char	ascii_digit;
	int		i;

	i = 0;
	while (i < array_size)
	{
		ascii_digit = array[i] + '0';
		write(1, &ascii_digit, 1);
		i++;
	}
	if (array[0] != 9 - (array_size - 1))
		write(1, ", ", 2);
}

void	recursive_digit_increase(int *array, int array_size, int index)
{
	if (index == 0)
		array[0] = 0; // seta o primeiro dígito com 0 na 1a vez que é chamado
	else
		array[index] = array[index - 1] + 1; // dígito = dig_anterior + 1
	while (array[index] <= 9 - (array_size - 1 - index)) 
	// dígito <= valor limite daquele dígito
	{
		if (index == array_size - 1) // index = n - 1, ou seja, último dígito
		{
			print_int_array(array, array_size);
		}
		else if (index + 1 <= array_size - 1) // se existir um próx dígito
			recursive_digit_increase(array, array_size, index + 1);
		array[index]++;
	}
}

void	ft_print_combn(int n)
{
	int	digit[9];

	digit[0] = 0;
	recursive_digit_increase(digit, n, 0);
}
