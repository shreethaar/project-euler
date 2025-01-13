#include <stdio.h>

unsigned long long fact(int n);
unsigned long long calc(int grid_size);

unsigned long long fact(int n) {
    unsigned long long result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

unsigned long long calc(int grid_size) {
    int moves = 2 * grid_size;
    unsigned long long num = fact(moves);
    unsigned long long denum = fact(grid_size) * fact(grid_size);
    return num / denum;
}

int main() {
    int grid_size = 20;
    printf("%llu\n", calc(grid_size));
    return 0;
}
