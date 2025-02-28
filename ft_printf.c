/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enpardo- <enpardo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 10:56:19 by enpardo-          #+#    #+#             */
/*   Updated: 2025/02/28 10:56:41 by enpardo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Si count fuera una variable normal (int count = 0;),
cada función recibiría una copia de count en la pila,
lo que significaría que los cambios no afectarían al valor original.
Al usar un puntero (int *count), todas las funciones trabajan sobre la misma dirección de memoria,
asegurando que el valor acumulado se mantenga en cada llamada.
*/
