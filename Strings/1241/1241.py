n = int(input())
for i in range(n):
    a, b = input().split()
    encaixa = True
    if len(a) <  len(b):
        encaixa = False
    elif len(a)>=len(b):
        sub = a[len(a)-len(b)::]
        if sub != b:
            encaixa = False
    if encaixa == True:
        print("encaixa")
    else:
        print('nao encaixa')