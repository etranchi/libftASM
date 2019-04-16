#include "include/libfts.h"
#include <stdlib.h>

int main() 
{
    printf("Real isdigit: %d\n",isdigit(42));
    printf("Mine isdigit: %d\n",ft_isdigit(42));
    printf("Real tolower: %c\n", tolower('A'));
    printf("Mine tolower: %c\n", ft_tolower('A'));
    printf("Real toupper: %c\n", toupper('b'));
    printf("Mine toupper: %c\n", ft_toupper('b'));
    printf("Real isalpha: %d\n", isalpha('&'));
    printf("Mine isalpha: %d\n", ft_isalpha('&'));
    printf("Real isalnum: %d\n", isalnum('9'));
    printf("Mine isalnum: %d\n", ft_isalnum('9'));
    printf("Real isascii: %d\n", isascii(0));
    printf("Real isascii: %d\n", ft_isascii(0));
    printf("Real isprint: %d\n", isprint(0));
    printf("Real isprint: %d\n", ft_isprint(0));
    return 0;
}