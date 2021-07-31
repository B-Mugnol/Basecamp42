int	main(void)
{
	int	i;
	int	number;
	int	highest_number;
	int	position_of_highest;

	i = 1;
	highest_number = 0;
	while (i <= 100)
	{
		scanf("%i", &number);
		if (number > highest_number)
		{
			highest_number = number;
			position_of_highest = i;
		}
		i++;
	}
	printf("%i\n%i\n", highest_number, position_of_highest);
}
