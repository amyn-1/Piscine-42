/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabbidi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 15:39:37 by mlabbidi          #+#    #+#             */
/*   Updated: 2026/01/27 12:22:04 by mlabbidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j] && to_find[j] != '\0')
			j++;
		if (to_find[j] == '\0')
			return (str + i);
		i++;
		j = 0;
	}
	return (0);
}
/*
int main(void)
{
	char *string;
	char *to_be_found;
	char *result;

	string = "This is a test for the strstr() function.";
	to_be_found = "";

	result = ft_strstr(string, to_be_found);
	if (result) printf("String found: %s\n", result);
	else if (result) printf("to_be_found is empty!\n");
	else printf("Nothing was found!\n");
}
*/
