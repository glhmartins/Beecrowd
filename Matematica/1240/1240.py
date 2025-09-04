n = int(input())
for _ in range(n):
    x = input().split()
    a = list(x[0])
    b = list(x[1])
    igual = 1
    if len(a) >= len(b):
        A = a[len(a)-len(b):]
        for x in range(len(A)):
            if A[x] != b[x]:
                igual = 0
                break
        if igual == 1:
            print("encaixa")
        else:
            print("nao encaixa")
    else:
        print("nao encaixa")