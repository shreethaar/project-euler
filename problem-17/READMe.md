# Problem 17

### Number Letter Counts

If the numbers 1 to 5 are written out in words: one, two, three, four, five, then there are 3+3+5+4+4=19 letter used in total.

If all the number from 1 to 1000 (one thousand) inclusive were written out in words, how many letter would be used?

NOTE: Do not count spaces or hyphens. For example, 342 (three hundred and forty-two) 23 contains letters and 115 (one hundred and fifteen) contains letters. The use of "and" when writing out numbers is in compliance with British usage.

### Solution:
- Create dictionary map for ones (1:one,2:two ...)
- Create dictonary map for tens starting with 1 (11: eleven, 12: twelve
- Create array words for 20 to 90: (twenty, thirty ..., ninety)
- When reach 100: (special placement -> one hundred)
- Number from 100 to 999 require combining the hundreds part with the appropriate suffix ("hundres" "and" + tens/ones parts). 
- When reach 1000: (special placement -> one thousand
- Iteration, iteration, iteration
- To reduce error, if-else for each process for ones, tens, hundres
- To be efficient, reuse the counts back, not necessary to recreate words tenth position for hundreds

### Pseudocode:
```
init_dict()
    ones_dict = {1:"one",2:"two",...,9:"nine"}
    teens_dict = {10:"ten",11:"eleven",...,19:"nineteen"}
    teen_dict = {20:"twenty",30:"thirty",...,90:"ninety"}

convert_num_to_word(num)
    word=""
    hundreds=num/100 
    remainder=num%100

    if(hundreds>0) {
        words+=ones_dict[hundreds]+"hundred"
        if(remainder>0) 

