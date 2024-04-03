/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mminet <mminet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 14:44:11 by mminet            #+#    #+#             */
/*   Updated: 2024/04/03 16:01:31 by mminet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main()
{
	char	*s;
	char	*str;

	str = NULL;
	s = 0;
	printf("POINTER\n");
	printf("|%d| ft_printf\n", ft_printf("hey salut voila l'adress %p char imprime:", &s));
	printf("|%d| printf\n", printf("hey salut voila l'adress %p char imprime:", &s));
	printf("|%d| ft_printf\n", ft_printf("hey salut voila l'adress %p char imprime:", NULL));
	printf("|%d| printf\n\n", printf("hey salut voila l'adress %p char imprime:", NULL));
	printf("HEXA\n");
	printf("|%d| ft_printf\n", ft_printf("%x char imprime:", 461864));
	printf("|%d| printf\n", printf("%x char imprime:", 461864));
	printf("|%d| ft_printf\n", ft_printf("%x char imprime:", -461864));
	printf("|%d| printf\n", printf("%x char imprime:", -461864));
	printf("|%d| ft_printf\n", ft_printf("%x char imprime:", 0));
	printf("|%d| printf\n", printf("%x char imprime:", 0));
	printf("|%d| ft_printf\n", ft_printf("%X char imprime:", -2147483648));
	printf("|%d| printf\n", printf("%X char imprime:", -2147483648));
	printf("|%d| ft_printf\n", ft_printf("%X char imprime:", __INT32_MAX__));
	printf("|%d| printf\n", printf("%X char imprime:", __INT32_MAX__));
	printf("|%d| ft_printf\n", ft_printf("%X|%X|%X|%X|%X|%X|%x", 2147483647, -2147483648, 2147483647, -2147483648, 6, 0, -42));
	printf("|%d| printf\n\n", printf("%X|%X|%X|%X|%X|%X|%x", 2147483647, -2147483648, 2147483647, -2147483648, 6, 0, -42));
	printf("CHAR\n");
	printf("|%d| ft_printf\n", ft_printf("%c char imprime:", -42));
	printf("|%d| printf\n", printf("%c char imprime:", -42));
	printf("|%d| ft_printf\n", ft_printf("%c char imprime:", 's'));
	printf("|%d| printf\n", printf("%c char imprime:", 's'));
	printf("|%d| ft_printf\n", ft_printf("%c char imprime:", NULL));
	printf("|%d| printf\n\n", printf("%c char imprime:", NULL));
	printf("STRING\n");
	printf("|%d| ft_printf\n", ft_printf("%s char imprime:", str));
	printf("|%d| printf\n", printf("%s char imprime:", str));
	printf("|%d| ft_printf\n", ft_printf("%s char imprime:", NULL));
	printf("|%d| printf\n", printf("%s char imprime:", NULL));
	printf("|%d| ft_printf\n", ft_printf("%s char imprime:", "salut"));
	printf("|%d| printf\n\n", printf("%s char imprime:", "salut"));
	printf("INT\n");
	printf("|%d| ft_printf\n", ft_printf("%d char imprime:", 45));
	printf("|%d| printf\n", printf("%d char imprime:", 45));
	printf("|%d| ft_printf\n", ft_printf("%d char imprime:", -78));
	printf("|%d| printf\n", printf("%d char imprime:", -78));
	printf("|%d| ft_printf\n", ft_printf("%d char imprime:", 0));
	printf("|%d| printf\n", printf("%d char imprime:", 0));
	printf("|%d| ft_printf\n", ft_printf("%d char imprime:", -2147483648));
	printf("|%d| printf\n", printf("%ld char imprime:", -2147483648));
	printf("|%d| ft_printf\n", ft_printf("%i char imprime:", 2147483647));
	printf("|%d| printf\n\n", printf("%i char imprime:", 2147483647));
	printf("UNSIGNED\n");
	printf("|%d| ft_printf\n", ft_printf("%u char imprime:", 4294967295));
	printf("|%d| printf\n", printf("%u char imprime:", 4294967295));
	printf("|%d| ft_printf\n", ft_printf("%d char imprime:", 0));
	printf("|%d| printf\n\n", printf("%d char imprime:", 0));
	printf("MIX\n");
	printf("|%d| ft_printf\n", ft_printf("%d%c%ptest%%%X%s%x%u char imprime:", -56, 'k', &str, -89, str, 789456, 213));
	printf("|%d| ft_printf\n", printf("%d%c%ptest%%%X%s%x%u char imprime:", -56, 'k', &str, -89, str, 789456, 213));
	printf("|%d| ft_printf\n", ft_printf("%d%c%ptest%%%X%s%x%u char imprime:", -56, 'k', NULL, -89, NULL, -789456, 4294967295));
	printf("|%d| ft_printf\n", printf("%d%c%ptest%%%X%s%x%u char imprime:", -56, 'k', NULL, -89, NULL, -789456, 4294967295));
}
