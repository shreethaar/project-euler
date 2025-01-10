#include <stdio.h>

unsigned long long get_seq_len(unsigned long long n) {
    unsigned long long len=1;
    while(n!=1) {
        if(n%2==0) {
            n=n/2;
        }
        else {
            n=3*n+1;
        }
        len++;
    }
    return len;
}

int main() {
    unsigned long long max_len=0;
    unsigned long long num_max_len=0;

    for(unsigned long long i=1;i<1000000;i++) {
        unsigned long long cur_len=get_seq_len(i);
        if(cur_len>max_len) {
            max_len=cur_len;
            num_max_len=i;
        }

    }
    printf("%llu\n",num_max_len);
    printf("%llu\n",max_len);
    return 0;
}
