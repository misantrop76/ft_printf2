#include "ft_printf.h"
#include <stdio.h>

int main()
{
	char *s;

	s = 0;
	printf("|%d| ft_printf\n", ft_printf("%u char imprime:", &s));
	printf("|%d| printf\n\n", printf("%uhey salut voila l'adress %p char imprime:", &s));

}