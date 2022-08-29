/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakcan <abakcan@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 21:28:54 by abakcan           #+#    #+#             */
/*   Updated: 2022/08/28 21:28:56 by abakcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

void	rush(int d, int y)
{
	int	m;
	int	p;

	p = 1;
	while (p <= y && d > 0)
	{
		m = 1;
		while (m <= d)
		{
			if ((m == 1 && p == 1) || (m == d && p == y && m != 1 && p != 1))
				ft_putchar('A');
			else if ((m == d && p == 1) || (m == 1 && p == y))
				ft_putchar('C');
			else if ((m == 1) || (m == d) || (p == 1) || (p == y))
				ft_putchar('B');
			else
				ft_putchar(' ');
			m++;
		}
		ft_putchar('\n');
		p++;
	}
}
