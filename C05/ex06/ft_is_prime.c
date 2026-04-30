// #include <stdio.h>

int ft_is_prime(int nb)
{
	int i;

	if (nb <= 1)
		return (0);

	i = 2;
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

/* int	main(void)
{
	printf("-1 = %d\n", ft_is_prime(-1));
	printf("0 = %d\n", ft_is_prime(0));
	printf("1 = %d\n", ft_is_prime(1));
	printf("2 = %d\n", ft_is_prime(2));
	printf("4 = %d\n", ft_is_prime(4));
	printf("5 = %d\n", ft_is_prime(5));
	printf("6 = %d\n", ft_is_prime(6));
	printf("8 = %d\n", ft_is_prime(8));
	printf("31 = %d\n", ft_is_prime(31));
} */