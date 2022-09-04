/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyavuz <muyavuz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 10:08:27 by muyavuz           #+#    #+#             */
/*   Updated: 2022/09/04 13:40:46 by muyavuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && (i < n -1) && s1[i])
		i++;
	return (s1[i] - s2[i]);
}
/*int main(void)
{
	char *s1 = "cats and dogs";
	char *s2 = "cats and dogs";

	char *s3 = "often";
	char *s4 = "";

	char *s5 = "something";
	char *s6 = "others";

	printf(" %i\n", ft_strcmp(s1, s2));
	printf(" %i\n", ft_strcmp(s3, s4));
	printf(" %i\n", ft_strcmp(s5, s6));

	printf(" %i\n", strcmp(s1, s2));
	printf(" %i\n", strcmp(s3, s4));
	printf(" %i\n", strcmp(s5, s6));
} */
