// #include <stdio.h>

int ft_sqrt(int nb)
{
	long i;

	i = 0;
	if (nb <= 0)
		return (0);
	while (i * i < nb)
		i++;
	if (i * i == nb)
		return (i);
	else
		return (0);
}

/* int	main(void)
{
	printf("-1 = %d\n", ft_sqrt(-1));
	printf("0 = %d\n", ft_sqrt(0));
	printf("1 = %d\n", ft_sqrt(1));
	printf("9 = %d\n", ft_sqrt(9));
	printf("144 = %d\n", ft_sqrt(144));
} */