# Solution
The `patch` command applies changes of files to other files. 
```
patch a sw.diff -o b
```

**a** is the original file name.

**sw.diff** is the file that contains the differences.

`-o` generates a file named **b** that contains the differences between the file **a** and **sw.diff**.