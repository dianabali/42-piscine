#include <unistd.h>

void ft_putchar(char c, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		write(1, &c, 1);
		i++;
	}
}

void hex_digit(unsigned long long nb, int check)
{
	char *hex_digits;

	hex_digits = "0123456789abcdef";

	if (nb < 16 && check == 1)
		ft_putchar('0', 1);

	if (nb >= 16)
	{
		hex_digit(nb / 16, 0);
		hex_digit(nb % 16, 0);
	}
	else
		ft_putchar(hex_digits[nb], 1);
}

void print_address(unsigned long long address)
{
	unsigned long long tmp;
	int i;

	tmp = address;
	i = 1;

	while (i++ < 15)
	{
		if (tmp < 16)
			ft_putchar('0', 1);
		tmp /= 16;
	}

	hex_digit(address, 0);
}

void print_info(unsigned char *c, int size)
{
	int i;

	i = -1;
	while (i++ < 16)
	{
		if (i % 2 == 0)
			ft_putchar(' ', 1);
		if (i < size)
		{
			hex_digit((unsigned long long)*(c + i), 1);
		}		
		else if (i != 16)
			ft_putchar(' ', 2);
	}
	i = -1;

	while (i++ < size - 1)
	{
		if (*(c + i) <= 31 || *(c + i) >= 127)
			ft_putchar('.', 1);
		else
			ft_putchar(*(c + i), 1);
	}
}

void *ft_print_memory(void *address, unsigned int size)
{
	unsigned int i;
	unsigned int columns;

	i = 0;
	while (i * 16 < size)
	{
		if (i < size / 16)
			columns = 16;
		else
			columns = size % 16;

		print_address((unsigned long long)address + (i * 16));
		ft_putchar(':', 1);

		print_info(address + (i * 16), columns);
		ft_putchar('\n', 1);
		i++;
	}
	return (address);
}

/* int main()
{
	char *str = "hgsg\tshgdgdg isijidhuih\ncccc ---ddd.,,;]]@@dnjdh$$c";
	int	size = 0;

	while (str[size])
		size++;
	ft_print_memory(str, size);
} */