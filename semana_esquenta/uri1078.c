#include	<stdio.h>

int	main(void)
{
	int	i;
	int	number;
	int	result;

	scanf("%i", &number);
	i = 1;
	while (i <= 10)
	{
		result = i * number;
		printf("%i x %i = %i\n", i, number, result);
		i++;
	}
}
