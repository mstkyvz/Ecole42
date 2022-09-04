/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyavuz <muyavuz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 01:50:48 by muyavuz           #+#    #+#             */
/*   Updated: 2022/09/03 17:04:12 by muyavuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
		{
			str[i] = ((str[i] - 'a') + 'A');
		}
		i++;
	}
	return (str);
}
/*
int	main()
{
	char str[] = "abcdefghj";
	printf("%s", ft_strupcase(str));
} */
