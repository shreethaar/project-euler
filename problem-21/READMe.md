# Problem 21

### Amicable Numbers

Let `d(n)` be defined as the sum of proper divisors of `n` (numbers less than `n` which divide evenly into `n`). If `d(a)=b` and `d(b)=a`, where `a!=b`, then a and b are an amicable pair and each of `a` and `b` are called amicable numbers. 

For example, the proper divisors of 220 are 1,2,4,5,10,11,20,22,44,55 and 110; therefore d(220)=284. The proper divisors of 284 are 1,2,4,71 and 142; so d(284)=220

Evaluate the sum of all the amicable numbers under 10000.

### Solution:
1. Find all amicable pairs under 10000
2. Two numbers a and b form an amicable if:
    - d(a)=b and d(b)=a where a!=b
    - d(n) is the sum of proper divisors of n (divisors less than n) 


### Pseudocode:

```
func d(n):
    sum=1;
    sqrt_n=sqrt_root(n) 
    for i from 2 to sqrt_n:
        if n is divisible by i: 
            add i to sum 
            if i != n/i: 
                add n/i to sum 

    return sum 

func amicable_num(limit):
    total_sum=0
    (int*)cache[]
    
    for n from 1 to limit:
        cache[n]=d(n) 

    for a from 1 to limit:
        b=cache[a] 
        if b<=limit && b!=a && cache[b]!=a:
            ifa<b:
                total_sum+=a+b

    return total_sum

