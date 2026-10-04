# C_RATING - Rating 650

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-04T17:56:59.831Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
  int t;
    cin >> t;

    while (t--) {
        int x,y,z;
        cin >> x >> y >> z;

        int travelTime = y / x;
        int answer= z - travelTime;

        cout <<max(0,answer) << '\n';
    }
}

```

---

[View on CodeChef](https://www.codechef.com/problems/C_RATING)