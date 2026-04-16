# Solution
The command: `find . -type f \( -name '#*#' -o -name '*~' \) -print -delete`
- `find .` - searches in the current directory and its subdirectories.
- `-type f` - filters only files.
- `-name '#*#'` - searches for files that start and end with '#'.
- `-o` - OR operator.
- `-name '*~'` - searches for files that end with '~'.
- `-print` - prints the found files.
- `-delete` - deletes the found files.