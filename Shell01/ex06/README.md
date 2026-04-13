# Subject
Write a command line that executes `ls -l` but displays only every second line, starting from the first line.

Example output:
```
$>ls -l | cat -e
total 4$
-rw-rw-r-- 1 eagle eagle ** ** 15 15:46 skip.sh$
-rw-rw-r-- 1 eagle eagle ** ** 15 15:41 tata$
-rw-rw-r-- 1 eagle eagle ** ** 15 15:41 titi$
-rw-rw-r-- 1 eagle eagle ** ** 15 15:41 toto$
-rw-rw-r-- 1 eagle eagle ** ** 15 15:41 tutu$
$>
```

```
$>./skip.sh | cat -e
total 4$
-rw-rw-r-- 1 eagle eagle ** ** 15 15:41 tata$
-rw-rw-r-- 1 eagle eagle ** ** 15 15:41 toto$
$>
```
# Explanation
The command: `ls -l | sed -n 'p;n'`
- `ls -l` - lists files and directories.
- `sed` - edit the text flow to output.
- `-n` - sed output is done according to the past standard.
- `p` - prints the current line of the input.
- `n` - skips the next line.