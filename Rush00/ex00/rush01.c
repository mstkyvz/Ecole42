/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakcan <abakcan@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 15:42:34 by abakcan           #+#    #+#             */
/*   Updated: 2022/08/28 15:42:39 by abakcan          ###   ########.fr       */
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
				ft_putchar('/');
			else if ((m == d && p == 1) || (m == 1 && p == y))
				ft_putchar('\\');
			else if ((m == 1) || (m == d) || (p == 1) || (p == y))
				ft_putchar('*');
			else
				ft_putchar(' ');
			m++;
		}
		ft_putchar('\n');
		p++;
	}
}
