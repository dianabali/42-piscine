# Solution
1. The `touch` command allows you to create files:
```
touch testShell00
```
2. The `truncate -s` command allows you to change the size to 40 bytes. `-s` is the argument for changing the size:
```
truncate -s 40 testShell00
```
3. The `touch -t` command allows you to change the time. The default is yyyymmddhhmm (year, month, day, hour, minute):
```
touch -t 202306012342 testShell00
```
4. The `chmod ` command is used to change the permissions:
```
chmod 455 testShell00
```
5. The `tar -cf` command is used to compact the file:
```
tar -cf testShell00.tar testShell00
```

6. The `tar -xvf` is used to unzip the file. When you unzip the file in Shell, the permissions and time of the file do not change:
```
tar -xvf testShell00.tar
```