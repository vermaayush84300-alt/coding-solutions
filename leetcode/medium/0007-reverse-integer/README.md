# Reverse Integer

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given a signed 32-bit integer `x`, return `x` *with its digits reversed*. If reversing `x` causes the value to go outside the signed 32-bit integer range `[-231, 231 - 1]`, then return `0`.

 **Assume the environment does not allow you to store 64-bit integers (signed or unsigned).** 

 

Original
C++
 **Example 1:** 

```
Input: x = 123
Output: 321

```

 **Example 2:** 

```
Input: x = -123
Output: -321

```

 **Example 3:** 

```
Input: x = 120
Output: 21

```

 

 **Constraints:** 

- -231 <= x <= 231 - 1

## Solution

**Language:** C++  
**Runtime:** 3 ms (beats 34.76%)  
**Memory:** 8.6 MB (beats 56.53%)  
**Submitted:** 2026-11-19T17:17:38.727Z  

```cpp
class Solution {
public:
    int reverse(int x) {
        long long rev = 0;
        int original = x;
        while(x!=0){
            rev = rev*10+x%10;
            x/=10;
        } 
       if (rev < INT_MIN || rev > INT_MAX)
            return 0;

        return (int)rev;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/reverse-integer/)