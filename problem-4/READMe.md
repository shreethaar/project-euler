# Problem 4

### Largest Prime Factor

A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 X 99

Find the largest palindrome made from the product of two 3-digit numbers

2-digit numbers is 9009 = 91 X 99

Find the largest palindrome made from the product of two 3-digit numbers

### Solution:

1. Algorithm to find out palindrome number 

```
For A>1:
    transformedA = (int)A -> (string)A // using itoa() with C
    checkTransformedA = reverse(transformedA) // using strrev()

    if transformedA != checkTransformedA:
        false
    else:
        true

```

2. Find largest product of 3 digit numbers
```
Start from A=999, maxPalid=0
    For i=999 to 100; i--;
        For j=i to 100; i--;
            product=i*j
            
            if isPalid(product) && product > maxPalid:
                maxPalid=product
    return maxPalid
```

