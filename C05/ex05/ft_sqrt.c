/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyavuz <muyavuz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 20:18:18 by muyavuz           #+#    #+#             */
/*   Updated: 2022/09/05 20:18:38 by muyavuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	mid;
	int	min;
	int	max;

	min = 0;
	max = 46340;
	if (nb <= 0)
		return (0);
	while (min <= max)
	{
		mid = (min + max) / 2;
		if (nb < (mid * mid))
			max = mid - 1;
		else if (nb > (mid * mid))
			min = mid + 1;
		else
			return (mid);
	}
	return (0);
}
/*int main(void)
{
	printf("%i\n", ft_sqrt(100000000));
	printf("%i\n", ft_sqrt(2));
} */
