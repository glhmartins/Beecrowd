n = int(input())
for i in range(n):
    x,y = map(int, input().split())
    if (y>x):
        print(x)
        continue
    res = x//y + x%y;
    print(res)