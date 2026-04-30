// #include <stdio.h>

int ft_iterative_factorial(int nb)
{
	int result;

	result = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		result = result * nb;
		nb--;
	}
	return (result);
}

/* int main(void)
{
	printf("%d", ft_iterative_factorial(5));
} */