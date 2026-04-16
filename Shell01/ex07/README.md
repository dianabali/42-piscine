# Solution
The command:
```
cat /etc/passwd | \ # Shows the content of system logins
	sed '/^#/d' | \ # Removes the lines with comments
	awk 'NR%2==0' | \ # Selects only odd lines
	cut -d: -f1 | \ # Extracts the first column before the ":" (username)
	rev | \ # Reverses the order of characters
	sort -r | \ # Orders in reverse order alphabetical
	sed -n "${FT_LINE1},${FT_LINE2}p" | \ # Prints the lines that are among the past variables
	tr '\n' ' '  | \ # Replaces the new lines with spaces
	sed 's+ +, +g' | \ # Replaces the spaces with comma followed by space
	sed 's+, $+.+g' | \ # Replaces the last comma with point
	tr -d '\n' # Removes the new line at the end
```