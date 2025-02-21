# Problem 22

### Names Scores 

Using names.txt, a 46K text file containing over five-thousand first names, begin by sorting it into alpabetical order. Then working out the alpabetical value for each name, multiply this value by its alphatical position in the list to obtain a name score.

For example, when the list is sorted into alpabetical order, COLIN, which is worth 3+15+12+9+14=53, is the 938th name in the list. So, COLIN would obtain a score of 938 X 53 = 49174

What is the total of all the name scores in the file?

### Solutions:
1. Parsing the each by names, split on commas and remove the quotes
2. Sorting it by alphabetical order 
3. Compute score by the sum of letter values

