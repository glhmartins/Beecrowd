from math import floor
n = int(input())
m = list(map(int,input().split()))
m.sort()
if n%2 != 0:
    print(m[(n//2)])
else:
    print(f"{floor((m[(n//2)-1]+m[n//2])/2)}")