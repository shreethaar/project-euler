#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>

#define LIMIT 2000000

int main() {
    bool *is_prime = malloc(LIMIT * sizeof(bool));
    if (is_prime==NULL) {
        printf("malloc failed\n");
        return 1;
    }

    for(long i=0;i<LIMIT;i++) {
        is_prime[i]=true;
    }

    is_prime[0]=is_prime[1]=false;

    for(long p=2;p<=sqrt(LIMIT);p++) {
        if(is_prime[p]) {
            for(long multiple=p*p;multiple<LIMIT;multiple+=p) {
                is_prime[multiple]=false;
            }
        }
    }

    unsigned long long sum=0;
    for(long i=2;i<LIMIT;i++) {
        if(is_prime[i]) {
            sum+=i;
        }
    }
    printf("%llu",sum);
    free(is_prime);
    return 0;
}

