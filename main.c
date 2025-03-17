/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enpardo- <enpardo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 10:57:43 by enpardo-          #+#    #+#             */
/*   Updated: 2025/03/17 16:24:18 by enpardo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int count_ft, count_std;
	// Prueba con una cadena larga y múltiples argumentos
	count_ft = ft_printf("Largo: %s %d %x %p %c\n", "Cadena larga...", 1234567,
			0xABCDEF, NULL, 'Z');
	count_std = printf("Largo: %s %d %x %p %c\n", "Cadena larga...", 1234567,
			0xABCDEF, NULL, 'Z');
	printf("ft_printf: %d, printf: %d\n", count_ft, count_std);
	return (0);
}
