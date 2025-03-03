/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enpardo- <enpardo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 10:56:19 by enpardo-          #+#    #+#             */
/*   Updated: 2025/03/03 10:07:03 by enpardo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Si count fuera una variable normal (int count = 0;),
cada función recibiría una copia de count en la pila,
lo que significaría que los cambios no afectarían al valor original.
Al usar un puntero (int *count),
todas las funciones trabajan sobre la misma dirección de memoria,
asegurando que el valor acumulado se mantenga en cada llamada.
*/

#include "ft_printf.h"

void	ft_format(va_list args, char spec, int *count)
{
	if (spec == 'c')
		ft_putchar(va_arg(args, int), count);
	else if (spec == 's')
		ft_putstr(va_arg(args, char *), count);
	else if (spec == 'p')
		ft_putptr(va_arg(args, void *), count);
	else if (spec == 'd' || spec == 'i')
		ft_putnbr(va_arg(args, int), count);
	else if (spec == 'u')
		ft_putunbr(va_arg(args, unsigned int), count);
	else if (spec == 'x')
		ft_puthex(va_arg(args, unsigned int), 0, count);
	else if (spec == 'X')
		ft_puthex(va_arg(args, unsigned int), 1, count);
	else if (spec == '%')
		ft_putchar('%', count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			ft_format(args, format[i + 1], &count);
			i++;
		}
		else
			ft_putchar(format[i], &count);
		i++;
	}
	va_end(args);
	return (count);
}
