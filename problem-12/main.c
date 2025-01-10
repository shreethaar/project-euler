#include <stdio.h>
#include <math.h>

int div_count(int num) {
    int count=0;
    int sqrt_num=(int)sqrt(num);
    for(int i=1;i<=sqrt_num;i++) {
        if(num%i==0) {
            count+=2;
        }
    }
    
    if(sqrt_num*sqrt_num==num) {
        count--;
    }
    return count;
}

int main() {
    int n=1;
    while(1){
        int tri_num=n*(n+1)/2;
        int func_div_count=div_count(tri_num);
        if(func_div_count>500) {
            printf("%d\n",tri_num);
            break;
        }
        n++;
    }
    return 0;
}


