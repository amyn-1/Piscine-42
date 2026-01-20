/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabbidi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 10:44:26 by mlabbidi          #+#    #+#             */
/*   Updated: 2026/01/20 11:57:55 by mlabbidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - 1)
		{
			if (tab[j] > tab[j +1])
			{
				temp = tab[j];
				tab[j] = tab[j +1];
				tab[j +1] = temp;
			}
			j++;
		}
		i++;
	}
}
/*
int main(void)
{
	int array[] = {9, 1, 8, 2, 7, 3, 6, 4, 5};
	int size = 9;

	printf("The array before sorting:\n");
	for(int i = 0; i < size; i++)
	{
		printf("%d", array[i]);
		if (i < size - 1) printf(", ");
	}

	ft_sort_int_tab(array, size);

	printf("\nThe array after sorting:\n");
	for(int i = 0; i < size; i++)
	{
		printf("%d", array[i]);
		if (i < size - 1) printf(", ");
	}	
}
*/
