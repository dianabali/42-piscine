# Subject
Write a command line that processes the output of cat /etc/passwd with the following modifications:
- Remove comments.
- Keep every other line, starting from the second line.
- Reverse each login name.
- Sort the results in reverse alphabetical order.
- Keep only logins between the environment variables FT_LINE1 and FT_LINE2
(inclusive).
- Join them in a single line, separated by ", ".
- End the output with a "."

Example output (for lines 7 to 15):
```
$> ./r_dwssap.sh
sstq_, sorebrek_brk_, soibten_, sergtsop_, scodved_, rlaxcm_, rgmecived_, revreswodniw_,
revressta_.$>
```

# Explanation
The command:
```
cat /etc/passwd | \ # Show the content about system logins
	sed '/^#/d' | \ # Removes the lines with comments
	awk 'NR%2==0' | \ # Select only the odd lines
	cut -d: -f1 | \ # It extracts the first column before the ":". In this case the username.
	rev | \ # Reverses the order of characters
	sort -r | \ # Order in reverse order alphabetical
	sed -n "${FT_LINE1},${FT_LINE2}p" | \ # Prints the lines that are among the past variables
	tr '\n' ' '  | \ # Replaces the new line with space
	sed 's+ +, +g' | \ # Replaces the spaces with comma followed by space.
	sed 's+, $+.+g' | \ # Replaces the last comma with point.
	tr -d '\n' # Removes the new line at the end
```