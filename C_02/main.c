#include	<stdio.h>
#include	<unistd.h>
#include	<string.h>
#include	<bsd/string.h>

char	*ft_strcpy(char *dest, char *src);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
int		ft_str_is_alpha(char *str);
int		ft_str_is_numeric(char *str);
int		ft_str_is_lowercase(char *str);
int		ft_str_is_uppercase(char *str);
int		ft_str_is_printable(char *str);
char	*ft_strupcase(char *str);
char	*ft_strlowcase(char *str);
char	*ft_strcapitalize(char *str);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
void	ft_putstr_non_printable(char *str);
void	*ft_print_memory(void *addr, unsigned int size);

// alias run="gcc -Wall -Wextra -Werror -o run ../main.c"
// alias run="gcc -Wall -Wextra -Werror -lbsd -o run ../main.c"
int	main(void)
{
	// ex00
	// char	source_str[] = "aeeba!";
	// char	destination_str[9];
	// char	source_str2[] = "aeeba!";
	// char	destination_str2[9];
	// printf("%s\n", ft_strcpy(destination_str, source_str));
	// printf("%s", strcpy(destination_str2, source_str2));

	// ex01
	// char	source_str[] = "aeeba!";
	// char	destination_str[9];
	// char	source_str2[] = "aeeba!";
	// char	destination_str2[9];
	// printf("%s\n", ft_strncpy(destination_str, source_str, 3));
	// printf("%s", strncpy(destination_str2, source_str2, 3));

	// ex02
	// char	test_string[] = "aeBAaa5";
	// printf("%i", ft_str_is_alpha(test_string));

	// ex03
	// char	test_string2[] = "012345";
	// printf("%i", ft_str_is_numeric(test_string2));

	// ex04
	// char	test_string3[] = "aebA";
	// printf("%i", ft_str_is_lowercase(test_string3));

	// ex05
	// char	test_string4[] = "AEEba";
	// printf("%i", ft_str_is_uppercase(test_string4));

	// ex06
	// char	test_string5[] = "23423tqw\n";
	// printf("%i", ft_str_is_printable(test_string5));

	// ex07
	// char	not_upper[] = "CaVaLo123";
	// printf("%s", ft_strupcase(not_upper));

	// ex08
	// char	not_lower[] = "CaVaLo123";
	// printf("%s", ft_strlowcase(not_lower));

	// ex09
	// char	words[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	// printf("%s", ft_strcapitalize(words));

	// ex10
	char	source_str3[] = "aeeba!";
	char	destination_str3[9];
	char	source_str4[] = "aeeba!";
	char	destination_str4[9];
	printf("ft:  %u, %s\n", ft_strlcpy(destination_str3, source_str3, 0), destination_str3);
	printf("og:  %zu, %s\n", strlcpy(destination_str4, source_str4, 0), destination_str4);

	// ex11
	// char strtest0[] = {'0', '1', 3, 26, '2', '3', 12, 'f', '\n', 'a', 'b', '\0'};
	// char strtest1[] = {'0', 'C', 'b', 127, 2, 'a', -82, 'b', -1, '\0'};
	// char strans0[] = "01\\03\\1a23\\0cf\\0aab";
	// char strans1[] = "0Cb\\7f\\02a\\aeb\\ff";
	// ft_putstr_non_printable(strtest0);
	// printf("\t==\t%s\n", strans0);
	// ft_putstr_non_printable(strtest1);
	// printf("\t==\t%s\n", strans1);

	// ex12
	// char	*big_thingy = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un toto titi poupou puahpuah merci goku kame-hame";
	// ft_print_memory(big_thingy, strlen(big_thingy));

	printf("\n");
}
