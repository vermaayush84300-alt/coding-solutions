# FSQRT - Rating 668

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-29T17:59:12.124Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
   int t;
   cin>>t;
   while(t--){
       int n,m;
       cin>>n>>m;
       if(n % m == 0 && (n / m) % 2 == 0){
           cout<<"yes"<<endl;
       }
       else{
           cout<<"no"<<endl;
       }
   }
}

```

---

[View on CodeChef](https://www.codechef.com/problems/FSQRT)