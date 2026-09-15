# Valid Palindrome

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

A phrase is a  **palindrome**  if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string `s`, return `true` *if it is a  **palindrome**, or* `false` *otherwise*.

 

 **Example 1:** 

```
Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.

```

 **Example 2:** 

```
Input: s = "race a car"
Output: false
Explanation: "raceacar" is not a palindrome.

```

 **Example 3:** 

```
Input: s = " "
Output: true
Explanation: s is an empty string "" after removing non-alphanumeric characters.
Since an empty string reads the same forward and backward, it is a palindrome.

```

 

 **Constraints:** 

- 1 <= s.length <= 2 * 105
- s consists only of printable ASCII characters.

## Solution

**Language:** C++  
**Runtime:** 4 ms (beats 13.93%)  
**Memory:** 9.9 MB (beats 52.49%)  
**Submitted:** 2026-09-15T04:27:45.596Z  

```cpp
class Solution {
public:
    bool isPalindrome(string s) {
        int i =0;
        int j= s.size()-1;
        while(i<j){
            while(i<j && !isalnum(s[i])) i++;
            while(i<j && !isalnum(s[j])) j--;
            if(tolower(s[i]) != tolower(s[j])){
                return false;
            }
                i++;
                j--;
            
        }
        return true;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/valid-palindrome/)