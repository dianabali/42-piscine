# Subject
Write a command line that displays the list of groups th euser (defined in the environment variable `FT_USER`) belongs to.

The output should be comma-separated, without spaces.

Examples:
- for `FT_USER=bocal`:
```
$>./print_groups.sh
bocal,adm,cdrom,sudo,dip,plugdev,lxd,lpadmin,libvirt$>
```
- for `FT_USER=DAEMON`:
```
$>./print_groups.sh
daemon,bin$>
```

# Explanation
The command: `id -nG $FT_USER | tr -s ' ' ',' | tr -d '\n'`
- `id -nG $FT_USER` - prints the user groups.
- `tr -s ' ' ','` - replaces all spaces with commans.
- `tr -d '\n'` - removes the new line.