#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	val1;
	int	val2;

	val1 = 0;
	while (val1 <= 99)
	{
		val2 = val1 + 1;
		while (val2 <= 99)
		{
			ft_putchar(val1 / 10 + '0');
			ft_putchar(val1 % 10 + '0');
			ft_putchar(' ');
			ft_putchar(val2 / 10 + '0');
			ft_putchar(val2 % 10 + '0');

			if (!(val1 == 98 && val2 == 99))
				write(1, ", ", 2);
			val2++;
		}
		val1++;
	}
}

int	main(void)
{
	ft_print_comb2();
}