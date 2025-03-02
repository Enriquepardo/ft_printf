/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enpardo- <enpardo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 10:57:43 by enpardo-          #+#    #+#             */
/*   Updated: 2025/03/02 22:22:33 by enpardo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	ft_printf("Char: %c\n", 'A');
	ft_printf("String: %s\n", "Hello, world!");
	ft_printf("Pointer: %p\n", (void *)main);
	ft_printf("Decimal: %d\n", 42);
	ft_printf("Integer: %i\n", -42);
	ft_printf("Unsigned: %u\n", 42);
	ft_printf("Hex (lowercase): %x\n", 255);
	ft_printf("Hex (uppercase): %X\n", 255);
	ft_printf("Percent: %%\n");
	return (0);
}

// cc -Wall -Werror -Wextra ft_putnbr.c ft_putchar.c ft_putstr.c
// ft_putptr.c ft_putunbr.c ft_puthex.c ft_printf.c main.c -o printf_test
// ./printf_test