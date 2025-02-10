#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int d(int n) {
    int sum=1;
    int sqrt_n=(int)sqrt(n);
    for(int i=2;i<=sqrt_n;i++) {
        if(n%i==0) {
            sum+=i;
            if(i!=n/i) {
                sum+=n/i;
            }
        }
    }
    return sum;
}

int main() {
    const int LIMIT=10000;
    long long total_sum=0;
    int* cache=(int*)calloc(LIMIT+1, sizeof(int));
    for(int n=1;n<=LIMIT;n++) {
        cache[n]=d(n);
    }

    for(int a=1;a<=LIMIT;a++) {
        int b=cache[a];
        if(b<=LIMIT&&b!=a&&cache[b]==a) {
            if(a<b) {
                total_sum+=a+b;
            }
        }
    }
    printf("Sum of all amicable number under %d: %lld\n",LIMIT,total_sum);
    free(cache);
    return 0;
}

