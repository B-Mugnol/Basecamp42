#include 	<stdio.h>

int	sum(num1, num2)
{
	return (num1 + num2);
}

int	main(void)
{
	int	a;
	int	b;

	scanf("%i %i", &a, &b);
	printf("X = %i\n", sum(a, b));
	return (0);
}
