# Longest Common Prefix

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string `""`.

 

 **Example 1:** 

```
Input: strs = ["flower","flow","flight"]
Output: "fl"

```

 **Example 2:** 

```
Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.

```

 

 **Constraints:** 

- 1 <= strs.length <= 200
- 0 <= strs[i].length <= 200
- strs[i] consists of only lowercase English letters if it is non-empty.

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 12.1 MB (beats 23.88%)  
**Submitted:** 2026-10-03T11:51:51.302Z  

```cpp
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";
        string p = strs[0];
        for(int i=0 ; i<strs.size() ; i++){
            while(strs[i].find(p)!=0){
                p=p.substr(0,p.size()-1);
                if(p.empty()) return "";
            }
        }
        return p;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/longest-common-prefix/)