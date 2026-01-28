/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabbidi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 12:53:16 by mlabbidi          #+#    #+#             */
/*   Updated: 2026/01/22 12:55:49 by mlabbidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	temp = 0;
	while (i < (size / 2))
	{
		temp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = temp;
		i++;
	}
}

int main(void){
	int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int size = 9;

	printf("The array before:\n");
	for(int i = 0; i < size; i++){
		printf("%d", array[i]);
	}
	
	printf("\n");
	
	ft_rev_int_tab(array, size);
	
	printf("The array after:\n");
	for(int i = 0; i < size; i++){
		printf("%d", array[i]);
	}
	
}
