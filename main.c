/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enpardo- <enpardo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 10:57:43 by enpardo-          #+#    #+#             */
/*   Updated: 2025/02/28 11:44:43 by enpardo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int main(void)
{
    int count = 0;

    ft_putnbr(42, &count);
    printf("\nCaracteres impresos: %d\n", count);
    count = 0;

	ft_putstr("Hola, 42!", &count);
    printf("\nCaracteres impresos: %d\n\n", count);
	count = 0;

	ft_putunbr(42, &count);
    printf("\nCaracteres impresos: %d\n", count);
    count = 0;
    return 0;
}


// cc -Wall -Werror -Wextra ft_putnbr.c ft_putchar.c ft_putstr.c main.c
// ./a.out