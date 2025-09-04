n,m = input().split()
while int(n)!= 0 and int(m)!=0:
    y = list(m)
    while n in y:
        y.remove(n)
    numero = ""
    for x in y:
        numero += x
    if len(y) == 0:
        print(0)
    elif int(numero) == 0:
        print(0)
    else:
        print(int(numero))
    n, m = input().split()