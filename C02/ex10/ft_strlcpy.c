// #include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int src_length;
	unsigned int i;

	src_length = 0;
	while (src[src_length] != '\0')
		src_length++;
	if (size > 0)
	{
		i = 0;
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (src_length);
}

/* int main(void)
{
	char src[] = "I love green";
	char dest[50];
	
	ft_strlcpy(dest, src, 50);
	printf("src: %s\n", src);
	printf("dest: %s (copy)", dest);
} */