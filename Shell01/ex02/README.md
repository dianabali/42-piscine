# Subject
Write a command line that searches for all files ending with **.sh** in the current directory and all subdirectories.

The output should display only the file names without the **.sh** extension.

Example output:
```
$>./find_sh.sh | cat -e
find_sh$
file1$
file2$
file3$
$>
```

# Explanation
The command: `find . -type f -name '*.sh' -execdir basename -s '.sh' {} +`
- `find .` - to search in the directory and subdirectories.
- `-type f` - searches only files.
- `-name '*.sh'` - searches files that have the **.sh** extension.
- `-execdir basename -s '.sh'` - extracts the name of the file without the path and extension.
- `{} +` - run the command to multiple files at once.