#include	<stdio.h>

void ft_putchar(char c);
void ft_print_alphabet(void);
void ft_print_reverse_alphabet(void);
void ft_print_numbers(void);
void ft_is_negative(int n);
void ft_print_comb(void);
void ft_print_comb2(void);
void ft_putnbr(int nb);
void ft_print_combn(int n);

int	main(void)
{
	// ft_putchar('a'); // only 1 character
	// ft_print_alphabet();
	// ft_print_reverse_alphabet();
	// ft_print_numbers();
 	// ft_is_negative(0); // any integer
 	// ft_print_comb();
 	// ft_print_comb2();
 	// ft_putnbr(2147483647); // any integer from -2147483648 to 2147483647
 	// ft_print_combn(9); // 0 < n < 10, n integer
}

// gcc -Wall -Wextra -Werror -o run main.c ex00/ft_putchar.c ex01/ft_print_alphabet.c ex02/ft_print_reverse_alphabet.c ex03/ft_print_numbers.c ex04/ft_is_negative.c ex05/ft_print_comb.c ex06/ft_print_comb2.c ex07/ft_putnbr.c ex08/ft_print_combn.c && ./run | cat -e