/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mminet <mminet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 18:28:36 by mminet            #+#    #+#             */
/*   Updated: 2024/03/27 12:44:43 by mminet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include "libft/libft.h"

int		ft_printf(const char *str, ...);
void	ft_pointer(va_list va, int *nb);
char	*ft_convert(unsigned long nbr);
void	ft_hex(va_list list, int *nb, char maj);
void	ft_char(va_list va, int *nb);
void	ft_string(va_list va, int *nb);
void	ft_int(va_list va, int *nb);
void	ft_unsigned(unsigned int nbr, int *nb);
void	ft_perc(int *nb);

#endif
