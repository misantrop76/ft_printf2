/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mminet <mminet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 14:43:00 by mminet            #+#    #+#             */
/*   Updated: 2024/04/03 14:43:19 by mminet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_perc(int *nb)
{
	*nb += write(1, "%", 1);
}

void	ft_string(va_list va, int *nb)
{
	char	*str;

	str = va_arg(va, char *);
	if (str == NULL)
		*nb += write(1, "(null)", 6);
	else
		*nb += write(1, str, ft_strlen(str));
}

void	ft_char(va_list va, int *nb)
{
	char	c;

	c = (char)va_arg(va, int);
	*nb += write(1, &c, 1);
}
