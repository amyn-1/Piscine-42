/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabbidi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 16:45:25 by mlabbidi          #+#    #+#             */
/*   Updated: 2026/01/20 12:13:18 by mlabbidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*
int main(void){
	int a = 100;
	int b = 5;
	
	printf("Before:\na = %d.\nb = %d.\n", a, b);	

	ft_ultimate_div_mod(&a, &b);

	printf("After:\na = %d.\nb = %d.\n", a, b);
}
*/
