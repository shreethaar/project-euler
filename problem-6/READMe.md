# Problem 6 

### Sum Square Difference

The sum of the squares of the first ten natural number is,

1² + 2² + ... + 10² = 385

The square of the sum of the first ten natural numbers is.

(1 + 2 + ... + 10)² = 55² = 3025

Hence the difference between the sum of the squares of the first ten natural numbers and the squares of the sum is 3025 - 385 = 2640

Find the difference between the sum of the squares of the first one hundred natural numbers and the squares of the sum

**Objective:**
- The sum of the squares of the first one hundred natural numbers
- The square of sum of the first one hundred natural numbers
- Find the differences of those two 

### Solution:

##### Pseudocode of the first objective:

```
sum = 0
for(i=1;i<=100;++i) {
    power_of_i = pow(i,2)
    sum+=power_of_i
    }
    return sum
```

##### Pseudocode of the second objective:
```
sum = 0 
for(i=1;i<=100;++i) {
    sum+=i;
    }
    sum=pow(sum,2)
    return sum
}
```

##### Pseudocode of the third objective:
```
diff=second_obj-first_obj
```

