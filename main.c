#include "ft_printf.h"
#include <stdio.h>

int main()
{
	char *s;

	s = 0;
	printf("POINTER\n");
	printf("|%d| ft_printf\n", ft_printf("hey salut voila l'adress %p char imprime:", &s));
	printf("|%d| printf\n\n", printf("hey salut voila l'adress %p char imprime:", &s));

	printf("|%d| ft_printf\n", ft_printf("hey salut voila l'adress %p char imprime:", NULL));
	printf("|%d| printf\n\n\n", printf("hey salut voila l'adress %p char imprime:", NULL));
 
	printf("HEXA\n");
	printf("|%d| ft_printf\n", ft_printf("%x char imprime:", 461864));
	printf("|%d| printf\n\n", printf("%x char imprime:", 461864));

	printf("|%d| ft_printf\n", ft_printf("%x char imprime:", -461864));
	printf("|%d| printf\n\n", printf("%x char imprime:", -461864));
	
	printf("|%d| ft_printf\n", ft_printf("%x char imprime:", 0));
	printf("|%d| printf\n\n", printf("%x char imprime:", 0));

	printf("|%d| ft_printf\n", ft_printf("%X char imprime:", 461864));
	printf("|%d| printf\n\n", printf("%X char imprime:", 461864));

	printf("|%d| ft_printf\n", ft_printf("%X char imprime:", __LONG_MAX__));
	printf("|%d| printf\n\n", printf("%lX char imprime:", __LONG_MAX__));

	printf("|%d| ft_printf\n", ft_printf("%X|%X|%X|%X|%X|%X|%x", 2147483647, -2147483648, 2147483647, -2147483648, 6, 0, -42));
	printf("|%d| printf\n\n", printf("%X|%X|%X|%X|%X|%X|%x", 2147483647, -2147483647, 2147483647, -2147483647, 6 , 0, -42));

	printf("|%d| ft_printf\n", ft_printf("%x char imprime:", -42));
	printf("|%d| printf\n\n", printf("%x char imprime:", -42));

	printf("|%d| ft_printf\n", ft_printf("%c char imprime:", 's'));
	printf("|%d| printf\n\n", printf("%c char imprime:", 's'));

	printf("|%d| ft_printf\n", ft_printf("%s char imprime:", "salut"));
	printf("|%d| printf\n\n", printf("%s char imprime:", "salut"));

	char *str = NULL;
	printf("|%d| ft_printf\n", ft_printf("%s char imprime:", str));
	printf("|%d| printf\n\n", printf("%s char imprime:", str));

	printf("|%d| ft_printf\n", ft_printf("%d char imprime:", 45));
	printf("|%d| printf\n\n", printf("%d char imprime:", 45));

	printf("|%d| ft_printf\n", ft_printf("%d char imprime:", -78));
	printf("|%d| printf\n\n", printf("%d char imprime:", -78));

	printf("|%d| ft_printf\n", ft_printf("%d char imprime:", 0));
	printf("|%d| printf\n\n", printf("%d char imprime:", 0));

	printf("|%d| ft_printf\n", ft_printf("%d char imprime:", -2147483648));
	printf("|%d| printf\n\n", printf("%ld char imprime:", -2147483648));

	printf("|%d| ft_printf\n", ft_printf("%d char imprime:", 2147483647));
	printf("|%d| printf\n\n", printf("%d char imprime:", 2147483647));

	printf("|%d| ft_printf\n", ft_printf("%u char imprime:", 2147483647));
	printf("|%d| printf\n\n", printf("%u char imprime:", 2147483647));

	printf("|%d| ft_printf\n", ft_printf("%d char imprime:", 21));
	printf("|%d| printf\n\n", printf("%d char imprime:", 21));
}