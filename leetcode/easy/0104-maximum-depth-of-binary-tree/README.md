# Maximum Depth of Binary Tree

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given the `root` of a binary tree, return  *its maximum depth*.

A binary tree's  **maximum depth**  is the number of nodes along the longest path from the root node down to the farthest leaf node.

 

 **Example 1:** 

```
Input: root = [3,9,20,null,null,15,7]
Output: 3

```

 **Example 2:** 

```
Input: root = [1,null,2]
Output: 2

```

 

 **Constraints:** 

- The number of nodes in the tree is in the range [0, 104].
- -100 <= Node.val <= 100

## Solution

**Language:** C++  
**Runtime:** 1 ms (beats 18.05%)  
**Memory:** 22.1 MB (beats 51.99%)  
**Submitted:** 2026-11-21T04:14:48.106Z  

```cpp
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int height(TreeNode *temp){
        if(temp==NULL) return 0;
        int left = height(temp->left);
        int right = height(temp->right);
        return 1+max(left,right);
    }
    
    int maxDepth(TreeNode* root) {
        return height(root);
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/maximum-depth-of-binary-tree/)