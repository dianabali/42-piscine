#include <unistd.h>
//#include <stdio.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void hex_digit(unsigned char c)
{
	char *hex_digit;

	hex_digit = "0123456789abcdef";
	ft_putchar(hex_digit[c / 16]);
	ft_putchar(hex_digit[c % 16]);
}

void ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] < ' ' || str[i] == 127)
		{
			ft_putchar('\\');
			hex_digit(str[i]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}

/* int main(void)
{
	char str[] = "Hello\nHow are you?";
	printf("before: %s\n \n", str);
	ft_putstr_non_printable(str);
} */