# Problem 16

### Power Digit Sum

2^15=32768 and the sum of the digits is 3+2+7+6+8=26

What is the sum of the digits of the number 2^1000 ?

### Solution:
- Create array to store each digit of the result of 2^1000
- Loop through by adding each digit 
- Return the result of the addition

### Pseudocode:
```
extract_digit(pow_digit) {
 array_store_digit[]=[];
 while(pow_digit>0):
    digit=pow_digit%10; 
    array_store_digit[].append(digit);
    pow_digit=pow_digit/10;
 return array_store_digit[]
}

sum_digit(array_store_digit[]) {
 int sum=0;
 int array_size=sizeof(array_store_digit);
 for(int i=0;i<array_size;i++) {
    sum+=array_store_digit[i];
 return sum
 }

main()
 pow_digit=2^1000;
 digits=extract_digit(pow_digit);
 result=sum_digit(digits);
 print(sum);
```

