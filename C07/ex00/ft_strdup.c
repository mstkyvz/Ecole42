/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyavuz <muyavuz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 06:35:05 by muyavuz           #+#    #+#             */
/*   Updated: 2022/09/11 06:35:58 by muyavuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*ptr;
	int		len;
	int		i;

	len = 0;
	i = 0;
	while (src[len])
		len++;
	ptr = malloc(sizeof(char) * len + 1);
	if (ptr == NULL)
		return (0);
	while (i < len)
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
/*
int main(void)
{
	char *p = ft_strdup("face");
	char *q = strdup("face");
	printf("%s\n", p);
	printf("%s\n", q);
}*/
