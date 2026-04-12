# Subject
Create a magic file named **ft_magic** that is properly formatted to enable the `file` command to detect files of type `42 file`, defined as those containing the string "42" at the 42nd byte.

# Explanation
**ft_magic** will contain:
```
41 string 42 42 file
```
- `41` - the search begins at 0. The 42nd byte is 41.
- `string` - search for a string type correspondence.
- `42` - the text to be searched is 42.
- `42 file` - the text that should be displayed when the condition is true.

To test the magic file, you should use the `file` command:
```
file -C -m ft_magic
```
After the file is compiled, a .mgc file is created. To list all the files and show the defined correspondence in **ft_magic**, use this command:
```
file -m ft_magic.mgc *
```