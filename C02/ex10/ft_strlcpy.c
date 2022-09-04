/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyavuz <muyavuz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 02:00:48 by muyavuz           #+#    #+#             */
/*   Updated: 2022/09/03 17:10:02 by muyavuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	k;
	unsigned int	j;

	k = 0;
	j = 0;
	while (src[j] != '\0')
	{
		j++;
	}
	if (size != 0)
	{
		while ((src[k] != '\0') && (k < (size - 1)))
		{
			dest[k] = src[k];
			k++;
		}
		dest[k] = '\0';
	}
	return (j);
}
/*
int main(void)
{
    char src[] = "abcdefgh";
    char dest[8];
    int size = 5;
    int x;

    x = ft_strlcpy(dest, src, size);
    printf("dest: %s\n", dest);
    printf("src: %s\n", src);
    printf("size: %i\n", x);
} */
