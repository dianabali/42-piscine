# Subject
Create a file named **b**, so that:
```
%>cat -e a
STARWARS$
Episode IV, A NEW HOPE It is a period of civil war.$
$
Rebel spaceships, striking from a hidden base, have won their first victory against the evil
Galactic Empire.$
During the battle, Rebel spies managed to steal secret plans to the Empire's ultimate weapon,
the DEATH STAR,$
an armored space station with enough power to destroy an entire planet.$
$
Pursued by the Empire's sinister agents, Princess Leia races home aboard her starship, custodian
of the stolen plans that can save her people and restore freedom to the galaxy...$
$
```

```
%>diff a b > sw.diff
```

# Explanation
The `patch` command applies changes of files to other files. 
```
patch a sw.diff -o b
```

**a** is the original file name.

**sw.diff** is the file that contains the differences.

`-o` generates a file named **b** that contains the differences between the file **a** and **sw.diff**.