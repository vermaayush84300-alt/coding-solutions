# Longest Substring Without Repeating Characters

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given a string `s`, find the length of the  **longest**   **substring**  without duplicate characters.

 

 **Example 1:** 

```
Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3. Note that "bca" and "cab" are also correct answers.

```

 **Example 2:** 

```
Input: s = "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.

```

 **Example 3:** 

```
Input: s = "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3.
Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.

```

 

 **Constraints:** 

- 0 <= s.length <= 105
- s consists of English letters, digits, symbols and spaces.

## Solution

**Language:** Python  
**Runtime:** 184 ms (beats 82.37%)  
**Memory:** 19.8 MB (beats 73.34%)  
**Submitted:** 2026-10-27T14:31:48.665Z  

```py
class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        char_index = {}
        left = 0
        maxlen=0
        for right , char in enumerate(s):
            if char in char_index and char_index[char]>=left:
                left = char_index[char]+1
            char_index[char] = right
            maxlen= max(maxlen, right-left+1)
        return maxlen
               

```

---

[View on LeetCode](https://leetcode.com/problems/longest-substring-without-repeating-characters/)