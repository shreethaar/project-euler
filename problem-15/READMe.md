# Problem 15

### Lattice Paths

Starting in the top left corner of a 2x2 grid, and only being able to move to the right and down, there are exactly 6 routes to the bottom right corner.

![screenshot](screenshot.png)

How many such routes are there through a 20x20 grid ? 

### Solution:
- Formula to find unique route using binomial coefficient: `C(2n,n) = (2n)!/(n!xn!)`, where by n is the grid size.
- To find the path through the grid, it involves grid size move to the right and down, like a zig-zag motion.

### Pseduocode:
```
calc_route(grid_size):
    moves=2*grid_size
    num=fact(moves)
    denum=fact(grid_size)*fact(grid_size)
    return (num/denum

fact(n):
    // base case
    if n==0 or n==1:
        return 1
    result = 1
    // recursion case
    for i from 2 to n:
        result=result*i 
    return result
```


