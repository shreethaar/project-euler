# Problem 20

### Factorial Digit Sum

For example, 10!=10x9x..x3x2x1=362880 and the sum of the digits in the number 10! is 3+6+2+8+8+0+0=27

### Solution:
- Create an algorithm to calculate n! (using recursion)
- Create a function to store each digits of the result of n! into a array
- Create a function to calculate sum and iteration through the array

### Pseudocode:
```
calculate_n_factorial(n):
 if n == 0 or n == 1 then
  return 1 
 else 
  return n * calculate_n_factorial(n - 1)

store_digits(fact):
    initialize empty array digits[]
    initialize index = 0
    while(fact != 0):
        digits[index] = fact % 10       
        fact = fact / 10            
        index += 1 
    reverse(digits)                     
    return digits[]

sum_digits_array(fact_array[]):
    sum = 0
    for i = 0 to length(fact_array) - 1:
        sum += fact_array[i]
    return sum

main():
    x = 100
    fact = calculate_n_factorial(x)
    fact_array[] = store_digits(fact) 
    sum = sum_digits_array(fact_array[])
    printf(sum) 
    return 0
```
