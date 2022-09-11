/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyavuz <muyavuz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 06:36:21 by muyavuz           #+#    #+#             */
/*   Updated: 2022/09/11 06:36:52 by muyavuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	n;
	int	*ptr;

	n = 0;
	if (max <= min)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(int) * (max - min));
	if (ptr == NULL)
		return (0);
	while (min < max)
	{
		ptr[n] = min;
		n++;
		min++;
	}
	return (ptr);
}
/*
int main(void)
{
	int *ptr = (ft_range(-5, 10));
	int i = 0;
	while (i < 15)
	{
		printf("%i\n", ptr[i]);
		i++;
	}
}*/
