// #include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/* int main(void)
{
	char *s1 = "12";
	char *s2 = "12";
	char *s3 = "1";
	char *s4 = "123";
	
	printf("s1 - s2: %d\n", ft_strcmp(s1, s2));
	printf("s1 - s3: %d\n", ft_strcmp(s1, s3));
	printf("s1 - s4: %d\n", ft_strcmp(s1, s4));	
} */