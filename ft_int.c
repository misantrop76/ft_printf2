#include "ft_printf.h"

void	ft_int(va_list va, int *nb)
{
	long nbr;
	char *str;

	nbr = va_arg(va, int);
	str = ft_itoa(nbr);
	*nb += write(1, str, ft_strlen(str));
	free(str);
}

void	ft_unsigned(unsigned int nbr, int *nb)
{
	char	*str;

	str = ft_itoa(nbr);
	*nb += write(1, str, ft_strlen(str));
	free(str);
}