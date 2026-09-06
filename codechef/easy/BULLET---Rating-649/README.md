# BULLET - Rating 649

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-06T18:02:41.229Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
string s[3] = {"normal", "huge", "small"};

    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        cout << s[x % 3] << "\n";
    }
}

```

---

[View on CodeChef](https://www.codechef.com/problems/BULLET)