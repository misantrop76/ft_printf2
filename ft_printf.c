/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mminet <mminet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 12:41:44 by mminet            #+#    #+#             */
/*   Updated: 2024/03/26 17:00:13 by mminet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_search(int i, char j, va_list va, int *nb)
{

	if (!ft_strchr("pxXscdi%u", j))
		return (i);
	if (j == 'p')
		ft_pointer(va, nb);
	else if (j == 'x' || j == 'X')
		ft_hex(va, nb, j);
	else if (j == 's')
		ft_string(va, nb);
	else if (j == 'c')
		ft_char(va, nb);
	else if (j == 'd' || j == 'i')
		ft_int(va, nb);
	/*else if (j == '%')
		ft_pourc(va, nb);
	else if (j == 'u')
		ft_unsigned(va, nb);*/
	return (i + 1);
}

int		ft_printf(const char *str, ...)
{
	va_list	va;
	int		i;
	int		nb;

	nb = 0;
	i = 0;
	va_start(va, str);
	while (str[i])
	{
		if (str[i] == '%')
			i = ft_search(i, str[i + 1], va, &nb);
		else
			nb += write(1, &str[i], 1);
		i++;
	}
	va_end(va);
	return (nb);
}
