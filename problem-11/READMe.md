# Problem 11

### Largest Product in a Grid

In the 20 X 20 grid below, four numbers along a diagonal line have been marked in red.

![screenshot](screenshot.png)

The product of these number is 26 X 63 X 78 X 14 = 1788696

### Solution:
- 20 X 20 divide into 5(4 X 4) 
- Each 4 X 4 grid (calculate the number of possible combinations of four adjacent numbers)
- Total combinations per 4x4 grid is 10
- Total combinations for 20x20 grid is **NOT 5 x 10** (my dumbass thought so)

##### SOoOoOooO, heRe iS hOw:
To determine the number of combinations of four adjacent number in a 20x20 grid. These combinations can be aligned in any of the following directors:
- 1. Horizontal (left to right)
- 2. Vertical (top to bottom)
- 3. Diagonal (top-left to bottom-right)
- 4. Diagonal (top-right to bottom-left)


