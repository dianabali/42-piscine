# Subject
Create the following files and directories. Adjust their properties so that when you run the `ls -l` command in your directory, the output looks like this:
```
%> ls -l
total XX
drwx--xr-x 2 XX XX XX Jun 1 20:47 test0
-rwx--xr-- 1 XX XX 4 Jun 1 21:46 test1
dr-x---r-- 2 XX XX XX Jun 1 22:45 test2
-r-----r-- 2 XX XX 1 Jun 1 23:44 test3
-rw-r----x 1 XX XX 2 Jun 1 23:43 test4
-r-----r-- 2 XX XX 1 Jun 1 23:44 test5
lrwxrwxrwx 1 XX XX 5 Jun 1 22:20 test6 -> test0
%>
```
Once you've completed this, run the following command to create the file to be submitted:
```
%> tar -cf exo2.tar *
```

# Explanation
Use the command `touch` to create **test1**, **test3**, **test4**, and **test5**, since these are files.
Also, use the `touch -t` and `chmod` commands to change the time and permissions of each file.

**test0** and **test2** are folders. To create these, use the `mkdir` command:
```
mkdir test0
```
The file **test5** is linked to **test3**. To make this link, use the `ln` command:
```
ln test3 test5
```
The file **test6** is a symbolic link to the **test0** folder. The `-s` parameter creates the symbolic link:
```
ln -s test0 test6
```