//#include <stdio.h>
//#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] && s2[i] && i < n - 1)
		i++;
	return (s1[i] - s2[i]);
}

/* int	main(void)
{
	char s1[] = "12";
	char s2[] = "2";	
	
	printf("realfunc: s1 - s2: %d\n", strncmp(s1, s2, 1));
	printf("myfunc: s1 - s2: %d\n", ft_strncmp(s1, s2, 1));
} */