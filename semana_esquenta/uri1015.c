#include	<stdio.h>
#include	<math.h>

double	two_2D_points_distance(double p1[2], double p2[2])
{
	return (sqrt(pow(p2[0] - p1[0], 2) + pow(p2[1] - p1[1], 2)));
}

int	main(void)
{
	double	p1[2];
	double	p2[2];

	scanf("%lf %lf %lf %lf", &p1[0], &p1[1], &p2[0], &p2[1]);
	printf("%.4f\n", two_2D_points_distance(p1, p2));
}
