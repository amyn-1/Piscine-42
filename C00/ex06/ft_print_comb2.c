/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabbidi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 11:33:06 by mlabbidi          #+#    #+#             */
/*   Updated: 2026/01/18 14:00:21 by mlabbidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	int	a;
	int	b;
	int	temp;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			temp = a / 10 + '0';
			write(1, &temp, 1);
			temp = a % 10 + '0';
			write(1, &temp, 1);
			write(1, " ", 1);
			temp = b / 10 + '0';
			write(1, &temp, 1);
			temp = b % 10 + '0';
			write(1, &temp, 1);
			if (a < 98)
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}
