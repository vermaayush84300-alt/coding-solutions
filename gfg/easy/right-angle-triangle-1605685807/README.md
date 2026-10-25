# Solid Right Angle Triangle Pattern

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given an integer **n**  **.** Write a program to print the Right angle triangle wall **.** The length of perpendicular and base is **s.** 

 **Note:**  Print exactly single " " after "  *". Print a new line after printing the triangle.

 **Examples:** 

```
Input: n = 4
Output:
* 
 **  
 **  * 
 **   **  
Explanation: Length of perpendicular and base of triangle is 4.
```

```
Input: n = 3
Output:
* 
 **  
 **  * 
Explanation: Length of perpendicular and base of triangle is 3.
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-25T04:44:15.621Z  

```cpp
class Solution {
  public:
    void printPattern(int n) {
        // code here
        for(int i=0 ; i<n; i++){
        for(int j=0 ; j<i+1;j++){
          cout<<"*"<<" ";
        }
        cout<<endl;
    }
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/right-angle-triangle-1605685807/1)