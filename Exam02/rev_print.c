#include <unistd.h>
#include <stdio.h>
int	ft_strlen(char *str)
{
	int	i;
	i = 0;
	while(str[i] != '\0')
		i++;
	return (i);
}
char *ft_rev_print(char *str)
{
	int	i;

	i = ft_strlen(str);
	i--;
	while (i >= 0)
	{
		write(1, &str[i], 1);
		i--;
	}
	return(str);
}

int main()
{
	char str[] = "gbrireugneb";
	ft_rev_print(str);
}

-------------------------------------OR-----------------------------------
	
#include <unistd.h>

int		main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int i;

		i = 0;
		while(argv[1][i])
			i += 1;
		while(i)
			write(1, &argv[1][--i], 1);
	}
	write(1 ,"\n", 1);
	return (0);
}
