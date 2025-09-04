n = int(input())
a = b = 0
while n!=0:
    for _ in range(n):
        x,y = map(int,input().split())
        if x>y:
            a+=1
        elif y>x:
            b+=1
    print(f"{a} {b}")
    a = b = 0
    n = int(input())