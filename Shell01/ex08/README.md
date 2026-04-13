# Subject
Write a command line that:
- takes numbers from variables **FT_NBR1**, in **'\\"?!** base and **FT_NBR2**, in **mrdoc**
base.
- Displays the sum of both in the **gtaio luSnemf** base.

Example 1:
```
FT_NBR1=\'?"\"'\
FT_NBR2=rcrdmddd
```
The result is:
```
Salut
```
Example 2:
```
FT_NBR1=\"\"!\"\"!\"\"!\"\"!\"\"!\"\"
FT_NBR2=dcrcmcmooododmrrrmorcmcrmomo
```
The result is:
```
Segmentation fault
```

# Explanation
The command:
```
echo $FT_NBR1 + $FT_NBR2 | \ # Concatenates strings
	sed "s/'/0/g" | \ # Replaces simple quotes with 0
	tr '\\"?!' 1234 | \ # Replaces '\' 'by 1, '"' by 2, '?' by 3 and '!' by 4
	tr 'mrdoc' 01234 | \ # Replaces m by 0, r by 1, d by 2, o by 3 and c by 4.
	xargs echo 'obase=13; ibase=5;' | \ # Defines that the input base is 5, and the output is 13.
	bc | \ # Executes the conversion between the two bases.
	tr 0123456789ABC 'gtaio luSnemf' # Replaces the digits of base 13 with the past dictionary
```