# Subject
Create a file containing only "42", and nothing else.

The file name must be:
```
"\?$*'MaRViN'*$?\"
```
Example output:
```
$>ls -lRa *MaRV* | cat -e
-rw---xr-- 1 75355 32015 2 Oct 2 12:21 "\?$*'MaRViN'*$?\"$
$>
```

# Explanation
The command:
```
cat > \"\\\?\$\*\'MaRViN\'\*\$\?\\\"
42
```
To create files with special characters, you need to put `\` before the character.

For `" "`, you need `\\`.
