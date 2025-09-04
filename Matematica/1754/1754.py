for i in range(int(input())):
    x, y = map(int, input().split())
    z = x//y
    if z == 0:
        z+=1
    print(f"{z}" if x%y==0 else f"{z+1}")