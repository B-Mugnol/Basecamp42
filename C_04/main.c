#include <unistd.h>
#include <stdio.h>
#include <string.h>

void	ft_putstr(char *str);
int		ft_strlen(char *str);
void	ft_putnbr(int nbr);
int		ft_atoi(char *str);
void	ft_putnbr_base(int nbr, char *base);
int		ft_atoi_base(char *str, char *base);

// alias run="gcc -Wall -Wextra -Werror -o run ../main.c"
int main(void)
{
	// char	*sad_0 = ""; // len = 0
	// char	*sad_1 = "012345678\n901234567890123456789"; // 31
	// char	*sad_2 = " \v \n\r	\t\r ---++++-+-987654\t321a012"; // 33
	// char	*sad_3 = "-+-456bcd654af+3"; // 16, dec: 4770581861551
	// char	*sad_4 = "batata"; // 6
	// char	sad_5[7] = {'0', '3', -42, -13, 120, 'f', ' '}; // 7

	// Exercício 00
	// printf("<og: %lu>\n", strlen(sad_0));
	// printf(">ft: %i<\n", ft_strlen(sad_0));
	// printf("<og: %lu>\n", strlen(sad_1));
	// printf(">ft: %i<\n", ft_strlen(sad_1));
	// printf("<og: %lu>\n", strlen(sad_2));
	// printf(">ft: %i<\n", ft_strlen(sad_2));
	// printf("<og: %lu>\n", strlen(sad_3));
	// printf(">ft: %i<\n", ft_strlen(sad_3));
	// printf("<og: %lu>\n", strlen(sad_4));
	// printf(">ft: %i<\n", ft_strlen(sad_4));
	// printf("<og: %lu>\n", strlen(sad_5));
	// printf(">ft: %i<\n", ft_strlen(sad_5));

	// Exercício 01
	// printf("og: %s\n", sad_0);
	// write(1, "ft: ", 4);
	// ft_putstr(sad_0);
	// printf("\n");
	// printf("og: %s\n", sad_1);
	// write(1, "ft: ", 4);
	// ft_putstr(sad_1);
	// printf("\n");
	// printf("og: %s\n", sad_2);
	// write(1, "ft: ", 4);
	// ft_putstr(sad_2);
	// printf("\n");
	// printf("og: %s\n", sad_3);
	// write(1, "ft: ", 4);
	// ft_putstr(sad_3);
	// printf("\n");
	// printf("og: %s\n", sad_4);
	// write(1, "ft: ", 4);
	// ft_putstr(sad_4);
	// printf("\n");
	// printf("og: %s\n", sad_5);
	// write(1, "ft: ", 4);
	// ft_putstr(sad_5);
	// printf("\n");

	// Exercício 02
	// ft_putnbr(42);
	// printf("\n42\n");
	// ft_putnbr(-42);
	// printf("\n-42\n");
	// ft_putnbr(053);
	// printf("\n43\n");
	// ft_putnbr(53000);
	// printf("\n53000\n");
	// ft_putnbr(-36);
	// printf("\n-36\n");
	// ft_putnbr(2147483647);
	// printf("\n2147483647\n");
	// ft_putnbr(-2147483648);
	// printf("\n-2147483648\n");

	// Exercício 03
	// printf("str: %s\n", sad_0);
	// printf("ft: %i\n", ft_atoi(sad_0));
	// printf("str: %s\n", sad_1);
	// printf("ft: %i\n", ft_atoi(sad_1));
	// printf("str: %s\n", sad_2);
	// printf("ft: %i\n", ft_atoi(sad_2));
	// printf("str: %s\n", sad_3);
	// printf("ft: %i\n", ft_atoi(sad_3));
	// printf("str: %s\n", sad_4);
	// printf("ft: %i\n", ft_atoi(sad_4));
	// printf("str: %s\n", sad_5);
	// printf("ft: %i\n", ft_atoi(sad_5));
	// printf("str: %s\n", "042pudim666");
	// printf("ft: %i\n", ft_atoi("042pudim666"));

	// Exercício 04
	// /*works:*/
	// ft_putnbr_base(42, "01");
	// write(1, "\n", 1);
	// ft_putnbr_base(42, "10");
	// write(1, "\n  ", 3);
	// ft_putnbr_base(2147483647, "01");
	// write(1, "\n", 1);
	// ft_putnbr_base(-2147483648, "01");
	// write(1, "\n", 1);
	// ft_putnbr_base(42, "0123456789abcdef");
	// write(1, "\n", 1);
	// ft_putnbr_base(42, "0123456789abcdefghijk");
	// write(1, "\n", 1);
	// ft_putnbr_base(42, "pudinam4sSADo");
	// write(1, "\n", 1);
	// ft_putnbr_base(-42, "yo0hu");
	// write(1, "\n", 1);
	// /*broken:*/
	// write(1, ">0", 2);
	// ft_putnbr_base(42, "abacaxi");
	// write(1, "1", 1);
	// ft_putnbr_base(42, "01231");
	// write(1, "2", 1);
	// ft_putnbr_base(42, "0456\n321");
	// write(1, "3", 1);

	// Exercício 05
	printf("atoi: %i\n", ft_atoi_base("	\v----101010", "01"));
	printf("atoi: %i\n", ft_atoi_base("11111010101aaaasd10", "10"));
	printf("atoi: %i\n", ft_atoi_base("1111111111111111111111111111111", "01"));
	printf("atoi: %i\n", ft_atoi_base("-10000000000000000000000000000000", "01"));
	printf("atoi: %i\n", ft_atoi_base("002a", "0123456789abcdef"));
	printf("atoi: %i\n", ft_atoi_base("\r\t20l33", "0123456789abcdefghijk"));
	printf("atoi: %i\n", ft_atoi_base("--ii123", "pudinam4sSADo"));
	printf("atoi: %i\n", ft_atoi_base("-+++--oh0111", "yo0hu"));
	printf("atoi: %i\n", ft_atoi_base("-+ ++--oh0111", "yo0hu"));
	printf("atoi: %i\n", ft_atoi_base("-+++--oh0111", "yo0hu "));
}
