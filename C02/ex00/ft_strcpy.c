// #include <stdio.h>

char *ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/* int main(void)
{
	char src[] = "I love cats!";
	char dest[50];

	ft_strcpy(dest, src);
	printf("src: %s\n", src);
	printf("dest: %s", dest);
	return (0);
} */