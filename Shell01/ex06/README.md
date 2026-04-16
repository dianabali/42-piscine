# Solution
The command: `ls -l | sed -n 'p;n'`
- `ls -l` - lists files and directories.
- `sed` - edit the text flow to output.
- `-n` - sed output is done according to the past standard.
- `p` - prints the current line of the input.
- `n` - skips the next line.