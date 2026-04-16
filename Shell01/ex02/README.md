# Solution
The command: `find . -type f -name '*.sh' -execdir basename -s '.sh' {} +`
- `find .` - to search in the directory and subdirectories.
- `-type f` - searches only files.
- `-name '*.sh'` - searches files that have the **.sh** extension.
- `-execdir basename -s '.sh'` - extracts the name of the file without the path and extension.
- `{} +` - run the command to multiple files at once.