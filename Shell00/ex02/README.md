# Solution
Use the command `touch` to create **test1**, **test3**, **test4**, and **test5**, since these are files.
Also, use the `touch -t` and `chmod` commands to change the time and permissions of each file.

**test0** and **test2** are folders. To create these, use the `mkdir` command:
```
mkdir test0
mkdir test2
```
The file **test5** is linked to **test3**. To make this link, use the `ln` command:
```
ln test3 test5
```
The file **test6** is a symbolic link to the **test0** folder. The `-s` parameter creates the symbolic link:
```
ln -s test0 test6
```