#include <stdio.h>
#include <math.h>

long prime_fact(long x) {
    long prime_factor=1;
    do {
        if(x%2==0) {
            prime_factor=2;
            x=x/2;
        }
    }
    while (x%2==0);

    long i=3;
    do {
        while (x%1==0) {
            prime_factor=i;
            x=x/i;
        }
        i+=2;
    }
    while(i<=sqrt(x));

    if(x>2) {
        prime_factor=x;
    }
    return prime_factor;
}

int main() {
    long x = 600851475143;
    printf("%ld\n",x,prime_fact(x));
    return 0;
}

