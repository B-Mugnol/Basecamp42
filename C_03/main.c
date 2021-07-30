#include <limits.h>
#include <ctype.h>

// size_t	strlcat(char *dst, const char *src, size_t size);

int		ft_strcmp(char *s1, char *s2);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
char	*ft_strcat(char *dest, char *src);
char	*ft_strncat(char *dest, char *src, unsigned int nb);
char	*ft_strstr(char *str, char *to_find);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	same_sign(int a, int b)
{
	if (a < 0 && b < 0)
		return (0);
	else if (a > 0 && b > 0)
		return (0);
	else if (a == 0 && b == 0)
		return (0);
	return (1);
}

#include <string.h>
#include <bsd/string.h>
#include <stdio.h>

// alias run="gcc -Wall -Wextra -Werror -o run ../main.c"
// alias run="gcc -Wall -Wextra -Werror -lbsd -o run ../main.c"
int main(void)
{
	// char str_00[85] = "oh yes batata and other stuff like mandiocaajshfkajsbfasjbfaslkjfbasfbajskfb";
	// char str_0[6] = "batata";
	// char str_02[85] = "oh yes batata and other stuff like mandiocaajshfkajsbfasjbfaslkjfbasfbajskfb";
	// char str_2[] = "bob is ponjaaum";

	// char str_1[] = " is very good, supimpa and top";
	// char str_01[] = "bata";
	// char str_02[100] = " is very good, supimpa and top";
	// char str_2[] = "oh yes batata and other stuff like mandioca\0ajshfkajsbfasjbfaslkjfbasfbajskfb";

	// char str_00[50] = {1, 5, -65, 187, -78, 69, 42, '\0'};
	// char str_0[33] = {65, 48, 200, -15, -66, '\0'};
	// char str_02[50] = {1, 5, -65, 187, -78, 69, 42, '\0'};
	// char str_2[33] = {65, 48, 200, -15, -66, '\0'};

	// ex 00
	// printf("%i", ft_strcmp(str_0, str_00));

	// ex 01
	// printf("%i\n", ft_strncmp(str_0, str_01, 10));
	// printf("%i\n", strncmp(str_0, str_01, 10));

	// ex 02
	// str_00[3] = 'a';
	// printf("%s\n", ft_strcat(str_0, str_1));

	// ex 03
	// printf("%s\n", ft_strncat(str_00, str_1, 4));

	// ex 04
	// printf("%s", ft_strstr(str_0, "tat"));

	// ex 05
    // char str_0[15] = {"MArvin"};
    // char str_00[15] = {"Mªrvin"};
    // char str_2[15] = {"MArvin"};
    // char str_02[15] = {"Mªrvin"};
	// printf("org: %zu, %s\n", strlcat(str_02, str_2, 1), str_02);
	// printf("ft:  %u, %s\n", ft_strlcat(str_02, str_2, 1), str_02);
	// printf("ft:  %u, %s\n", ft_strlcat(str_00, str_0, 100), str_00);

	// printf("-- Exercício 00: ");
	// char str0[] = "0123465789";
	// char str1[] = "012345678901324657890";
	// char str2[] = "abcdefaaaaaaafdasf";
	// char str3[] = "fedcba";
	// char str4[] = {-127, -56, 6, 32, 64, 65, 66, 0};
	// char str5[] = "abcdefghijadofhiasdfj";
	// char str6[] = "abcdefghijadfedcba";

	// int ret0 = 0;
	//  = strcmp(str0, str1);
	// int ret1 = 0;
	//  = ft_strcmp(str0, str1);

	// if (same_sign(strcmp(str0, str1), ft_strcmp(str0, str1)))
	// 	printf("KO, expected %i got %i\n", ret0, ret1);
	// else if (same_sign((ret0 = strcmp(str1, str2)), (ret1 = ft_strcmp(str1, str2))))
	// 	printf("KO, expected %i got %i\n", ret0, ret1);
	// else if (same_sign((ret0 = strcmp(str2, str3)), (ret1 = ft_strcmp(str2, str3))))
	// 	printf("KO, expected %i got %i\n", ret0, ret1);
	// else if (same_sign((ret0 = strcmp(str3, str4)), (ret1 = ft_strcmp(str3, str4))))
	// 	printf("KO, expected %i got %i\n", ret0, ret1);
	// else if (same_sign((ret0 = strcmp(str5, str6)), (ret1 = ft_strcmp(str5, str6))))
	// 	printf("KO, expected %i got %i\n", ret0, ret1);
	// else
	// 	printf("OK\n");

	// printf("-- Exercício 01: ");
	// int str0l = strlen(str0);
	// int str1l = strlen(str1);


	// if (same_sign((ret0 = strncmp(str0, str1, str0l)), (ret1 = ft_strncmp(str0, str1, str0l))))
	// 	printf("KO, test00 expected %i got %i\n", ret0, ret1);
	// else if (same_sign((ret0 = strncmp(str2, str3, 0)), (ret1 = ft_strncmp(str2, str3, 0))))
	// 	printf("KO, test01 expected %i got %i\n", ret0, ret1);
	// else if (same_sign((ret0 = strncmp(str1, str2, str1l)), (ret1 = ft_strncmp(str1, str2, str1l))))
	// 	printf("KO, test02 expected %i got %i\n", ret0, ret1);
	// else if (same_sign((ret0 = strncmp(str2, str3, 2)), (ret1 = ft_strncmp(str2, str3, 2))))
	// 	printf("KO, test03 expected %i got %i\n", ret0, ret1);
	// else if (same_sign((ret0 = strncmp(str3, str4, 2)), (ret1 = ft_strncmp(str3, str4, 2))))
	// 	printf("KO, test04 expected %i got %i\n", ret0, ret1);
	// else if (same_sign((ret0 = strncmp(str3, str4, 100)), (ret1 = ft_strncmp(str3, str4, 100))))
	// 	printf("KO, test05 expected %i got %i\n", ret0, ret1);
	// else if (same_sign((ret0 = strncmp(str0, str1, 100)), (ret1 = ft_strncmp(str0, str1, 100))))
	// 	printf("KO, test06 expected %i got %i\n", ret0, ret1);
	// else
	// 	printf("OK\n");

	// printf("-- Exercício 02: ");
	// char buffer0[100];
	// char buffer1[100];

	// int i = 0;
	// while (i < 100)
	// {
	// 	buffer0[i] = 'a';
	// 	buffer1[i] = 'a';
	// 	++i;
	// }

	// strcpy(buffer0, str1);
	// strcpy(buffer1, str1);

	// if (strcat(buffer1, str0), buffer0 != ft_strcat(buffer0, str0))
	// 	printf("KO, test00 wrong return\n");
	// else if (strcmp(buffer0, buffer1) != 0)
	// 	printf("KO, test00 expected %s got %s\n", buffer1, buffer0);
	// else if (strcat(buffer1, "ba ba ta ta"), buffer0 != ft_strcat(buffer0,  "ba ba ta ta"))
	// 	printf("KO, test00 wrong return\n");
	// else if (strcmp(buffer0, buffer1) != 0)
	// 	printf("KO, test00 expected %s got %s\n", buffer1, buffer0);
	// else
	// 	printf("OK\n");


	// printf("-- Exercício 03: ");

	// i = 0;
	// while (i < 100)
	// {
	// 	buffer0[i] = 'a';
	// 	buffer1[i] = 'a';
	// 	++i;
	// }

	// strcpy(buffer0, str1);
	// strcpy(buffer1, str1);

	// if (strncat(buffer1, str3, 3), buffer0 != ft_strncat(buffer0, str3, 3))
	// 	printf("KO, test00 wrong return\n");
	// else if (strcmp(buffer0, buffer1) != 0)
	// 	printf("KO, test00 expected %s got %s\n", buffer1, buffer0);
	// else if (strncat(buffer1, str1, 100), buffer0 != ft_strncat(buffer0, str1, 100))
	// 	printf("KO, test01 wrong return\n");
	// else if (strcmp(buffer0, buffer1) != 0)
	// 	printf("KO, test01 expected %s got %s\n", buffer1, buffer0);
	// else
	// 	printf("OK\n");


	// printf("-- Exercício 04: ");
	// char findin0[] = "asdfasdfstringasaa";
	// char findin1[] = "string aaa aaa string";
	// char findin2[] = "1349813-2139485-1234";

	// printf("\n%s", strstr(findin2, ""));
	// printf("\n%s\n", ft_strstr(findin2, ""));
	// if (strstr(findin0, "string") != ft_strstr(findin0, "string"))
	// 	printf("KO test00\n");
	// else if (strstr(findin1, "string") != ft_strstr(findin1, "string"))
	// 	printf("KO test01\n");
	// else if (strstr(findin2, "213") != ft_strstr(findin2, "213"))
	// 	printf("KO test02\n");
	// else if (strstr(findin0, "213") != ft_strstr(findin0, "213"))
	// 	printf("KO test03\n");
	// else if (strstr(findin2, "555555") != ft_strstr(findin2, "555555"))
	// 	printf("KO test04\n");
	// else if (strstr(findin2, "") != ft_strstr(findin2, ""))
	// 	printf("KO test05\n");
	// else if (strstr(findin0, "123") != ft_strstr(findin0, "123"))
	// 	printf("KO test06\n");
	// else if (strstr(findin0, "asdfasdfstringasa") != ft_strstr(findin0, "asdfasdfstringasa"))
	// 	printf("KO test07\n");
	// else if (strstr("", "") != ft_strstr("", ""))
	// 	printf("KO test08\n");
	// else
	// 	printf("OK\n");


	// printf("-- Exercício 05: ");
	// i = 0;
	// while (i < 100)
	// {
	// 	buffer0[i] = 0;
	// 	buffer1[i] = 0;
	// 	++i;
	// }
	// strcpy(buffer0, str1);
	// strcpy(buffer1, str1);
	// unsigned int ret0l;
	// unsigned int ret1l;

	// if ((ret1l = strlcat(buffer1, str0, 50)) != (ret0l = ft_strlcat(buffer0, str0, 50)))
	// 	printf("KO, test00 wrong return expected %i got %i\n", ret1l, ret0l);
	// else if (strncmp(buffer0, buffer1, 100) != 0)
	// 	printf("KO, test00 expected %s got %s\n", buffer1, buffer0);

	// else if ((ret1l = strlcat(buffer1, str0, 20)) != (ret0l = ft_strlcat(buffer0, str0, 20)))
	// 	printf("KO, test01 wrong return expected %i got %i\n", ret1l, ret0l);
	// else if (strncmp(buffer0, buffer1, 100) != 0)
	// 	printf("KO, test01 expected %s got %s\n", buffer1, buffer0);

	// else if ((ret1l = strlcat(buffer1, str2, 2)) != (ret0l = ft_strlcat(buffer0, str2, 2)))
	// 	printf("KO, test02 wrong return expected %i got %i\n", ret1l, ret0l);
	// else if (strncmp(buffer0, buffer1, 100) != 0)
	// 	printf("KO, test02 expected %s got %s\n", buffer1, buffer0);
	// else
	// 	printf("OK\n");

}
