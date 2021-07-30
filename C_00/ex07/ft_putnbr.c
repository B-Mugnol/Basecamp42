#include	<unistd.h>

int		ten_to_power_of_x(int x);
int		count_digits(int n);
void	ft_putnbr(int nb);

// For x integer and x > 0.
int	ten_to_power_of_x(int x)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	while (i < x)
	{
		result *= 10;
		i++;
	}
	return (result);
}

int	count_digits(int n)
{
	int	count;
	count = 0;
	while (n != 0)
	{
		count++;
		n /= 10;
	}
	return (count);
}

void	ft_putnbr(int nb)
{
	int	num;
	int	digit;
	int	digit_count;

	num = nb;
	if (num == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (num < 0)
	{
		num *= -1;
		write(1, "-", 1);
	}
	digit_count = count_digits(num);
	while (digit_count != 0)
	{
		digit = num / ten_to_power_of_x(digit_count - 1) + '0'; // 2
		num -= (digit - '0') * ten_to_power_of_x(digit_count - 1); // 234 = 1234 - 1*1000 = 234
		write(1, &digit, 1);
		digit_count--;
	}
}
