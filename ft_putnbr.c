/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enpardo- <enpardo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 10:36:32 by enpardo-          #+#    #+#             */
/*   Updated: 2025/03/03 10:32:08 by enpardo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, int *count)
{
	unsigned int	nb;

	if (n < 0)
	{
		ft_putchar('-', count);
		nb = (unsigned int)(-n);
	}
	else
	{
		nb = (unsigned int)n;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10, count);
	ft_putchar((nb % 10) + '0', count);
}
