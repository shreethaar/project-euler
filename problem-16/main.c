#include <stdio.h>
#include <stdlib.h>
#include <gmp.h> //Multiple Precision Arithmetic Library, handling large integers

int* extract_digit(mpz_t pow_digit,int *size) {
    mpz_t temp,remainder;
    mpz_init(temp);
    mpz_init(remainder);
    mpz_init_set(temp,pow_digit);
    *size=0;
    while(mpz_cmp_ui(temp, 0)>0) {
        mpz_tdiv_q_ui(temp,temp,10);
        (*size)++;
    }
    /*mpz_t ten;
    mpz_init_set_ui(ten,10);
    while(mpz_cmp_ui(temp,0)>0){
        mpz_div(temp,temp,ten);*/

    int *array_store_digit=(int*)malloc((*size)*sizeof(int));
    if(array_store_digit==NULL){
        fprintf(stderr,"malloc failed\n");
        exit(1);
    }
    mpz_set(temp,pow_digit);
    for(int i=*size-1;i>=0;i--) {
        array_store_digit[i]=mpz_tdiv_q_ui(temp,temp,10);
        //mpz_div_ui(temp,temp,10);
    }
    mpz_clear(temp);
    mpz_clear(remainder);
    return array_store_digit;
}

int sum_digit(int *array_store_digit,int size){
    int sum=0;
    for(int i=0;i<size;i++) {
        sum+=array_store_digit[i];
    }
    return sum;
}


int main() {
    mpz_t pow_digit;
    mpz_init(pow_digit);
    mpz_ui_pow_ui(pow_digit,2,1000);
    int size;
    int *digits=extract_digit(pow_digit,&size);
    int result=sum_digit(digits,size);
    printf("Sum: %d\n",result);
    free(digits);
    mpz_clear(pow_digit);
    return 0;
}

