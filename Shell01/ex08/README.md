# Solution
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