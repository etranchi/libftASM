#include "include/libfts.h"
#include <stdlib.h>

int main() 
{
    printf("real %d\n",isdigit(42));
    printf("mine %d\n",ft_isdigit(42));
    printf("A to lower : %c\n", ft_tolower('A'));
    printf("b to upper : %c\n", ft_toupper('b'));
    printf("2 is alpha : %d\n", ft_isalpha(0));
    return 0;
}