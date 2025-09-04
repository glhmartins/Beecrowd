n,m = map(int, input().split())
while n!= 0 and m!= 0:
    c = str(n+m)
    if "0" in c:
        s = ""
        for i in c:
            if i != "0":
                s+=i
        print(s)
    else:
        print(c)
    n, m = map(int, input().split())