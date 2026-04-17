// #include <stdio.h>

int is_num_letter(char c)
{
	return ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'));
}

char *ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 || !is_num_letter(str[i - 1]))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
		}
		else
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

/* int main(void)
{
	char text[] = "hi, how aRe you? 42worDs foRty-two; fifty+and+one";
	printf("before: %s\n", text);
	ft_strcapitalize(text);
	printf("after: %s", text);
} */