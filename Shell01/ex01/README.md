# Solution
The command: `id -nG $FT_USER | tr -s ' ' ',' | tr -d '\n'`
- `id -nG $FT_USER` - prints the user groups.
- `tr -s ' ' ','` - replaces all spaces with commans.
- `tr -d '\n'` - removes the new line.