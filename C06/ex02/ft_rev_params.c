/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyavuz <muyavuz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 15:48:19 by muyavuz           #+#    #+#             */
/*   Updated: 2022/09/10 15:48:21 by muyavuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	index;
	int	j;

	index = argc - 1;
	j = 0;
	while (index > 0)
	{
		while (argv[index][j] != '\0')
		{
			write(1, &argv[index][j], 1);
			j++;
		}
		j = 0;
		index--;
		write(1, "\n", 1);
	}
}
