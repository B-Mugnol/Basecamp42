#include	<stdio.h>

int	main(void)
{
	int	attempt;
	int	i;

	i = 0;
	while (i == 0)
	{
		scanf("%i", &attempt);
		if (attempt != 2002)
		{
			printf("Senha Invalida\n");
		}
		else
		{
			printf("Acesso Permitido\n");
			i = 1;
		}
	}
}
