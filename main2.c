#include "ft_printf.h"
#include <stdio.h>

int main()
{
	char *s;

	s = 0;
	printf("|%d| ft_printf\n", ft_printf("%u char imprime:", 2147483647));
	printf("|%d| printf\n\n", printf("%u char imprime:", 2147483647));

}