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
base_prime=[2,3,5,7,9,11,13]
count=6
while(count!=10001):
    int get_prime=14
    for(int i=0,i<=sizeof(base_prime);i++) {
        if(get_prime%i=0 && get_prime%1=0)  {
            count+=1;
        }
    get_prime+=1;
}
```



