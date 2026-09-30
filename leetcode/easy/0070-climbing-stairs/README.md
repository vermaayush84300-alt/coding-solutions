# Climbing Stairs

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

You are climbing a staircase. It takes `n` steps to reach the top.

Each time you can either climb `1` or `2` steps. In how many distinct ways can you climb to the top?

 

 **Example 1:** 

```
Input: n = 2
Output: 2
Explanation: There are two ways to climb to the top.
1. 1 step + 1 step
2. 2 steps

```

 **Example 2:** 

```
Input: n = 3
Output: 3
Explanation: There are three ways to climb to the top.
1. 1 step + 1 step + 1 step
2. 1 step + 2 steps
3. 2 steps + 1 step

```

 

 **Constraints:** 

- 1 <= n <= 45

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 7.9 MB (beats 72.37%)  
**Submitted:** 2026-09-30T18:17:17.763Z  

```cpp
class Solution {
public:
    int climbStairs(int n) {
        if(n<=2) return n;
        int p1=1, p2=2;
        for(int i=3 ; i<=n ; i++){
            int curr = p1+p2;
            p1=p2;
            p2=curr;
        }
        return p2;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/climbing-stairs/)