/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyavuz <muyavuz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 19:46:16 by muyavuz           #+#    #+#             */
/*   Updated: 2022/09/05 19:47:25 by muyavuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	x;

	x = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		x = x * nb;
		nb--;
	}
	return (x);
}
/*
int main(void)
{
	int x = ft_iterative_factorial(-1);
	printf("%i\n", x);
} */
