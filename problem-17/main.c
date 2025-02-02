#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* number_to_words(int number) {
    const char* ones[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    const char* teens[] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    const char* tens[] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};

    if(number==1000) {
        char* word=(char*)malloc(strlen("onethousand")+1);
        strcpy(word,"onethousand");
        return word;
    }

    char* word=(char*)malloc(100);
    word[0]='\0';
    int hundreds=number/100;
    int remainder=number%100;

    if(hundreds>0) {
        strcat(word,ones[hundreds]);
        strcat(word,"hundred");
        if(remainder>0){
            strcat(word,"and");
        }
    }
    if (remainder > 0) {
        if (remainder < 10) {
            strcat(word, ones[remainder]);
        } else if (remainder >= 10 && remainder < 20) {
            strcat(word, teens[remainder - 10]);
        } else {
            int tens_part = remainder / 10;
            int ones_part = remainder % 10;
            strcat(word, tens[tens_part]);
            if (ones_part > 0) {
                strcat(word, ones[ones_part]);
            }
        }
    }

    return word;
}
int main() {
    int total_letters=0;
    for(int number=1;number<=1000;number++) {
        char* word=number_to_words(number);
        total_letters+=strlen(word);
        free(word);
    }
    printf("%d\n",total_letters);
    return 0;

}

