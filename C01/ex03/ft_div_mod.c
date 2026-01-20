/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabbidi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 16:31:51 by mlabbidi          #+#    #+#             */
/*   Updated: 2026/01/18 14:28:37 by mlabbidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int main(void){
         int a = 10;
         int b = 2;
         int div;
         int mod;
         ft_div_mod(a, b, &div, &mod);
         
         printf("Division result: %d\n", div);
         printf("Modulo result: %d", mod);
}
*/
