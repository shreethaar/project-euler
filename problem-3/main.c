#include <stdio.h>
#include <math.h>

long prime_factor(long x) {
    long large_prime=1;
    while (x%2==0) {
        large_prime=2;
        x/=2;
    }
    for (long i=3;i<=sqrt(x);i+=2) {
        while(x%i==0) {
            large_prime=i;
            x/=i;
        }

    }
    if (x>2) {
        large_prime=x;
    }
    return large_prime;
}

int main() {
    long x = 600851475143;
    printf("%ld\n",prime_factor(x));
    return 0;
}

