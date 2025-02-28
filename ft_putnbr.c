/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enpardo- <enpardo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 10:36:32 by enpardo-          #+#    #+#             */
/*   Updated: 2025/02/28 12:05:03 by enpardo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, int *count)
{
	unsigned int	nb;

	if (n < 0)
	{
		write(1, "-", 1);
		(*count)++;
		nb = -n;
	}
	else
	{
		nb = n;
		if (nb >= 10)
			ft_putnbr(nb / 10, count);
		ft_putchar((nb % 10) + '0', count);
	}
}
