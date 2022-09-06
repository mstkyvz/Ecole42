/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyavuz <muyavuz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 11:38:59 by muyavuz           #+#    #+#             */
/*   Updated: 2022/09/05 13:11:03 by muyavuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_num(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	is_space(char c)
{
	if (c == 32 || (c == 9)
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	neg;
	int	num;
	int	i;

	neg = 0;
	num = 0;
	i = 0;
	while (str[i] && is_space(str[i]))
		i++;
	while (str[i] && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			neg++;
		i++;
	}
	while (str[i] && is_num(str[i]))
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	if (neg % 2 != 0)
		num *= -1;
	return (num);
}
/*
int main(void)
{
	char *s = "   ---+--+01234506789ab567";
	printf("%d", ft_atoi(s));
} */
