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
               
