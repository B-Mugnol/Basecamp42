#include	<stdio.h>

void	print_int_array(int *array, int size);

void	ft_ft(int *nbr); // ex00
void	ft_ultimate_ft(int *********nbr); // ex01
void	ft_swap(int *a, int *b); // ex02
void	ft_div_mod(int a, int b, int *div, int *mod); // ex03
void	ft_ultimate_div_mod(int *a, int *b); // ex04
void	ft_putstr(char *str); // ex05
int		ft_strlen(char *str); // ex06
void	ft_rev_int_tab(int *tab, int size); // ex07
void	ft_sort_int_tab(int *tab, int size); // ex08

// To comment/uncomment multiple lines, select them and press Ctrl + ;
int	main(void)
{	
	// ex00  "gcc -Wall -Wextra -Werror -o run ../main.c ft_ft.c"
	// int i = 0;
	// printf("i = %i...\n", i);
	// ft_ft(&i);
	// printf("i = %i\n", i);

	// ex01 - "gcc -Wall -Wextra -Werror -o run ../main.c ft_ultimate_ft.c"
	// This test was 200% based on the one by klaurind | Kawhan
	// int *********p_nbr9;
    // int ********p_nbr8;
    // int *******p_nbr7;
    // int ******p_nbr6;
    // int *****p_nbr5;
    // int ****p_nbr4;
    // int ***p_nbr3;
    // int **p_nbr2;
    // int *p_nbr1;
    // int nbr;
    // nbr = 21;
    // p_nbr1 = &nbr;
    // p_nbr2 = &p_nbr1;
    // p_nbr3 = &p_nbr2;
    // p_nbr4 = &p_nbr3;
    // p_nbr5 = &p_nbr4;
    // p_nbr6 = &p_nbr5;
    // p_nbr7 = &p_nbr6;
    // p_nbr8 = &p_nbr7;
    // p_nbr9 = &p_nbr8;
    // printf("before: nbr = %i\n", nbr);
    // ft_ultimate_ft(p_nbr9);
    // printf("after: nbr = %i\n", nbr);

	// ex02 "gcc -Wall -Wextra -Werror -o run ../main.c ft_swap.c"
	// int	a = -123;
	// int	b = 456;
	// printf("before: a = %i, b = %i\n", a, b);
	// ft_swap(&a, &b);
	// printf("after: a = %i, b = %i\n", a, b);

	// ex03 "gcc -Wall -Wextra -Werror -o run ../main.c ft_div_mod.c"
	// int a = 71;
	// int b = 33;
	// int div;
	// int mod;
	// ft_div_mod(a, b, &div, &mod);
	// printf("a = %i, b = %i\n", a, b);
	// printf("div = %i, mod = %i\n", div, mod);

	// ex04 "gcc -Wall -Wextra -Werror -o run ../main.c ft_ultimate_div_mod.c"
	// int a = 71;
	// int b = 33;
	// printf("before: a = %i, b = %i\n", a, b);
	// ft_ultimate_div_mod(&a, &b);
	// printf("after: a = %i, b = %i\n", a, b);

	// ex05 "gcc -Wall -Wextra -Werror -o run ../main.c ft_putstr.c"
	// char string[] = "quatro dois é 42";
	// ft_putstr(string);

	// ex06 "gcc -Wall -Wextra -Werror -o run ../main.c ft_strlen.c"
	// char string[] = "12345";
	// printf("%i\n", ft_strlen(string));

	// ex07 "gcc -Wall -Wextra -Werror -o run ../main.c ft_rev_int_tab.c"
	// // int	size = 11;
	// // int	array[11] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	// int	size = 10;
	// int	array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	// // int	size = 2;
	// // int	array[2] = {0, 1};
	// // int	size = 1;
	// // int	array[1] = {50};
	// print_int_array(array, size);
	// ft_rev_int_tab(array, size);
	// print_int_array(array, size);

	// ex08 "gcc -Wall -Wextra -Werror -o run ../main.c ft_sort_int_tab.c"
	// int	array[10] = {6, 5, 3, 7, 2, 4, 9, 1, 8, 0};
	// print_int_array(array, 10);
	// ft_sort_int_tab(array, 10);
	// print_int_array(array, 10);
}

void	print_int_array(int *array, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		printf("%i ", array[i]);
		i++;
	}
	printf("\n");
}

// Command to run on terminal (Alt + Z to Word Wrap):
// gcc -Wall -Wextra -Werror -o run main.c ex00/ft_ft.c ex01/ft_ultimate_ft.c ex02/ft_swap.c ex03/ft_div_mod.c ex04/ft_ultimate_div_mod.c ex05/ft_putstr.c ex06/ft_strlen.c ex07/ft_rev_int_tab.c ex08/ft_sort_int_tab.c && ./run | cat -e
