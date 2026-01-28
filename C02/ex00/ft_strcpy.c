/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabbidi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 12:30:11 by mlabbidi          #+#    #+#             */
/*   Updated: 2026/01/23 15:25:48 by mlabbidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int main(void)
{
	char src[] = "Test";
	char dest[30];

	printf("Before:\nsrc = %s.\ndest = %s.\n", src, dest);
	ft_strcpy(dest, src);
	printf("After:\nsrc = %s.\ndest = %s.\n", src, dest);
}
*/
