#include <stdio.h>

int main() {
    int a,b,c;
    for (a=1;a<1000;a++) {
        for (b=a+1;b<1000-a;b++) {
            c=1000-a-b;
            if (a*a+b*b==c*c) {
                printf("a = %d, b = %d, c = %d, product=%d", a, b, c,(a*b*c));
                return 0;
            }
        }
    }
    return 0;
}

