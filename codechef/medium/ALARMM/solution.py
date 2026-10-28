# cook your dish here
t= int(input())
for _ in range(t):
    n,k=map(int , input().split())
    s= input().strip()
    alarm=0
    i=0
    while i<n: 
        if s[i]=='1':
            pose = min(n-1,i+k)
            alarm+=1
            i=pose+n-1
        else:
            i+=1
    print(alarm)