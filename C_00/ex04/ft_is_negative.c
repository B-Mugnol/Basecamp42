#include	<unistd.h>

void	ft_is_negative(int n);

void	ft_is_negative(int n)
{
	char	sign;

	if (n >= 0)
		sign = 'P';
	else
		sign = 'N';
	write(1, &sign, 1);
}
