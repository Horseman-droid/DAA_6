# Assignment-6

**Team Members**
|   Enrollment No.  |   Name   | GithubId |
|   --------------  |   ----   | -------- |
|    IIB2019019  |   Kalpana | Kalpana200 | 
|    IIB2019020  |   Devang Bharti | Horseman-droid  |
|    IIB2019021  |   Hitika Rajesh Kumar | hitika22 |

**Group No-**"26"

**Faculty Name-**"Rahul Kala"

**Mentor Name-** "Md. Meraz"

---
## Problem Statement
knight tour chess board problem
---
## How to use code
```
#Download project
git clone https://github.com/Horseman-droid/DAA_6 
```
Project Initialize 
```
cd DAA_6
#create assignment-6 folder
mkdir assignment_06

#go to assignment-6
cd assignment_06

#Create file
touch readme.md
touch Solution.cpp
.
.
```
---

Run the code
```
g++ Solution.cpp
```
Output
```
not possible to cover in some cases 
```
---

**Test case**
```
Test Case-1
Input:
X= 0, Y=0

Output
    1 38 59 36 43 48 57 52
    60 35 2 49 58 51 44 47
    39 32 37 42 3 46 53 56
    34 61 40 27 50 55 4 45
    31 10 33 62 41 26 23 54
    18 63 28 11 24 21 14 5
    9 30 19 16 7 12 25 22
    64 17 8 29 20 15 6 13

#--------------------------#
Test Case-2
Input:
X= 0, Y= 4 

Output
    45 52 59 36 1 50 57 38
    60 35 44 51 58 37 2 49
    25 46 53 28 43 48 39 56
    34 61 26 47 54 29 42 3
    9 24 33 62 27 40 55 30
    18 63 10 21 32 13 4 41
    23 8 19 16 11 6 31 14
    64 17 22 7 20 15 12 5
    
###Theory
The Solution to this problem is based on backtracking aproach but we can say a modified verson of it which we have implemented using Warnsdorff’s Rule

the knight can start from any initial position on the chessboard. the knight is moved so that it always proceeds to the square from which the knight will have minumum onward moves.
this is basically the modified version of backtracking problem of knight’s tour.
the time needed for this algorithm grows roughly lineraly with the number of squares of the chessboard.

---
### Analysis

**Time Complexity**

the time needed for this algorithm grows roughly linearaly with the number of squares of the chessboard.

---

**Space Complexity**

the space complexity for this algorithm is O(N^2), as we have an array of N*N.
---

### References

https://stackoverflow.com/questions/19214109/how-to-optimize-knights-tour-algorithm
https://www.geeksforgeeks.org/warnsdorffs-algorithm-knights-tour-problem/
