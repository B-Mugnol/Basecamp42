#include	<stdio.h>

int	main(void)
{
	int	i;
	int	number;
	int	array[10];

	scanf("%i", &number);
	i = 0;
	while (i < 10)
	{
		if (i == 0)
		{
			array[i] = number;
		}
		else
		{
			array[i] = array[i - 1] * 2;
		}
		printf("N[%i] = %i\n", i, array[i]);
		i++;
	}
}
