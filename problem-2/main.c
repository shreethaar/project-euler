#include <stdio.h>

int main() {
    int a=1,b=2,sum=0;
    while (a<4000000){
        if(a%2==0) {
            sum+=a;
        }
    int swap = a;
    a = b;
    b = swap + b;
    }
    printf("%d\n",sum);
    return 0;
}

