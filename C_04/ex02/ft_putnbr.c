#include	<unistd.h>

void	ft_putnbr(int nb)
{
	long long int	num;

	num = nb;
	if (nb < 0)
	{
		write(1, "-", 1);
		num *= -1;
	}
	if (num / 10 == 0)
	{
		num += '0';
		write(1, &num, 1);
	}
	else
	{
		ft_putnbr(num / 10);
		num = num % 10 + '0';
		write(1, &num, 1);
	}
}
