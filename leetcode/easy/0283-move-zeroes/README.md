# Move Zeroes

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given an integer array `nums`, move all `0`'s to the end of it while maintaining the relative order of the non-zero elements.

 **Note**  that you must do this in-place without making a copy of the array.

 

 **Example 1:** 

```
Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]

```

 **Example 2:** 

```
Input: nums = [0]
Output: [0]

```

 

 **Constraints:** 

- 1 <= nums.length <= 104
- -231 <= nums[i] <= 231 - 1

 

 **Follow up:**  Could you minimize the total number of operations done?

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 24.6 MB (beats 5.00%)  
**Submitted:** 2026-11-03T02:27:53.389Z  

```cpp
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // int temp =0;
        // for(int i=0; i<nums.size(); i++){
        //     if(nums[i]!=0){
        //         nums[temp] = nums[i];
        //         temp++;
        //     }
        // }
        // for(int i=temp; i<nums.size(); i++){
        //     nums[i]=0;
        // }
        int n = nums.size();
        vector<int>temp;
        for(int i=0 ; i<n ;i++){
            if(nums[i]!=0){
                temp.push_back(nums[i]);
            }
        }
        int nz=temp.size();
        for(int i =0 ; i<temp.size();i++){
            nums[i]=temp[i];
        }
        for(int i=nz ; i<n ; i++){
            nums[i]=0;
        }
    
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/move-zeroes/)