// #include <stdio.h>

int ft_strlen(char *str)
{
	int n;

	n = 0;
	while (*str++)
	{
		n++;
	}
	return (n);
}

/* int main(void)
{
	char *s = "Helloooo";
	printf("%d", ft_strlen(s));
	return (0);
} */