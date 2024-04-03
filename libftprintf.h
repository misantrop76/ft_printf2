/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mminet <mminet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 14:38:42 by mminet            #+#    #+#             */
/*   Updated: 2024/04/03 15:30:17 by mminet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINT_H
# define LIBFTPRINT_H
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include "libft/libft.h"

int		ft_printf(const char *str, ...);
void	ft_pointer(va_list va, int *nb);
char	*ft_convert(unsigned int nbr);
void	ft_hex(va_list list, int *nb, char maj);
void	ft_char(va_list va, int *nb);
void	ft_string(va_list va, int *nb);
void	ft_int(va_list va, int *nb);
void	ft_unsigned(unsigned long nbr, int *nb);
void	ft_perc(int *nb);

#endif
