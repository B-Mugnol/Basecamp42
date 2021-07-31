#include	<stdio.h>

float	calculated_result(char operation, float result, float current_value)
{
	if (operation == 'S')
	{
		return (current_value + result);
	}
	else if (operation == 'M')
	{
		return (current_value / 12 + result);
	}
	else
	{
		return (0);
	}
}

int	main(void)
{
	char	operation;
	int		line;
	int		i[2];
	float	result;
	float	m[12][12];

	scanf("%i %c", &line, &operation);
	i[0] = 0;
	result = 0;
	while (i[0] < 12)
	{
		i[1] = 0;
		while (i[1] < 12)
		{
			scanf("%f", &m[i[0]][i[1]]);
			if (i[0] == line)
			{
				result = calculated_result(operation, result, m[i[0]][i[1]]);
			}
			i[1]++;
		}
		i[0]++;
	}
	printf("%.1f\n", result);
}
