// #include <stdio.h>

int check_base(char *str)
{
	int i;
	int j;

	i = 0;
	if (str[0] == '\0' || str[1] == '\0')
		return (0);
	while (str[i])
	{
		if (str[i] <= 32 || str[i] == 127 || str[i] == '-' || str[i] == '+')
			return (0);
		j = i + 1;

		while (str[j])
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

int base_match(char c, char *base)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int pre_digits(char *str, int *ptr_sign)
{
	int sign;
	int i;

	sign = 1;
	i = 0;

	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;

	while (str[i] && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	*ptr_sign = sign;
	return (i);
}

int ft_atoi_base(char *str, char *base)
{
	int i;
	int sign;
	int sum;
	int current;
	int base_size;

	sum = 0;
	sign = 1;

	base_size = check_base(base);

	if (base_size >= 2)
	{
		i = pre_digits(str, &sign);

		current = base_match(str[i], base);

		while (current != -1)
		{

			sum = (sum * base_size) + current;
			i++;

			current = base_match(str[i], base);
		}
		return (sign * sum);
	}
	return (0);
}

/* int main(void)
{
	printf("%d\n", ft_atoi_base("---++1", "0123456789"));
	printf("%d\n", ft_atoi_base("  ++--10", "01"));
	printf("%d\n", ft_atoi_base("---++a", "0123456789abcdef"));
} */