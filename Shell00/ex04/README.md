# Subject
In a file named **midLS**, write the command that lists all files and directories in your current directory (excluding hidden files or any file starting with a dot, including double dots).
The output should be sorted by modification date, with entries separated by a comma and a space.
Directory names should end with a slash (/).

# Explanation
The command: `ls -ptm`
- `ls` - lists the content of the directory.
- `-p` - adds a slash at the end of the directory name.
- `-t` - orders the content by modification date (latest modified).
- `-m` - separates everything by commas.