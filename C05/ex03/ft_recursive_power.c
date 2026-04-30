// #include <stdio.h>

int ft_recursive_power(int nb, int power)
{
    if (power < 0)
        return 0;
    if (power == 0)
        return 1;
    return nb * ft_recursive_power(nb, power - 1);
}

/* int main(void)
{
    int nb = 2;
    int power1 = 3;
    int power2 = 0;
    int power3 = -2;

    int result1 = ft_recursive_power(nb, power1);
    int result2 = ft_recursive_power(nb, power2);
    int result3 = ft_recursive_power(nb, power3);

    printf("%d raised to the power of %d is %d\n", nb, power1, result1);
    printf("%d raised to the power of %d is %d\n", nb, power2, result2);
    printf("%d raised to the power of %d is %d\n", nb, power3, result3);
    return 0;
} */