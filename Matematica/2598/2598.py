from math import ceil
n = int(input())
for _ in range(n):
    km, r = map(int, input().split())
    print(ceil(km/r))