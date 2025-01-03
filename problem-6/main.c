#include <stdio.h>

int first_obj() {
    int sum=0;
    for(int i=1; i<=100;++i) {
        sum+=i*i;
    }
    return sum;
}

int second_obj() {
    int sum=0;
    for(int i=1;i<=100;++i) {
        sum += i;
    }
    return sum*sum;
}

int third_obj(int x,int y) {
    int diff=x-y;
    printf("Difference: %d", diff); 
}

int main() {
    int sum_square=first_obj();
    int square_sum=second_obj();
    third_obj(square_sum,sum_square);
    return 0;
}
