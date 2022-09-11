/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyavuz <muyavuz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 06:37:14 by muyavuz           #+#    #+#             */
/*   Updated: 2022/09/11 06:37:55 by muyavuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{	
	int	n;
	int	*a;

	n = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	a = (int *)malloc(sizeof(int) * (max - min));
	if (a == NULL)
		return (-1);
	while (min < max)
	{
		a[n] = min;
		min++;
		n++;
	}
	*range = a;
	return (max - min);
}
/*
int main(void)
{
	int *arr;
	int j = ft_ultimate_range(&arr, -5, 10);
	int i = 0;
	while (i < 15)
	{
		printf("%i\n", arr[i]);
		i++;
	}
} */
