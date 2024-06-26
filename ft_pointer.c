/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mminet <mminet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 12:52:49 by mminet            #+#    #+#             */
/*   Updated: 2024/04/03 16:01:02 by mminet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_convert(unsigned int nbr)
{
	unsigned long	tmp;
	char			*str;
	char			*tab;
	int				i;

	if (!nbr)
		return (NULL);
	tab = "0123456789abcdef";
	i = 0;
	tmp = nbr;
	while (tmp > 0)
	{
		tmp /= 16;
		i++;
	}
	str = malloc(sizeof(char) * (i + 1));
	if (str == NULL)
		return (NULL);
	str[i--] = '\0';
	while (nbr > 0)
	{
		str[i--] = tab[nbr % 16];
		nbr /= 16;
	}
	return (str);
}

char	*ft_upper(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		str[i] = ft_toupper(str[i]);
		i++;
	}
	return (str);
}

void	ft_hex(va_list list, int *nb, char maj)
{
	char	*str;

	str = ft_convert((unsigned int)va_arg(list, int));
	if (str == NULL)
		*nb += write(1, "0", 1);
	else
	{
		if (maj == 'x')
			*nb += write(1, str, ft_strlen(str));
		else
			*nb += write(1, ft_upper(str), ft_strlen(str));
		free(str);
	}
}

char	*ft_convert_p(unsigned long nbr)
{
	unsigned long	tmp;
	char			*str;
	char			*tab;
	int				i;

	if (!nbr)
		return (NULL);
	tab = "0123456789abcdef";
	i = 0;
	tmp = nbr;
	while (tmp > 0)
	{
		tmp /= 16;
		i++;
	}
	str = malloc(sizeof(char) * (i + 1));
	if (str == NULL)
		return (NULL);
	str[i--] = '\0';
	while (nbr > 0)
	{
		str[i--] = tab[nbr % 16];
		nbr /= 16;
	}
	return (str);
}

void	ft_pointer(va_list va, int *nb)
{
	char	*str;

	str = ft_convert_p(va_arg(va, unsigned long));
	if (str == NULL)
		*nb += write(1, "(nil)", 5);
	else
	{
		*nb += write(1, "0x", 2);
		*nb += write(1, str, ft_strlen(str));
		free(str);
	}
}
