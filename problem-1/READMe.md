# Problem 1

### Multiple of 3 or 5

If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23. 

Find the sum of all the multiples of 3 or 5 below 1000

### Pseudocode to solve problem
```
Start from 1000, loop it down until 3
1. multiples of 3: (A % 3 == 0)
2. multiples of 5: (B % 5 == 0)

Sum += [If (A % 3 ==0)] + [If (B % 5 ==0)]
```

### Update from previous pseudocode:

**Highlight**: Didn't take account number that are multiples of both 3 and 5 (like 15) which will be included twice. 
```
Initialize sum = 0
Loop from 1 to 999 (inclusive):
    If (Number % 3 == 0 OR Number % 5 == 0): 
    Add Number to Sum
Output Sum
```


