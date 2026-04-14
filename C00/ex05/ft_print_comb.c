#include <unistd.h>

void ft_print_values(char val1, char val2, char val3)
{
	write(1, &val1, 1);
	write(1, &val2, 1);
	write(1, &val3, 1);

	if (!(val1 == '7' && val2 == '8' && val3 == '9'))
		write(1, ", ", 2);
}

void ft_print_comb(void)
{
	char val1;
	char val2;
	char val3;

	val1 = '0';
	while (val1 <= '7')
	{
		val2 = val1 + 1;
		while (val2 <= '8')
		{
			val3 = val2 + 1;
			while (val3 <= '9')
			{
				ft_print_values(val1, val2, val3);
				val3++;
			}
			val2++;
		}
		val1++;
	}
}

/* int	main(void)
{
	ft_print_comb();
} */