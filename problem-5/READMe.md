# Problem 5

### Small Multiple

2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive that is evenly divisble by all of the numbers from 1 to 20 ?

### Solution:

1. While loop until the smallest number is found by means (case!=found,proceeds)

```
// this method is bruteforce
bool found = false
num=1
while(!found) {
    for(i=1;i<-20;i++) {
        if(num%i!=0) {
            found=false
            break
        }
    }
    if (!found) {
        num++;
    }
} 
``` 

2. LCM approach

```
function gcd(a,b):
    while b!=0:
        temp=b
        b=a%b
        a=temp
        return a

function lcm(a,b):
    return (a*b)/gcd(a,b)

result=1
for i from 1 to 20:
    result=lcm(result,i)

return result
