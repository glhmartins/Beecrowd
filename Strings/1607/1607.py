t = int(input())
for i in range(t):
    o,m = input().split()
    op = 0
    for l in range(len(o)):
        if ord(o[l])<ord(m[l]):
            op += ord(m[l]) - ord(o[l])
        elif ord(o[l])>ord(m[l]):
            op += 26 - (ord(o[l])-ord(m[l]))
    print(op)