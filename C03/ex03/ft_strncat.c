// #include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int j;
	int i;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j] && nb > j)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

/* int main(void)
{
	char src[50] = "Wor ld!";
	char dest[50] = "Hello ";
	printf("src: %s\n", src);
	printf("dest: %s\n", dest);

	ft_strncat(dest, src, 4);
	printf("src + dest: %s", dest);
	return (0);
} */