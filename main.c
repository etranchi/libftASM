#include "include/libfts.h"
#include <stdlib.h>

int main(int argc, char **argv) 
{
    // printf("Real isdigit: %d\n",isdigit(42));
    // printf("Mine isdigit: %d\n",ft_isdigit(42));
    // int i = -9;
    // while (i< 0) {
    //     printf("%c", tolower(i));
    //     i++;
    // }
    // printf("\n");
    // i = -9;
    // while (i < 0){ 
    //     printf("%c", ft_tolower(i));
    //     i++;
    // }
    // printf("\n");
    
    // printf("Real toupper: %c\n", toupper('b'));
    // printf("Mine toupper: %c\n", ft_toupper('b'));
    // printf("Real isalpha: %d\n", isalpha(''));
    // printf("Mine isalpha: %d\n", ft_isalpha(''));
    // printf("Real isalnum: %d\n", isalnum('9'));
    // printf("Mine isalnum: %d\n", ft_isalnum('9'));
    // printf("Real isascii: %d\n", isascii(0));
    // printf("Real isascii: %d\n", ft_isascii(0));
    // printf("Real isprint: %d\n", isprint(0));
    // printf("Real isprint: %d\n", ft_isprint(0));
	int			i;
	int			j;
	int			ret;
    int			ret2;
    int error = 0;
	if (argc == 2)
	{
		i = atoi(argv[1]);
		j = -9;
		while (j < 255)
		{
			if (i == 0) {
				ret = ft_isalpha(j);
                ret2 = isalpha(j);
            }
			else if (i == 1) { 
				ret = ft_isdigit(j);
                ret2 = isdigit(j);
            }
			else if (i == 2) {
				ret = ft_isalnum(j);
                ret2 = isalnum(j);
            }
			else if (i == 3) {
                ret = ft_isascii(j);
                ret2 = isascii(j);
            }
			else if (i == 4) {
				ret = ft_isprint(j);
                ret2 = isprint(j);
            }
			else if (i == 5) {
				ret = ft_tolower(j);
                ret2 = tolower(j);
            } 
			else if (i == 6) { 
				ret = ft_toupper(j);
                ret2 = toupper(j);
            }
            if (ret != ret2) {
                error = 1;
                printf("value :%d, real: %d, mine: %d\n", j,ret2, ret);
            }
			j++;
		}
	}
    if (error)
        printf("Error.\n");
    else
        printf("Success.\n");

    // if (argc >= 3) {
    //     ret = ft_strlen(argv[2]);
    //     ret2= strlen(argv[2]);
	//     printf("STRLEN -> real: %zu, mine: %zu\n",ret2, ret);
    //     ft_bzero(argv[2], strlen(argv[2]));
    //     printf("BZERO: %s\n", argv[2]);
    // }
    char *str;
    char *str2;

    if (argc >= 4)
	{
		i = atoi(argv[1]);
		str = (char *)malloc(sizeof(char) * 100);
		str[0] = 0;
        str2 = (char *)malloc(sizeof(char) * 100);
		str2[0] = 0;

    str2 = strcat(str2, argv[2]);
        str2 = strcat(str2, argv[3]);
        str = ft_strcat(str, argv[2]);
        str = ft_strcat(str, argv[3]);
        
        printf("la  %s\n", str);
        printf("la2 %s\n", str2);
	}

    return 0;
}