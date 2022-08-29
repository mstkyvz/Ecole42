

#include <stdio.h>

void	ft_swap(int	*a, int	*b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

int	main()
{
	int	a;
	int	b;

	a = 10;
	b = 5;

	ft_swap(&a, &b);
	printf("%d\n", a);
	printf("%d", b);
}
