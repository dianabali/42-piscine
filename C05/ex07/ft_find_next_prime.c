// #include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

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

int ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) == 0)
		nb++;
	return (nb);
}

/* int	main(void)
{
	printf("-1: %d\n", ft_find_next_prime(-1));
	printf("0: %d\n", ft_find_next_prime(0));
	printf("5: %d\n", ft_find_next_prime(5));
	printf("25: %d\n", ft_find_next_prime(25));
	printf("84: %d\n", ft_find_next_prime(84));
} */