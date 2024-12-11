import math

def largest_prime_factor(x):
    large_prime = 1
    while x % 2 == 0:
        large_prime = 2
        x //= 2  
    

    for i in range(3, int(math.sqrt(x)) + 1, 2):
        while x % i == 0:
            large_prime = i
            x //= i
    if x > 2:
        large_prime = x
    
    return large_prime

x = 600851475143
print(largest_prime_factor(x))
