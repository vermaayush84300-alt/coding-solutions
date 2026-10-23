# Largest in Array

![Difficulty](https://img.shields.io/badge/Difficulty-Basic-red)

## Problem

Given an array  **arr[].**  The task is to find the largest element and return it.

 **Examples:** 

```
Input: arr[] = [1, 8, 7, 56, 90]
Output: 90
Explanation: The largest element of the given array is 90.
```

```
Input: arr[] = [5, 5, 5, 5]
Output: 5
Explanation: The largest element of the given array is 5.
```

```
Input: arr[] = [10]
Output: 10
Explanation: There is only one element which is the largest.
```

## Solution

**Language:** c(gcc5.4)  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-23T17:26:51.810Z  

```c(gcc5.4)
int largest(int arr[], int n) {
    // Code Here
    int largest = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    return largest;
}
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/largest-element-in-array4009/1)