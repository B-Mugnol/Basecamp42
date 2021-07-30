#include	<unistd.h>

void	print_two_digit_int(int num);
void	ft_print_comb2(void);

// Limited for num integer and 0 <= num <= 99.
void	print_two_digit_int(int num)
{
	char	number[2];

	number[0] = num / 10 + '0';
	number[1] = num % 10 + '0';
	write(1, &number, 2);
}

void	ft_print_comb2(void)
{
	int	left_number;
	int	right_number;

	left_number = 0;
	while (left_number < 99)
	{
		right_number = left_number + 1;
		while (right_number <= 99)
		{
			print_two_digit_int(left_number);
			write(1, " ", 1);
			print_two_digit_int(right_number);
			if (left_number + right_number != 98 + 99)
				write(1, ", ", 2);
			right_number++;
		}
		left_number++;
	}
}
