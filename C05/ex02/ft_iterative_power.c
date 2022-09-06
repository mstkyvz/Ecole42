/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyavuz <muyavuz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 19:51:17 by muyavuz           #+#    #+#             */
/*   Updated: 2022/09/05 19:52:22 by muyavuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	num;

	num = 1;
	if (power < 0)
		return (0);
	while (power > 0)
	{	
		num = num * nb;
		power--;
	}
	return (num);
}
/*int main(void)
{
	printf("%i\n", ft_iterative_power(0, -1));
} */
