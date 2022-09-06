/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyavuz <muyavuz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 19:48:31 by muyavuz           #+#    #+#             */
/*   Updated: 2022/09/05 19:49:48 by muyavuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb != 0)
		return (nb * ft_recursive_factorial(nb - 1));
	else
		return (1);
}
/*int main(void)
{
	int x = ft_recursive_factorial(2);
	printf("%i\n", x);
} */
