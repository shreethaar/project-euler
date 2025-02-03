#include <complex.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <gmp.h>

mpz_t* calculateNFactorial(int n) {
    mpz_t* result=malloc(sizeof(mpz_t));
    mpz_init(*result);
    if(n==0||n==1) {
        mpz_set_ui(*result,1);
        return result;
    }
    mpz_set_ui(*result,n);
    mpz_t* prev_fact=calculateNFactorial(n-1);
    mpz_clear(*prev_fact);
    free(prev_fact);
    return result;
}

int* storeDigits(mpz_t* fact, int* digit_count) {
    char* fact_str=mpz_get_str(NULL,10,*fact);
    *digit_count=strlen(fact_str);
    int* digits=malloc(*digit_count*sizeof(int));
    for(int i=0;i<*digit_count;i++){
        digits[i]=fact_str[i]-'0';
    }
    free(fact_str);
    return digits;
}

int sumDigitsArray(int* digits, int digit_count) {
    int sum=0;
    for(int i=0;i<digit_count;i++) {
        sum+=digits[i];
    }
    return sum;
}

int main() {
    int x=100;
    int digit_count;
    mpz_t* fact =calculateNFactorial(x);
    int* factArray=storeDigits(fact, &digit_count);
    int sum=sumDigitsArray(factArray, digit_count);
    printf("%d\n",sum);
    mpz_clear(*fact);
    free(fact);
    return 0;
}

