/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyavuz <muyavuz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 09:04:33 by muyavuz           #+#    #+#             */
/*   Updated: 2022/09/11 09:04:58 by muyavuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check_base(char *str)
{
	int	counter;
	int	i;

	counter = 0;
	i = 0;
	while (str[counter] != '\0')
	{
		if (str[counter] == '-' || str[counter] == '+')
			return (1);
		else if (str[counter] == 127 || str[counter] <= 32)
			return (1);
		while (i < counter)
		{
			if (str[i] == str[counter])
				return (1);
			i++;
		}
		i = 0;
		counter++;
	}
	if (counter <= 1)
		return (1);
	return (0);
}
/*
int main(void)
{
	char *nbr = "      ++-+-2147483648";
	char *base_from = "0123456789";
	char *base_to = "0123456789";

	//long int i = ft_atoi_base(nbr, base_from);
	//printf("%li\n", i);

	char *num = ft_convert_base(nbr, base_from, base_to);

	printf("%s\n", num);
} */
