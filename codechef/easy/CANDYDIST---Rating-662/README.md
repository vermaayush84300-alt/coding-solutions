# CANDYDIST - Rating 662

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-26T18:15:27.543Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
  int t;
  cin>>t;
  while(t--){
      int n , x,k;
      cin>>n>>x>>k;
      cout<<min(n, k / x)<<endl;
  }
}

```

---

[View on CodeChef](https://www.codechef.com/problems/CANDYDIST)