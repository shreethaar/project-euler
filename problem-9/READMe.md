# Problem 9

### Special Pythagorean Triplet

A Pythagorean triplet is a set of three natural numbers, a<b<ca<b<c, for which,

`a²+b²=c²a²+b²=c²`

For example, `3² + 4² = 9 + 16 = 25 = 5²`.

There exists exactly one Pythagorean triplet for which `a+b+c=1000a+b+c=1000`.
Find the product abcabc.

### Solution:
- a,b,c are natural numbers 
- sum of a,b,c is 1000
- `a<b<c` so a and v cant be close to 1000

##### Pseudocde:

```
find_triplet():
    for a from 1 to 1000:
        for b from a + 1 to 1000-a:
            c=1000-a-b
            if a^2 + b^2 == c^2:
                return a,b,c
```



