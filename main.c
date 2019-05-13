
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <ctype.h>
#include <unistd.h>
#include <string.h>
#include <math.h>

void ft_putstr(char *c);
int ft_isalpha(char c);
int ft_toupper(int c);
int ft_tolower(int c);
int ft_isdigit(int c);
int ft_isascii(int c);
int ft_isalnum(int c);
int ft_isprint(int c);
void ft_bzero(char *str, size_t n);
char *ft_strcat(char *s1, char *s2);
int ft_strlen(char *s1);
void *ft_memcpy(char *s1, char *s2, size_t n);
char *ft_strdup(char *s1);
void *ft_memset(void *b, int c, size_t len);
int ft_power2(int);
int ft_powern(int, int);
char *ft_strcpy(char *, char *);



void	test_isalpha()
{
	int i = -1;
	int err = 0;

	while (++i < 128)
	{
		if (ft_isalpha(i) != isalpha(i))
		{
			printf("\033[31merror on ft_isalpha at char -> %c\033[0m\n", i);
			err = 1;
		}
	}
	if (!err)
		printf("\033[92m ft_isalpha is ok \033[0m\n");
}

void	test_toupper()
{
	int i = -1;
	int err = 0;

	while (++i < 128)
	{
		if (ft_toupper(i) != toupper(i))
		{
			printf("\033[31merror on ft_toupper at char -> %c\033[0m\n", i);
			err = 1;
		}
	}
	if (!err)
		printf("\033[92m ft_toupper is ok \033[0m\n");
}

void	test_tolower()
{
	int i = -1;
	int err = 0;

	while (++i < 128)
	{
		if (ft_tolower(i) != tolower(i))
		{
			printf("\033[31merror on ft_tolower at char -> %c\033[0m\n", i);
			err = 1;
		}
	}
	if (!err)
		printf("\033[92m ft_tolower is ok \033[0m\n");
}

void	test_isdigit()
{
	int i = -1;
	int err = 0;

	while (++i < 128)
	{
		if (ft_isdigit(i) != isdigit(i))
		{
			printf("\033[31merror on ft_isdigit at char -> %c\033[0m\n", i);
			err = 1;
		}
	}
	if (!err)
		printf("\033[92m ft_isdigit is ok \033[0m\n");
}

void	test_isascii()
{
	int i = -1;
	int err = 0;

	while (++i < 128)
	{
		if (ft_isascii(i) != isascii(i))
		{
			printf("\033[31merror on ft_isascii at char -> %c\033[0m\n", i);
			err = 1;
		}
	}
	if (!err)
		printf("\033[92m ft_isascii is ok \033[0m\n");
}

void	test_isalnum()
{
	int i = -1;
	int err = 0;

	while (++i < 128)
	{
		if (ft_isalnum(i) != isalnum(i))
		{
			printf("\033[31merror on ft_isalnum at char -> %c\033[0m\n", i);
			err = 1;
		}
	}
	if (!err)
		printf("\033[92m ft_isalnum is ok \033[0m\n");
}

void	test_isprint()
{
	int i = -1;
	int err = 0;

	while (++i < 128)
	{
		if (ft_isprint(i) != isprint(i))
		{
			printf("\033[31merror on ft_isprint at char -> %c\033[0m\n", i);
			err = 1;
		}
	}
	if (!err)
		printf("\033[92m ft_isprint is ok \033[0m\n");
}

void test_memcpy (void)
{
	char	memc1[10]	= "123456789";
	char	memc2[5]	= "abcd";

	ft_memcpy(memc1, memc2, 3);
	if (memc1[0] == memc2[0] && memc1[1] == memc2[1] && memc1[2] == memc2[2])
		printf("\033[92m ft_memcpy is ok \033[0m\n");
	else
		printf("\033[31merror on ft_memcpy\033[0m\n");
}

void test_ft_bzero(void)
{
	char *str = strdup("totowefewefwe");
	char *str2 = strdup("totowefewefwe");
	int len = strlen("totowefewefwe");
	int i = -1;;
	int err = 0;

	bzero(str , 3);
	ft_bzero(str2 , 3);
	while (++i < len)
	{
		if (str[i] != str2[i])
		{
			printf("\033[31merror on ft_bzero at i -> %d char->  %c\033[0m\n", i, str[i]);
			err = 1;
		}
	}

	if (!err)
		printf("\033[92m ft_bzero is ok \033[0m\n");

}

void	test_ft_memset(void)
{
	char *str = strdup("totowefewefwe");
	char *str2 = strdup("totowefewefwe");
	int len = strlen("totowefewefwe");

	memset(str, 'c', 4);
	ft_memset(str2, 'c', 4);

	if (strcmp(str, str2) != 0)
		printf("\033[31merror on ft_memset at str -> %s str2->  %s\033[0m\n",str, str2);
	else
		printf("\033[92m ft_memset is ok \033[0m\n");
}


void	test_ft_strlen(void)
{
	int a = strlen("42");
	int b = ft_strlen("42");
	if (a != b)
		printf("\033[31merror on ft_strlen\n");
	else
		printf("\033[92m ft_strlen is ok \033[0m\n");
}

void test_ft_strcat(void)
{
	char *str = strdup("");
	char *str2 = strdup("");
	char *str3 = strdup("");
	char *str4 = strdup("");

	str = strcat(str, str2);
	str3 = ft_strcat(str3, str4);
	if (strcmp(str3, str) != 0)
		printf("\033[31merror on ft_strcat\n");
	else
		printf("\033[92m ft_strcat is ok \033[0m\n");
}

void test_ft_strdup(void)
{
	char *str = strdup("");
	char *str2 = ft_strdup("");
	char *str3 = strdup("salut toi !");
	char *str4 = ft_strdup("salut toi !");


	if (strcmp(str, str2) != 0  || strcmp(str3, str4))
		printf("\033[31merror on ft_strdup\n");
	else
		printf("\033[92m ft_strdup is ok \033[0m\n");
}



void test_ft_power2(void)
{
	int i = -50;
	while (++i < 100 ) {
		if (ft_power2(i) != (i * i)) {
			printf("\033[31merror on ft_power2 %d\n", i);
			return ;
		}
	}
	printf("\033[92m ft_power2 is ok \033[0m\n");
}

// void test_ft_powern() {
// 	int i = 0;
// 	while (++i < 100) 
// 	{
// 		if (ft_powern(2, i) != pow(2, i)) {
// 			printf("\033[31merror on ft_powern %d ret pow : %f, myret: %d\n", i,pow(2, i), ft_powern(2, i));
// 			return ;
// 		}
// 	}
// 	printf("\033[92m ft_powern is ok \033[0m\n");
// }


void test_ft_strcpy() {
	char *str = strdup("");
	char *str2 = strdup("");
	char *str3 = strdup("coucou toi !");
	char *str4 = strdup("coucou toi !");
	char *ret2;
	char *ret1;
	
	ret2 = strcpy(str, str3);
	printf("%sa", str);
	ret1 = ft_strcpy(str2, str4);
	printf("%s", ret1);
}

int	main(int ac, char **av){
	test_isalpha();
	test_toupper();
	test_tolower();
	test_isdigit();
	test_isascii();
	test_isalnum();
	test_isprint();
	test_memcpy();
	test_ft_bzero();
	test_ft_memset();
	test_ft_strlen();
	test_ft_strcat();
	test_ft_strdup();
	test_ft_power2();
	test_ft_strcpy();
	ft_puts("coucou");

	ft_cat(open(av[1], O_RDONLY));
	return 0;
}