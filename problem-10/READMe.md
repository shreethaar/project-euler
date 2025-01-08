# Problem 10

### Summation of Primes

The sum of the primes below 10 is 2+3+5+7=17
Find the sum of all the primes below two million.

### Solution:
- Sieve of Eratosthenes -> a method for finding prime numbers up to given limit
- Mark non-prime numbers starting from multiples of 2 up to 2 million

### Pseudocode:
```
sum_of_primes(limit):
    array[is_prime], size_of_array(limit), init=True
    is_prime[0]=False, is_prime[1]=False

    for p from 2 to sqrt(limit):
        if is_prime[p] is True:
            for multiple in range(p*p, limit,p):
                set is_prime[multiple]=False

    sum=0
    for i from 2 to limit-1:
        if is_prime[i] is True:
            sum += i

    return sum
```


