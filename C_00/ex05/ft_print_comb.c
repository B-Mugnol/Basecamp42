#include	<unistd.h>

void	ft_print_comb(void);

void	ft_print_comb(void)
{
	char	comb[3];

	comb[0] = '0';
	while (comb[0] < '8')
	{
		comb[1] = comb[0] + 1;
		while (comb[1] > comb[0] && comb[1] < '9')
		{
			comb[2] = comb[1] + 1;
			while (comb[2] > comb[1] && comb[2] <= '9')
			{
				write(1, &comb, 3);
				if (comb[0] == '7' && comb[1] == '8' && comb[2] == '9')
					break ;
				write(1, ", ", 2);
				comb[2]++;
			}
			comb[1]++;
		}
		comb[0]++;
	}
}
