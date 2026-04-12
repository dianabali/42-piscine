# Subject
Write a short shell script that lists all existing files ignored by your Git repository.

Example output:
```
%> bash git_ignore.sh | cat -e
.DS_Store$
mywork.c~$
%>
```
Your script will be tested in your own environment.

# Explanation
The command: `git ls-files --others --ignored --exclude-standard`
- `git ls-files` - lists all files in your repository.
- `--others` - displays files that are not in the Git index.
- `--ignored` - displays the ignored files that were defined in the **.gitignore** file.
- `--exclude-standard` - lists the files deleted by default.