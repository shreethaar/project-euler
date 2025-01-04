# Problem 7

### 10001st Prime

By listing the six prime numbers: 2,3,5,7,11 and 13, we can see that the 6th prime is 13.

What is the 10001st prime numbers?

### Solution:
- Algorithm to find prime number, which is a number that have only 2 factors: 1 and itself
- Find out a suitable test case against selected prime numbers
- Iterate over until the count reach 10001

### Pseudocode:

```
count=6
current_number=14
while(count!= 10001):
    is_prime=true
    for i in range(2, sqrt(current_number)+1):
        if(current_number % i == 0)  {
            is_prime_false
            break
        }
    if is_prime:
        count+=1

    current_number+=1;
}
```



