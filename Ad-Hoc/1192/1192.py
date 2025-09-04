n = int(input())
y = "ABCDEFGHIJKLMNOPQRSTUVXWYZ"
for _ in range(n):
    x = list(input())
    letra = x[1]
    n1 = int(x[0])
    n2 = int(x[2])
    if n1 == n2:
        print(n1*n2)
    elif letra in y:
        print(n2-n1)
    else:
        print(n1+n2)