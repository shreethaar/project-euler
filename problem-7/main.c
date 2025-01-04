#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main() {
    int count=6;
    int current_number=14;
    int last_prime=0;
    while(count!=10001) {
        bool is_prime=true;
        for(int i=2;i<=sqrt(current_number)+1;i++) {
            if (current_number%i==0) {
                is_prime=false;
                return 0;
            }
        }
        if (is_prime) {
            count++;
            last_prime=current_number;
        }
        current_number++;
    }
    printf("%d\n",last_prime);
    return 0;
}


