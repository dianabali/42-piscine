# Subject
In a file called **clean** write a single command that:
- Searches for all files in the current directory and its subdirectories that end
with ~ (tilde) or, start and end with # (hash).
- Displays the found files and deletes them.

Only one command is allowed, no ';' or '&&' or other chaining tricks.

# Explanation
The command: `find . -type f \( -name '#*#' -o -name '*~' \) -print -delete`
- `find .` - searches in the current directory and its subdirectories.
- `-type f` - filters only files.
- `-name '#*#'` - searches for files that start and end with '#'.
- `-o` - OR operator.
- `-name '*~'` - searches for files that end with '~'.
- `-print` - prints the found files.
- `-delete` - deletes the found files.