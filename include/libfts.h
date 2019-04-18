
#ifndef __LIBFTS__
# define __LIBFTS__
# include <stdlib.h>

int ft_isdigit(int );
int ft_isalpha(int );
int ft_isalnum(int );
int ft_isascii(int );
int ft_isprint(int );
int ft_tolower(int );
int ft_toupper(int );
size_t ft_strlen(char* );
void ft_bzero(void *, size_t);
char *ft_strcat(char *restrict s1, const char *restrict s2);
#endif 