#include	<stdio.h>
#define	A_WEIGHT 3.5
#define B_WEIGHT 7.5

double	weighted_average(double gradeA, double gradeB)
{
	return ((gradeA * A_WEIGHT + gradeB * B_WEIGHT) / (A_WEIGHT + B_WEIGHT));
}

int	main(void)
{
	double	grade1;
	double	grade2;

	scanf("%lf %lf", &grade1, &grade2);
	printf("MEDIA = %.5f\n", weighted_average(grade1, grade2));
}
