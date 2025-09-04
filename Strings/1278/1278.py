n = int(input())
while n:
    f = []
    for i in range(n):
        s = input().strip().split()
        p = ""
        for j in s:
            p+= j + " "
        f.append(p.strip())
    maior = len(f[0])
    for l in f[1:]:
        maior = max(maior, len(l))
    for k in f:
        print(k.rjust(maior))
    n = int(input())
    if n:
        print()