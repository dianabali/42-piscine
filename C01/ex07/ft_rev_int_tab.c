// #include <stdio.h>

void ft_rev_int_tab(int *tab, int size)
{
	int start;
	int end;
	int temp;

	start = 0;
	end = size - 1;
	while (start < end)
	{
		temp = tab[start];
		tab[start] = tab[end];
		tab[end] = temp;
		start++;
		end--;
	}
}

/* int main(void)
{
	int tab[] = {1, 2, 3, 4, 5};
	int size = 5;

	ft_rev_int_tab(tab, size);

	for (int i = 0; i < size; i++)
	{
		printf("%d ", tab[i]);
	}
	return (0);
} */