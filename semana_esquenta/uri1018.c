#include	<stdio.h>

int	g_bank_notes[7] = {100, 50, 20, 10, 5, 2, 1};

int	main(void)
{
	int	i;
	int	size;
	int	money;
	int	number_of_notes;

	scanf("%i", &money);
	printf("%i\n", money);
	i = 0;
	size = sizeof g_bank_notes / sizeof g_bank_notes[0];
	while (i < size)
	{
		number_of_notes = money / g_bank_notes[i];
		printf("%i nota(s) de R$ %i,00\n", number_of_notes, g_bank_notes[i]);
		money -= number_of_notes * g_bank_notes[i];
		i++;
	}
}
