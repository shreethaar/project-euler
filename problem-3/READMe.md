# Problem 3

### Largest Prime Factor

The prime factor of 13195 are 5,7,13 and 29
What is the largest prime factor of the number 600851475143 ?

### Solution:

1. Identify prime number
Prime number = A > 1 && A%1==0 && A%A ==0 

```
For A > 1:
    For i from 2 to sqrt(A):
        If A % i == 0:
            A is not prime
        Then A is prime
```

2. Find Largest prime number

```
1. Initialize largest_prime_factor=1
2. While X is divisible by 2:
    a. Set largest_prime_factor=2
    b. Divisble X by 2 (X=X/2) ... makes sense :)
3. For i from 3 to sqrt(X) with step size 2 (check only odd numbers):
    a. While X is divisible by i:
        i. Set largest_prime_factor = i
        ii. Divide X by i (X=X/i)
4. If X > 2:
    a. Set largest_prime_factor = X(X is prime, and it is the largest prime factor)
5. Return largest_prime_factor
```


