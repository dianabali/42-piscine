# Subject
Write a command line that counts and displays the total number of regular files and directories in the current directory and all its subdirectories.

The count should include "." (the string directory).

Example output:
```
$>./count_files.sh | cat -e
42$
$>
```

# Explanation
The command: `find . | wc -l`
- `find .` - searches for all files / subdirectories in the directory.
- `|` - redirects the result of the first command to the next.
- `wc -l` - count the number of lines.