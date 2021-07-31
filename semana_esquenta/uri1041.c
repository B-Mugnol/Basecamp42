#include	<stdio.h>

int	is_in_axis(float x, float y)
{
	if ((x == 0 || y == 0) && !(x == 0 && y == 0))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

void	print_position_if_origin_or_axis(float x, float y)
{
	if (x == 0 && y == 0)
	{
		printf("Origem\n");
	}
	else if (is_in_axis(x, y))
	{
		if (x == 0)
		{
			printf("Eixo Y\n");
		}
		else if (y == 0)
		{
			printf("Eixo X\n");
		}
	}
}

void	print_position_if_in_upper_quadrant(float x, float y)
{
	if (y > 0 && !is_in_axis(x, y))
	{
		if (x > 0)
		{
			printf("Q1\n");
		}
		else if (x < 0)
		{
			printf("Q2\n");
		}
	}
}

void	print_position_if_in_lower_quadrant(float x, float y)
{
	if (y < 0 && !is_in_axis(x, y))
	{
		if (x > 0)
		{
			printf("Q4\n");
		}
		else if (x < 0)
		{
			printf("Q3\n");
		}
	}
}

int	main(void)
{
	float	x;
	float	y;

	scanf("%f %f", &x, &y);
	print_position_if_origin_or_axis(x, y);
	print_position_if_in_upper_quadrant(x, y);
	print_position_if_in_lower_quadrant(x, y);
}
