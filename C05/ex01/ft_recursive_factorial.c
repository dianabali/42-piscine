// #include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb < 2)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}

/* int	main(void)
{
	printf("-1 = %d\n", ft_recursive_factorial(-1));
	printf("0 = %d\n", ft_recursive_factorial(0));
	printf("1 = %d\n", ft_recursive_factorial(1));
	printf("2 = %d\n", ft_recursive_factorial(2));
	printf("3 = %d\n", ft_recursive_factorial(3));
	printf("8 = %d\n", ft_recursive_factorial(8));
} */