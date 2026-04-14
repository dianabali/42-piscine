# Subject
Create a function that displays all unique combinations of three distinct digits, with both the digits within each combination and the combinations themselves in ascending order.

Expected output:
```
$>./a.out | cat -e
012, 013, 014, 015, 016, 017, 018, 019, 023, ..., 789$>
```
- **987** is not included because **789** already covers that combination.
- **999** is not included because the digit **9** appears more than once.

The function should be prototyped as follows:
```
void ft_print_comb(void);
```