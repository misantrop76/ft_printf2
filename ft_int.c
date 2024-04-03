/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mminet <mminet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 14:40:32 by mminet            #+#    #+#             */
/*   Updated: 2024/04/03 14:40:49 by mminet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_int(va_list va, int *nb)
{
	long	nbr;
	char	*str;

	nbr = va_arg(va, int);
	str = ft_itoa(nbr);
	*nb += write(1, str, ft_strlen(str));
	free(str);
}

void	ft_unsigned(unsigned long nbr, int *nb)
{
	char	*str;

	str = ft_itoa(nbr);
	*nb += write(1, str, ft_strlen(str));
	free(str);
}
