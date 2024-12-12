#include <stdio.h>

int palidCheck(int num) {
    int a=num;
    int reverse=0;
    int remainder;

    while (num>0) {
        remainder=num%10;
        reverse=reverse*10+remainder;
        num/=10;
    }
    return a==reverse;

}

int productCheck() {
    int maxPalid=0;
    for(int i=999;i>=100;i--) {
        for(int j=i;j>=100;j--) {
            int prod=i*j;
            if(palidCheck(prod) && prod > maxPalid) {
                maxPalid=prod;
            }
        }
    }
    return maxPalid;

}


int main() {
    int result=productCheck();
    printf("%d\n",result);
    return 0;
}


