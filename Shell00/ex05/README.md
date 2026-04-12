# Subject
Create a shell script that displays the ids of the last 5 commits in your git repository.
```
%> bash git_commit.sh | cat -e
baa23b54f0adb7bf42623d6d0a6ed4587e11412a$
2f52d74b1387fa80eea844969e8dc5483b531ac1$
905f53d98656771334f53f59bb984fc29774701f$
5ddc8474f4f15b3fcb72d08fcb333e19c3a27078$
e94d0b448c03ec633f16d84d63beaef9ae7e7be8$
%>
```
Your script will be tested in our own environment.

# Explanation
The command: `git log --format='%H' -n5`
- `git log` - shows the history of commits in your repository.
- `--format='%H'` - shows only the id (hash) of the commit.
- `-n5` - shows only the last 5 commits.