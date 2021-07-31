#include	<stdio.h>
#define	PI_APPROXIMATION 3.14159

double	area_of_circle(double radius)
{
	return (PI_APPROXIMATION * radius * radius);
}

int	main(void)
{
	double	radius;

	scanf("%lf", &radius);
	printf("A=%.4f\n", area_of_circle(radius));
	return (0);
}
