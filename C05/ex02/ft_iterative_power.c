// #include <stdio.h>

int ft_iterative_power(int nb, int power)
{
    int result;

    result = 1;
    if (power < 0)
        return (0);
    if (power == 0)
        return (1);
    while (power > 0)
    {
        result = result * nb;
        power--;
    }
    return (result);
}

/* int main(void)
{
    int a = 2;

    int power1 = 3;
    int power2 = 0;
    int power3 = -2;

    printf("%d\n", ft_iterative_power(a, power1));
    printf("%d\n", ft_iterative_power(a, power2));
    printf("%d\n", ft_iterative_power(a, power3));
    return (0);
} */