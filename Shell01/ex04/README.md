# Solution
The command: `ifconfig | grep -o -E '([[:xdigit:]]{1,2}:){5}[[:xdigit:]]{1,2}'`
- `ifconfig` - shows the settings of the system network.
- `grep` - searches by text correspondence.
- `-o -E` - searches in the text correspondence of pattern.
- `([[:xdigit:]]{1,2}:)` - searches for two hexadecimal digits followed by two points.
- `{5}` - the previous sequence should occur exactly five times.
- `[[:xdigit:]]{1,2}` - search the sequence of hexadecimal digits without two points at the end.